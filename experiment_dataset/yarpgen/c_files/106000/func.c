/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106000
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-96)) & (((/* implicit */int) var_14)))))), (((unsigned long long int) var_9))));
    var_16 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) != (((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */int) ((((/* implicit */int) (signed char)112)) != (((/* implicit */int) (signed char)-113)))))))) ? (((/* implicit */int) (unsigned short)43263)) : (((((((/* implicit */int) (unsigned short)43263)) + (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) - (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (unsigned short)41003))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (signed char)112)))) | (((/* implicit */int) arr_1 [1ULL] [i_2 - 2])))))));
                    var_19 = ((/* implicit */int) (signed char)73);
                }
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-38))))) | (min((((/* implicit */long long int) arr_3 [i_1 + 2] [i_0])), (((((/* implicit */_Bool) 5152074929210047364ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (arr_5 [i_0] [i_0] [i_0] [(signed char)10]))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    var_21 |= ((/* implicit */long long int) ((1948318802) | (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_4] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3])) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [6LL] [i_3] [i_5]))));
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_3]))) & (arr_12 [i_5] [i_5] [i_3] [i_4] [i_3] [i_1 + 2] [i_0]))) << (((((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_3] [i_4] [i_4])) - (199))))))));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_5] [i_4])) - (((/* implicit */int) (unsigned short)24532)))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)41004))))) ? (((/* implicit */unsigned long long int) var_4)) : (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-5))) | (0LL))), (((/* implicit */long long int) var_13))))) : (var_5))))));
}
