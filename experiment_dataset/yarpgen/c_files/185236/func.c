/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185236
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (var_1)));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_5))));
    var_13 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967286U)), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    arr_7 [(short)9] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10214214616005673039ULL)) ? (var_8) : (var_3))))));
                    arr_8 [i_1] [i_1] [i_2] = (+(max((((/* implicit */unsigned int) (short)24154)), (arr_6 [i_2 + 1] [i_2 + 3] [i_1] [i_2 - 1]))));
                    arr_9 [i_1] = ((/* implicit */signed char) var_10);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_2))));
                            var_15 = ((/* implicit */unsigned char) arr_16 [i_4]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_6] = ((/* implicit */unsigned int) arr_1 [i_1] [i_5]);
                            var_16 = ((/* implicit */_Bool) var_7);
                            var_17 += ((/* implicit */unsigned int) arr_3 [i_5 + 2] [i_5 - 2]);
                            arr_23 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) (+(var_9)));
                            var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_2)))), (((var_10) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 2] [i_0])))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) max(((_Bool)1), (var_10)))) >> (((var_8) - (17893287127831637632ULL))))) >> (((((((/* implicit */_Bool) (unsigned short)54211)) ? (var_8) : (14789274024062036173ULL))) - (17893287127831637655ULL)))));
            }
        } 
    } 
}
