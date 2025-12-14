/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146997
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
    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) var_9)) + (((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_13)))) : (var_6)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned char) max((arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_1 + 2]), (arr_5 [i_2] [(short)14] [i_2 + 2] [i_1 + 2]))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            arr_13 [i_1] [(unsigned char)15] [18ULL] [(unsigned short)13] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_10 [i_1] [i_1 - 1] [i_3]), (arr_10 [i_1] [15] [i_4 - 2])))), (((unsigned int) var_14))));
                            arr_14 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_2] [i_4])) : (((/* implicit */int) var_8))))) ? (arr_0 [i_1] [i_3]) : (max((((/* implicit */unsigned long long int) var_3)), (5839623224064720312ULL)))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [16U] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_1] [14ULL] [i_3] [i_4])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0] [i_1] [7LL] [i_3])))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_17 [i_1] [i_3] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [(short)7] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [(short)10] [i_3] [(unsigned char)17] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_5])))))))));
                            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)10)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_2 + 2]))))) : (var_5))) | (((/* implicit */long long int) ((/* implicit */int) (short)-14881)))));
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_16 [i_2])), (arr_6 [i_0] [i_5] [i_2 - 1] [i_5]))))));
                        }
                        for (long long int i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_3] [i_2] [i_1] [i_0] |= min((((/* implicit */long long int) max((arr_2 [i_1 - 1]), (arr_2 [i_1 + 1])))), ((-(((arr_1 [i_0]) - (arr_12 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_21 [i_0] [i_1] [i_1] [9ULL] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((int) var_4)), (((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_1])) * (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))) ^ (arr_0 [i_0] [i_3])))));
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */short) max((((/* implicit */long long int) ((max((var_4), (((/* implicit */long long int) var_8)))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-9576)) ? (((/* implicit */int) (short)14091)) : (((/* implicit */int) (unsigned char)0)))))))), (arr_19 [(short)6] [(short)6] [i_2] [i_3] [i_2])));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) arr_23 [i_1 + 2] [i_1 + 1] [i_2 - 2] [i_2 - 2] [i_7 + 1]);
                            arr_27 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_1]))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) arr_16 [i_3]);
                        }
                        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [5ULL] [i_0] [(unsigned char)6] [i_1] [i_0]))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_0 [i_0] [0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_1] [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [7LL] [i_1] [i_2] [i_2])))))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            arr_37 [i_1] [17LL] [i_2 - 2] [i_1] [i_1] = ((/* implicit */short) arr_15 [i_0] [i_2] [i_2] [i_1]);
                            var_21 |= ((/* implicit */unsigned short) ((long long int) arr_32 [i_0] [i_1 - 1] [i_0] [i_2 - 1]));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2]))) == (var_6)));
                            var_23 = ((/* implicit */short) min((var_23), (((short) ((((/* implicit */_Bool) arr_24 [i_1] [i_8] [i_1])) ? (arr_29 [i_1] [i_2] [i_8] [i_0]) : (((/* implicit */unsigned long long int) arr_23 [(unsigned short)7] [i_1] [(unsigned short)7] [i_8] [i_9])))))));
                            arr_38 [i_0] [i_1] [i_0] [i_2 - 2] [i_1] [i_9] = ((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) arr_10 [i_1] [i_8] [i_1])))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            arr_43 [(short)16] [i_0] [(short)18] [i_1] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 10877043983110026297ULL)) ? (((/* implicit */int) (short)12818)) : (-1130864184)))) : (((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_25 [i_0])) ? (var_0) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [2] [i_1])))))));
                            arr_44 [i_8] [i_10] [i_1] [i_8] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_2]);
                            var_24 &= ((/* implicit */unsigned char) ((min((max((12607120849644831313ULL), (((/* implicit */unsigned long long int) (short)-6638)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0])), (arr_35 [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_8] [i_10])))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) arr_42 [i_0] [i_0] [2U] [i_1] [3] [i_1] [16U]);
                            var_26 = ((/* implicit */long long int) var_2);
                            var_27 ^= ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1] [(unsigned char)12] [i_1 + 1] [i_0] [i_1])))));
                            arr_48 [i_0] [i_1 + 1] [i_1] [i_2] [i_8] [i_1] [i_11] = ((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [17U] [i_8])))))));
                        }
                        var_28 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */unsigned long long int) var_9)) % (var_6))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_0]))))), (((((/* implicit */_Bool) arr_18 [i_8] [i_0] [i_8] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [i_8])) : (((/* implicit */int) arr_5 [i_0] [i_0] [19ULL] [i_8])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_29 = ((/* implicit */short) arr_26 [i_0] [i_1] [i_1] [2LL] [i_13]);
                            var_30 = ((/* implicit */unsigned short) var_0);
                        }
                        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) arr_31 [10ULL] [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_1]);
                            var_32 = ((/* implicit */unsigned char) ((long long int) arr_35 [i_12]));
                            arr_57 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [10ULL] [i_2] [i_12] [(unsigned char)7] [i_2 + 1]))) : (arr_35 [5LL])));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) var_8);
                            var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_0] [i_1]))) <= (arr_3 [i_1 - 1] [i_2 - 1])));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                    {
                        arr_62 [16LL] [16LL] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (((+(arr_11 [i_16] [i_1] [i_2 - 1] [i_2] [i_1] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_0])))));
                        arr_63 [i_0] [i_1] [i_2] [(short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65034)) ? (17266362925602126981ULL) : (((/* implicit */unsigned long long int) -2034756684045786854LL))));
                    }
                    var_35 += ((/* implicit */long long int) min((arr_42 [i_1] [i_1] [i_1] [i_0] [i_1 + 2] [14LL] [i_1]), (((unsigned char) arr_42 [i_2] [i_2] [i_2 + 2] [i_0] [(unsigned char)14] [i_0] [i_0]))));
                    arr_64 [i_0] [i_1] [i_2] [8LL] = ((((/* implicit */_Bool) 3908859304U)) ? (((/* implicit */unsigned long long int) 1130864183)) : (18446744073709551601ULL));
                    var_36 *= ((/* implicit */short) arr_1 [i_2]);
                }
            } 
        } 
    } 
}
