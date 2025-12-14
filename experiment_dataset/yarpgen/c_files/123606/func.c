/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123606
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 376199763))));
    var_21 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) 24ULL))));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2] [i_2 + 1])) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) arr_3 [i_1] [i_1]))));
                            }
                        } 
                    } 
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2194)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2] [i_2 + 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 - 3])))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) 24ULL);
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((arr_9 [i_0] [i_1] [i_0] [i_5] [7U] [i_7] [i_7]) ? (((/* implicit */int) (unsigned short)12705)) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_0] [i_0] [i_7] [i_7])))))));
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (~(arr_0 [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_9 - 1] [i_9] [i_8] [i_8] [i_9 + 1]))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-26356)) - (arr_16 [i_8] [i_8] [i_8] [i_9 - 1] [i_9] [i_9 - 1] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_26 [i_10] [i_8] [i_1] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */int) arr_20 [i_8] [i_5] [i_5] [i_8]);
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_5] [i_10])) ? (((((/* implicit */_Bool) var_16)) ? (7981330063716513452LL) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_10] [i_0] [10U] [i_0] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_8] [i_10])))));
                        }
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_5] [(signed char)6]))));
                            var_31 ^= ((/* implicit */short) arr_18 [(unsigned short)0] [(_Bool)0] [(signed char)2] [i_8]);
                        }
                        arr_29 [i_1] [i_1] [i_5] [i_8] = ((/* implicit */unsigned short) (-(arr_8 [i_0] [i_1] [i_1] [(_Bool)1] [i_1])));
                        var_32 -= ((/* implicit */long long int) (signed char)-1);
                        arr_30 [1ULL] [(_Bool)1] [i_1] [i_0] = (unsigned char)248;
                    }
                    for (long long int i_12 = 3; i_12 < 9; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((94017985) & (((/* implicit */int) (unsigned short)7))));
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12] [i_12 + 2] [i_12 - 3] [i_12 + 2])) ? (((/* implicit */int) arr_19 [i_12 + 1] [3U] [i_12 + 1] [1] [i_12 + 1])) : (((/* implicit */int) arr_25 [i_12 + 2] [i_12] [i_12 - 1] [i_12] [i_12 + 2] [i_12] [i_12]))));
                        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-26385))));
                        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (arr_8 [i_5] [i_5] [i_5] [(unsigned short)8] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 3) 
                        {
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (4739727408481170847ULL))))));
                            arr_38 [i_0] [i_1] [i_0] [i_13] [i_14] = ((/* implicit */_Bool) (unsigned char)248);
                            arr_39 [i_1] [i_1] = ((/* implicit */unsigned char) var_14);
                        }
                        var_38 = ((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_40 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_13] [i_5] [i_13] [i_5] [(short)4])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_21 [i_0] [7ULL] [i_1] [i_13] [i_13] [7ULL] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [6U])) : (((/* implicit */int) (short)-2183)))) : ((-2147483647 - 1))));
                        var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [(signed char)9] [i_0])) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) arr_23 [i_0] [i_1] [i_5] [4LL] [4LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_13] [7LL] [i_1] [i_0])))))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_20 [i_5] [i_5] [i_5] [i_5])) : (arr_27 [i_1] [i_1] [i_5])));
                    }
                    for (short i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        arr_43 [i_5] [i_5] [i_1] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (unsigned short)12680)))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 3) /* same iter space */
                        {
                            arr_46 [i_1] [i_15] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_15] [(short)5] [i_1] [i_1]))));
                            var_41 |= ((/* implicit */long long int) arr_2 [i_0] [(unsigned char)1] [i_5]);
                        }
                        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)248)))))) > (arr_13 [i_0] [i_1] [i_5] [i_15] [i_17])));
                            var_43 |= (_Bool)1;
                            arr_49 [i_1] [i_15] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_17] [i_17] [(_Bool)1] [(signed char)10] [i_17] [i_17] [(signed char)10]) ? (((/* implicit */int) arr_9 [i_1] [i_1] [i_5] [i_17] [i_1] [i_1] [i_15])) : (((/* implicit */int) arr_9 [(unsigned char)5] [i_17] [i_15] [i_5] [i_5] [(unsigned char)5] [i_0]))));
                        }
                        var_44 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_0] [(unsigned char)1] [i_5] [i_15] [(signed char)6]))));
                        arr_50 [i_0] [i_0] [2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [(unsigned char)0])) ? (((/* implicit */int) (unsigned short)2124)) : (((/* implicit */int) (short)5821)))))));
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_45 = ((/* implicit */int) var_14);
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)63427)) : (((/* implicit */int) var_17))));
                        }
                    }
                }
                var_47 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) ? (2147483647) : (arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [3] [i_0]))) : (((/* implicit */int) var_11)))))));
                var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20407)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [(short)10] [9] [i_1] [(short)10])))) ? (((((/* implicit */_Bool) (unsigned char)188)) ? (arr_12 [i_0] [i_1]) : (arr_12 [i_1] [i_0]))) : ((~((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [7LL] [i_0] [i_1]))))))));
            }
        } 
    } 
    var_49 = ((/* implicit */int) var_4);
}
