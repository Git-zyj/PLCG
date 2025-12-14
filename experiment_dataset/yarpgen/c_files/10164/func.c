/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10164
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                    arr_10 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 821541721U)) ? (1102899102U) : (821541721U)))) / (-7973344400670610910LL)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) arr_9 [9U] [i_2] [i_4]);
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_17 [i_0] [13U] [i_2] [i_4] [12]);
                                arr_20 [8ULL] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)13] [7U]))))) > (((/* implicit */int) arr_11 [i_0] [6ULL] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    arr_23 [i_0] = ((arr_12 [i_5 - 1] [i_1] [i_5 + 1]) == (arr_12 [i_5 + 1] [i_5 + 1] [i_5]));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 2; i_6 < 13; i_6 += 2) 
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] [5U] [5U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5 - 1])) ? (((int) 2974028232U)) : (((/* implicit */int) (unsigned char)243))));
                        arr_27 [i_0] [5ULL] [5U] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (~(arr_6 [i_5 - 1])));
                        arr_28 [i_6] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3192068203U)) ? (821541721U) : (981587662U)));
                    }
                    for (unsigned int i_7 = 3; i_7 < 11; i_7 += 1) 
                    {
                        arr_33 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_32 [i_0]);
                        arr_34 [2U] [i_1] [i_5] [8U] [13ULL] [12] = ((((/* implicit */_Bool) arr_15 [i_7 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_6)))))) : (arr_12 [i_5] [i_7 + 3] [i_7]));
                        var_13 = ((((/* implicit */_Bool) arr_13 [i_5 - 1] [4U] [i_7 + 4] [i_7 - 2])) ? (arr_13 [i_5 - 1] [i_5] [i_7 + 3] [i_7 + 4]) : (arr_13 [i_5 + 1] [i_7] [i_7 + 4] [i_7 + 4]));
                    }
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            arr_42 [i_0] [(unsigned short)3] [i_5 - 1] [i_8] [(unsigned short)9] = ((/* implicit */unsigned char) arr_6 [i_5]);
                            var_14 = ((/* implicit */int) 13585347185640503784ULL);
                        }
                        arr_43 [10LL] [(signed char)4] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (var_11) : (((/* implicit */long long int) 3324421143U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [(_Bool)1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [(_Bool)1]))));
                        var_15 *= ((/* implicit */unsigned long long int) 2062120208U);
                        arr_44 [i_0] [14U] [i_5 + 1] [i_8] [i_8] [i_1] = ((/* implicit */_Bool) var_8);
                        var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_8 [i_8] [(unsigned short)11] [i_1] [(unsigned short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_8] [i_8]))))) < (((/* implicit */unsigned long long int) ((arr_7 [i_5] [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0] [i_0]))))))));
                    }
                }
                for (unsigned int i_10 = 3; i_10 < 14; i_10 += 1) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) arr_47 [i_10] [i_1] [i_10 - 3] [i_1]);
                        arr_49 [i_0] [i_10] = ((/* implicit */int) (((~(981587662U))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [6] [i_1] [i_10 - 3] [i_11])) ? (arr_8 [i_0] [i_1] [(unsigned short)13] [i_0]) : (((/* implicit */unsigned long long int) var_11))))) ? ((~(3473425591U))) : (((/* implicit */unsigned int) 2059750901))))));
                    }
                    for (unsigned short i_12 = 3; i_12 < 14; i_12 += 4) /* same iter space */
                    {
                        arr_54 [i_0] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_14 [(unsigned short)12] [i_1] [i_10] [i_10]);
                        arr_55 [i_10] [i_1] = var_0;
                    }
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 4) /* same iter space */
                    {
                        arr_59 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_10] [(signed char)6]);
                        arr_60 [i_10] [(_Bool)1] [i_0] [(_Bool)1] [i_10 + 1] [i_13] = ((/* implicit */_Bool) arr_39 [i_13 - 3] [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13 - 2]);
                    }
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 4) /* same iter space */
                    {
                        arr_63 [i_0] [12U] [i_10 + 1] [i_10] = ((/* implicit */unsigned short) 1253491218U);
                        arr_64 [i_0] [i_10] = ((/* implicit */unsigned short) arr_36 [i_0] [i_1] [i_0] [i_14] [i_0] [i_14]);
                    }
                    var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? ((~(713241189U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (3061636721U) : (arr_40 [i_0] [i_0])));
                    arr_65 [i_10] = ((/* implicit */_Bool) 1525111116U);
                }
                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0]))))) + (((/* implicit */unsigned int) ((arr_46 [i_1]) ? (-602155479) : (((/* implicit */int) arr_46 [i_1])))))));
                arr_66 [i_0] = ((/* implicit */int) arr_21 [(signed char)12] [i_1]);
                arr_67 [i_0] [11U] [i_1] = ((/* implicit */unsigned int) 1763636330);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_10);
    var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 13585347185640503784ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2487668183U))) << (((var_0) - (2243920106U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (-6977965003540616525LL)))))) : (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_0)))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) == (182164201U))))))) ? (4861396888069047832ULL) : (((((((/* implicit */long long int) -1878509281)) < (var_11))) ? (var_3) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2191460766U)) ? (var_9) : (var_0))))))));
}
