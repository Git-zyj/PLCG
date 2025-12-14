/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154595
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
    var_19 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (min(((-(-622647451))), (((var_2) | (((/* implicit */int) var_11))))))));
    var_20 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) max((var_2), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 18446744073709551604ULL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
        var_21 = ((/* implicit */signed char) ((max((((5386836821779258001ULL) << (((13059907251930293614ULL) - (13059907251930293604ULL))))), (((/* implicit */unsigned long long int) (unsigned char)53)))) >> (((((/* implicit */int) min((((/* implicit */signed char) arr_0 [(unsigned char)21])), (max((arr_1 [i_1]), (var_14)))))) + (62)))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_1]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((13059907251930293614ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_3] [i_3])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)102)) == (((/* implicit */int) (unsigned char)214))))) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_3] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) ((min((((/* implicit */int) (unsigned char)154)), (-78514894))) == (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) var_5))))))))));
                        arr_22 [i_1] [i_2] [i_2] [i_1] [i_5] [i_2 - 1] [i_2] = ((/* implicit */unsigned char) max((-14170499), (((/* implicit */int) arr_10 [i_1] [i_5 + 1] [i_3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_1] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_4] [(unsigned char)16])) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */int) (unsigned short)33349)) - (arr_11 [i_1] [i_2] [i_4])))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) arr_1 [i_4]))))))));
                    }
                    arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) 5386836821779258001ULL);
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((arr_24 [i_2 - 3] [i_3] [i_2] [i_2] [i_2 - 1]) - (arr_24 [i_2 + 1] [i_3] [i_2] [i_2] [i_2 - 2]))))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_4))));
                }
                var_27 = ((/* implicit */unsigned char) ((526378714) ^ (((/* implicit */int) (unsigned char)5))));
                var_28 &= ((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_1] [(unsigned char)8] [(signed char)8] [i_3]);
            }
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            var_29 = ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_1] [(unsigned char)12] [(unsigned char)11]))));
            var_30 = min((((((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_8] [i_8] [i_8] [i_1] [i_1] [i_1])), (arr_29 [i_1]))))) : (((((/* implicit */unsigned long long int) 2147483647)) + (5386836821779257985ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_3)) - (28007)))))) != (min((13059907251930293627ULL), (((/* implicit */unsigned long long int) var_17))))))));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) ((min((arr_36 [22] [14]), (((/* implicit */unsigned long long int) (signed char)1)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_9] [i_9])))))) ? (max((((((/* implicit */int) (_Bool)1)) - (var_2))), (((/* implicit */int) (signed char)-31)))) : (((((/* implicit */int) (signed char)-110)) + (((/* implicit */int) arr_34 [i_9] [i_9]))))))));
        var_32 += ((/* implicit */unsigned char) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
    }
}
