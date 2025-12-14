/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128012
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0] [i_2] [i_3]))) ? (((arr_8 [i_0] [i_0] [i_0] [i_3]) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (arr_7 [i_1])))))), (((/* implicit */long long int) arr_3 [i_2 - 1] [i_2] [i_2]))));
                        arr_12 [i_3] = ((/* implicit */long long int) var_3);
                    }
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */_Bool) var_2);
                        arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)67)))) / (((((/* implicit */_Bool) 6048993889999347383ULL)) ? (((/* implicit */int) (short)-11004)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 |= ((/* implicit */unsigned short) (_Bool)1);
                            var_16 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 + 1]))));
                            var_17 |= ((/* implicit */short) ((int) (((_Bool)1) ? (arr_13 [i_0] [i_1] [i_5] [i_4]) : (arr_13 [i_5] [i_0] [i_2 - 1] [i_0]))));
                        }
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_6] [i_1] [i_1] [i_6] [i_6 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (((-(arr_13 [i_0] [i_1] [i_2] [i_1]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0] [i_0] [i_6]) != (arr_5 [i_6]))))))))));
                        arr_21 [i_6] [i_6] [i_2] [i_6 - 1] [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_16 [i_6] [i_2] [i_1] [i_0] [i_0] [i_0]) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0])))))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((arr_18 [i_0] [i_2] [i_2] [i_0]) && (((/* implicit */_Bool) var_6))));
                }
            } 
        } 
    } 
}
