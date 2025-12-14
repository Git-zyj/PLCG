/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146674
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                var_13 = ((((/* implicit */_Bool) arr_3 [i_1 + 4] [i_1 + 4])) || (((/* implicit */_Bool) arr_0 [i_0])));
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)10))));
                            }
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) min((var_4), (((/* implicit */unsigned long long int) max((max((((/* implicit */short) (_Bool)1)), (var_9))), (((/* implicit */short) arr_11 [i_1 + 4] [i_1] [i_1 + 1] [i_1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 16; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((short) (((+(((/* implicit */int) var_0)))) * (((/* implicit */int) arr_17 [i_0] [i_1])))));
                                var_17 ^= ((/* implicit */signed char) (+(((unsigned long long int) var_10))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_2);
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((_Bool) var_10))) : (((int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (_Bool)1)))))));
}
