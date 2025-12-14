/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115889
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((_Bool) arr_9 [i_3] [(_Bool)1] [i_1] [(_Bool)1] [i_0] [i_0]))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_1)))) : (((arr_7 [i_2] [2U] [i_2 + 1] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_1] [i_2 - 1] [(signed char)12])))))))))));
                            var_19 = ((/* implicit */short) var_10);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 17; i_6 += 3) 
                        {
                            {
                                arr_21 [i_0] [i_0] [10ULL] [i_5] [i_0] = ((/* implicit */long long int) ((var_3) >= ((+(((((/* implicit */int) arr_11 [i_0 + 1] [i_1] [(short)17] [(short)17])) / (((/* implicit */int) var_15))))))));
                                var_20 += ((/* implicit */unsigned short) (_Bool)0);
                                var_21 ^= ((/* implicit */unsigned short) ((min((min((((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)1] [i_1] [i_4] [i_1] [11ULL])), (var_5))), (((/* implicit */unsigned long long int) var_7)))) != ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_6)))))));
                                arr_22 [i_0] [i_0] [9LL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0 - 4] [i_4] [i_6 - 2]), (((/* implicit */long long int) arr_6 [i_0 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 6438278947303532967LL)) : (min((((/* implicit */unsigned long long int) arr_17 [i_5])), (var_5))))))));
                            }
                        } 
                    } 
                } 
                var_22 = var_15;
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned long long int) 953555261);
}
