/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130562
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] [i_0] &= (-(var_1));
            arr_6 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(2891509591U)))), (max((var_4), (((/* implicit */long long int) arr_3 [4] [i_0] [i_1]))))))), (((((/* implicit */unsigned long long int) 1403457704U)) ^ (7112572233768386181ULL)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 4; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_11 = ((arr_3 [i_0 + 2] [i_0 + 2] [i_2 + 1]) % (((/* implicit */int) (signed char)127)));
                var_12 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_2 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_9 [i_2 + 2] [i_0 + 1]))));
            }
            var_13 *= ((/* implicit */unsigned long long int) (-((~((-2147483647 - 1))))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 4) 
            {
                var_14 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) / (((1403457704U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56)))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    arr_18 [i_2] [(signed char)4] = ((/* implicit */unsigned long long int) (+(arr_15 [i_0] [i_4 + 1] [i_0 + 2] [i_2 - 4])));
                    arr_19 [i_0] [i_5] [2U] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2 - 2] [i_4 - 3] [i_0 + 2])) ? (((/* implicit */unsigned int) 1965733532)) : (((unsigned int) 1403457704U))));
                    arr_20 [i_0] [i_2] [i_2] [i_4] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125))))) ^ (arr_0 [i_4 - 3]));
                }
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_28 [i_0] [i_2] [i_0] [i_2] [i_6] [i_7] [(unsigned char)5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(arr_11 [i_0] [(unsigned char)3] [i_4])))) ^ (4155567365266143514ULL)));
                            arr_29 [i_0] [i_2] [i_0] [i_6] [i_0] = ((/* implicit */short) ((unsigned char) (signed char)127));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((int) var_6)) < (arr_0 [i_4 - 1]))))));
                            var_16 &= ((/* implicit */unsigned char) 1403457686U);
                            arr_30 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_4] [i_6])) ? (arr_17 [i_6] [i_2] [i_4] [2U] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1403457705U))))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 2891509591U))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)129)) & (1226095265)));
            }
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 3) 
                    {
                        {
                            arr_44 [i_2] [(signed char)3] [(unsigned short)4] = arr_41 [i_11 + 1] [i_11 - 1] [i_11 - 2] [i_11] [i_11 + 1];
                            var_19 = ((/* implicit */unsigned char) ((arr_41 [i_2] [i_2] [i_2] [(unsigned short)5] [i_2 + 1]) % (((/* implicit */int) (signed char)-125))));
                            arr_45 [9] [i_2] [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-125)) ? (14778551990664621199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10] [i_2]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0 + 1] [i_2] [i_11 - 1])))));
                        }
                    } 
                } 
                arr_46 [i_2] [(unsigned char)1] = ((/* implicit */int) (-((-(1403457704U)))));
            }
        }
        arr_47 [i_0] [i_0] |= ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0]))) / (((((/* implicit */_Bool) ((((/* implicit */int) (short)5763)) % (((/* implicit */int) arr_9 [i_0] [i_0]))))) ? (arr_7 [7] [i_0 + 1] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0] [(unsigned char)10] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))));
        arr_48 [i_0] = ((/* implicit */int) ((max((1403457732U), (((/* implicit */unsigned int) arr_25 [i_0] [i_0])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [i_0]))) % (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned short)65535))))))))))));
    }
    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 1) /* same iter space */
    {
        arr_53 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [11U] [6ULL] [(_Bool)1])) % (1226095265))) / (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) -1226095265)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_12] [i_12]))) ^ ((-(2891509580U)))))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [3] [i_12 + 1])) ? (arr_51 [i_12]) : (arr_51 [i_12]))))));
        var_21 = ((/* implicit */int) (((+(arr_42 [i_12] [i_12] [i_12 + 2] [(unsigned short)1] [i_12]))) < (((arr_42 [i_12] [i_12] [i_12 + 1] [9U] [i_12]) % (arr_42 [i_12] [(short)8] [i_12 + 1] [12ULL] [i_12])))));
    }
    var_22 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned char) var_0))));
}
