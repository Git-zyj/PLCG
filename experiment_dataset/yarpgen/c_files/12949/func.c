/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12949
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) var_1);
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        arr_10 [19LL] [i_0] [i_1] [13ULL] [i_2] [i_3] = ((/* implicit */unsigned int) var_4);
                        arr_11 [i_0] [i_0] [(signed char)10] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 1] [i_2 - 1]))) + (arr_0 [i_1 - 1] [i_3 + 1]))))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [(signed char)0]);
                        var_12 *= ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_2)), (6U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_5 [22U] [i_1] [i_2]))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) arr_3 [i_0] [4ULL] [i_5]);
                        var_14 += ((/* implicit */long long int) ((unsigned long long int) arr_5 [(unsigned char)6] [(unsigned short)4] [i_1 + 1]));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1] [i_1]))) ? ((-(var_10))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [16])) ? (arr_4 [(unsigned short)23] [(unsigned short)23] [i_0]) : (((/* implicit */unsigned long long int) var_2)))))))));
                        var_16 = ((/* implicit */signed char) ((unsigned long long int) arr_17 [i_2 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (18446744073709551610ULL)));
                    }
                    var_18 |= ((/* implicit */_Bool) (~(10202271947595879230ULL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (_Bool)0);
}
