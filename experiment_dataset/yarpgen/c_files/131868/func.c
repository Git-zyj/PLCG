/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131868
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_3] = arr_5 [i_2 - 2] [i_0 + 1] [(short)4];
                        var_21 = ((/* implicit */long long int) var_10);
                        var_22 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_0 - 1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) (-(var_7)))) ? (((2147483647) % (((/* implicit */int) var_3)))) : (((/* implicit */int) var_3)));
                        arr_16 [i_0] [(short)13] [(short)13] [(short)13] [i_4] &= ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) var_16)) / (var_6)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_1] [(short)9] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_22 [i_2 - 2] [(unsigned short)3] [i_2] [i_0 - 1] [i_6]), (arr_22 [i_2 - 1] [i_1] [i_2] [i_0 + 1] [i_6]))))));
                                var_24 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)5951)))))));
                    var_26 = ((/* implicit */unsigned long long int) ((min((var_5), (((/* implicit */long long int) var_8)))) & (((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_2 - 1] [i_2 + 1] [(signed char)6])))))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                {
                    arr_28 [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_8)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (short)1521)))))))));
                    var_27 = ((/* implicit */int) (+(((long long int) var_19))));
                }
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16)))))));
                var_29 = ((/* implicit */short) var_15);
                var_30 -= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)105)))))))), ((+(((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))));
            }
        } 
    } 
}
