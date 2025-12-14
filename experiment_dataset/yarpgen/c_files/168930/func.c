/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168930
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)));
    var_19 ^= ((/* implicit */unsigned long long int) ((int) var_4));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1]))))));
                    var_20 = ((/* implicit */long long int) arr_5 [i_2] [i_2] [i_0] [i_2]);
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_8 [14ULL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_2 + 1] [i_0])))))), (((/* implicit */int) ((short) arr_2 [10ULL] [i_1 - 1]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [(short)8] [7LL] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) arr_3 [i_2 + 1] [i_3]);
                                var_22 = ((_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4] [i_4]))))));
                                arr_16 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_5 [i_1 - 1] [i_2 - 1] [i_0] [i_0]));
                                arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((unsigned long long int) (+(var_12))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */_Bool) var_2);
}
