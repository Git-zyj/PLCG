/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129607
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
    var_19 = ((/* implicit */unsigned char) max((min((((/* implicit */int) max((var_2), (((/* implicit */short) var_12))))), ((~(((/* implicit */int) var_6)))))), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 1])) && (((/* implicit */_Bool) (signed char)-112)))) ? (((/* implicit */int) arr_1 [i_0] [6ULL])) : (((((/* implicit */int) arr_5 [i_0] [i_1 - 1])) - (((/* implicit */int) arr_5 [i_0] [i_1])))))), (((((((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_1])), (arr_4 [(unsigned short)13])))) + (2147483647))) >> (((((/* implicit */int) (signed char)-48)) + (48)))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */unsigned short) min((((unsigned long long int) arr_4 [i_1 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_1 + 1]), (arr_5 [(_Bool)1] [8ULL])))) ? (((unsigned int) arr_1 [i_0] [i_0])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)12766)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) arr_1 [i_1] [i_2]))))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */long long int) (unsigned char)63);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_3 + 1]));
                                arr_22 [i_5] [i_5] [i_3 + 3] [i_4] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 1] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_3 + 1] [i_4] [i_5]))) : (arr_19 [i_0] [i_5])))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_15 [i_0] [i_5])))));
                                arr_23 [i_5] [i_3] = (+(((1720495104U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned short)3] [(unsigned short)3]))))));
                                var_21 = ((/* implicit */signed char) (+(arr_21 [i_3] [i_3 - 1] [i_3 + 3] [i_3] [i_5])));
                                arr_24 [i_0] [i_1 - 1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) arr_14 [(unsigned short)10] [6] [i_4] [(unsigned short)10]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_27 [(unsigned short)1] [i_1] [i_3] [i_1] [i_6] = ((/* implicit */unsigned char) ((signed char) ((unsigned long long int) arr_8 [(unsigned short)7] [3U] [i_6])));
                        arr_28 [i_1 - 1] = (~(((/* implicit */int) arr_15 [i_1 + 1] [15ULL])));
                        arr_29 [(signed char)7] [(signed char)7] [(signed char)7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_0])) & (((/* implicit */int) (short)28015))))) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_3 - 1] [i_6])))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_7])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [(unsigned short)14] [(unsigned short)14] [i_6]))) % (2574472187U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(unsigned short)13] [i_0] [i_0] [i_1 - 1])))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)240)) > (((/* implicit */int) arr_1 [i_0] [i_6]))));
                            arr_32 [i_0] [(short)13] [(signed char)18] [16] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 1] [i_1 + 1] [i_3 + 1] [i_1 + 1]))) & ((((_Bool)0) ? (1125899906834432LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28015)))))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_34 [i_0] [i_1] [(_Bool)1] [i_6] [i_6] [(unsigned short)2])) >= (((/* implicit */int) arr_4 [i_1]))))) >= (((/* implicit */int) arr_31 [i_1 - 1] [i_3 + 2] [i_3 + 2] [i_1 - 1]))));
                            arr_36 [i_0] [i_3] [i_6] &= ((/* implicit */short) ((arr_19 [i_1 - 1] [(short)16]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_3 + 3])))));
                            arr_37 [i_0] [i_1 + 1] [i_0] [15] [i_6] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_6] [i_8])) % (((arr_30 [(short)12]) & (((/* implicit */int) arr_15 [i_3 + 1] [i_3 + 1]))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_3 - 1] [i_3 + 2])) ? (arr_8 [i_1 + 1] [i_3] [i_3 + 3]) : (arr_8 [i_1 - 1] [i_3 - 1] [i_3 - 1])));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16384))) % (arr_38 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))) ? ((-(((/* implicit */int) arr_31 [14] [i_3] [i_3] [i_9])))) : (((/* implicit */int) arr_13 [i_1 - 1] [i_3] [i_3 - 1] [i_9])))))));
                        }
                    }
                    arr_42 [(unsigned char)3] [i_1] [(unsigned char)3] [i_3] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (short)16384)) > (1428386147)))));
                    arr_43 [i_0] [(short)5] [i_0] = ((/* implicit */int) (((+(((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_1 - 1] [i_0])))) < (((/* implicit */int) arr_34 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_3 + 3]))));
                }
                var_27 = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1 + 1] [i_1])) ? (arr_12 [(signed char)15] [(signed char)15] [i_1] [i_1]) : (((/* implicit */int) arr_2 [(unsigned char)3] [i_1 + 1])))))));
            }
        } 
    } 
}
