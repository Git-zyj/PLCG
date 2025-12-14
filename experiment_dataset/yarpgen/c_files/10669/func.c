/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10669
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
    var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)24))));
    var_19 -= ((/* implicit */int) ((long long int) var_9));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_3))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned char) max((var_7), (((var_9) && (((/* implicit */_Bool) (short)14955))))))), (((unsigned char) (unsigned char)176))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) var_15);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) * (((/* implicit */int) ((_Bool) arr_1 [i_2] [i_2]))))))));
                        arr_12 [i_0] [i_0] [i_3] = ((unsigned long long int) (!(arr_4 [i_0] [i_2] [i_3])));
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)24536))));
                        var_24 |= ((/* implicit */int) min((max((max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_0] [i_2] [i_1])))), (((/* implicit */long long int) ((int) (signed char)-74))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_2] [i_2]))) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) (signed char)-127)))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_11 [i_5 - 2] [i_4] [i_1] [(signed char)18] [i_1] [(signed char)18]))))) ? (((/* implicit */int) arr_13 [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 1] [i_5] [i_5])) : (((/* implicit */int) arr_14 [i_5 + 1] [i_5 - 1] [i_5 - 3] [i_5 + 1] [i_5 - 1]))));
                        }
                        for (short i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_26 += ((/* implicit */unsigned long long int) arr_4 [(_Bool)1] [i_2] [i_2]);
                            var_27 ^= ((/* implicit */unsigned long long int) arr_18 [1LL] [(_Bool)1] [i_2] [i_1] [3]);
                            var_28 = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [(unsigned char)11]);
                        }
                        var_29 = ((/* implicit */int) (_Bool)1);
                    }
                }
            } 
        } 
    } 
}
