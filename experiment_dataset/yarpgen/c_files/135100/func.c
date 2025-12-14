/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135100
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
    var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_2)))) - (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)65535))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (short)630)))) & (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_3 [(unsigned short)17])))))))));
                        arr_10 [i_3] [20U] = ((/* implicit */signed char) ((unsigned long long int) arr_0 [i_2]));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-124)) + (((int) (unsigned short)65535))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535))))) / (arr_7 [i_0] [i_1] [i_2] [i_4])));
                            arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */short) var_9);
                            var_16 = ((/* implicit */unsigned int) var_7);
                        }
                        for (unsigned int i_5 = 3; i_5 < 21; i_5 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) var_11))))));
                            arr_18 [i_3] [i_1] [i_1] [i_3] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57931))) : (1405526214U)))))) ? (9665674348982059424ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_0])))))));
                            var_17 = ((/* implicit */_Bool) (unsigned char)232);
                            var_18 = ((/* implicit */unsigned char) (((~(((unsigned int) arr_2 [i_3] [i_3])))) & (((/* implicit */unsigned int) ((/* implicit */int) (((~(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                            var_19 = max((var_11), (((/* implicit */unsigned char) var_2)));
                            arr_23 [i_0] [8LL] [i_1] [i_2] [i_3] [8LL] = ((/* implicit */unsigned short) 1614342194U);
                            var_20 = ((/* implicit */unsigned long long int) arr_21 [i_3]);
                            arr_24 [i_0] [i_1] [i_0] [8] |= ((/* implicit */unsigned char) 2147483647);
                        }
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65535))))))) - (max((0U), (((/* implicit */unsigned int) 1949956884)))))))));
                    }
                } 
            } 
            arr_25 [(short)5] = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_0] [i_1]));
        }
    }
    var_22 = ((/* implicit */unsigned long long int) (~(max((4294967295U), (((/* implicit */unsigned int) (unsigned short)30513))))));
}
