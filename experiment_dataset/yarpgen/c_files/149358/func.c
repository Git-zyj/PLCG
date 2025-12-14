/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149358
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
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) ((arr_3 [i_0] [i_0]) & (arr_3 [i_0 + 3] [i_0])));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_20 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2]);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])))) || (((/* implicit */_Bool) arr_5 [10ULL] [(unsigned short)16] [i_0 + 2])))))));
                arr_6 [i_0] [i_1 - 1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_2]))) : (((/* implicit */int) var_13)))) / (max((((/* implicit */int) arr_5 [i_0] [i_0] [i_2])), (((((((/* implicit */int) (signed char)-103)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (48)))))))));
            }
            arr_7 [i_0] [i_1 + 3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [0LL] [i_1 - 2])) | (((((((/* implicit */int) (signed char)126)) | (((/* implicit */int) (unsigned short)295)))) ^ (((/* implicit */int) max((arr_2 [i_0] [i_1 + 2]), (((/* implicit */unsigned short) (short)-29715)))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_22 = (short)-1;
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [(_Bool)1] [i_3 + 3] [i_3])) > (396866057)))) * (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
            var_24 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_3 + 1] [i_3]);
        }
        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)245)) == (min((((((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 - 1])) % (((/* implicit */int) arr_1 [17U])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_4])) >= (((/* implicit */int) arr_0 [i_0])))))))));
                        arr_16 [i_0] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */signed char) ((((unsigned long long int) arr_15 [i_4 - 1] [i_0] [i_5] [i_6 + 1] [i_5] [i_0])) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((arr_12 [i_0] [i_4 + 2] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_0] [i_0 + 2] [i_4 + 2] [i_4 + 1] [i_6 - 1])) : (((/* implicit */int) (short)10335))))) ? (((2032) - (((/* implicit */int) arr_2 [i_0 + 1] [i_5])))) : (((/* implicit */int) min((arr_11 [i_0 + 1]), (arr_14 [i_0 - 1] [i_4 - 1]))))));
                            arr_20 [i_0 - 1] [i_0 - 1] [i_0] = arr_2 [i_0] [i_0];
                        }
                        for (short i_8 = 3; i_8 < 15; i_8 += 1) 
                        {
                            var_27 &= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned char)172)) || (((/* implicit */_Bool) (short)-10350))))));
                            arr_25 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_4] [(_Bool)1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)172))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_8 + 4]))) : (((unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (unsigned short i_9 = 4; i_9 < 17; i_9 += 2) 
                        {
                            arr_29 [i_0 + 1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) arr_24 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) && (((/* implicit */_Bool) arr_18 [i_4])))))) : (arr_26 [i_6 - 1] [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_6 + 2] [i_6 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_4] [i_0] [i_6] [i_0])) ? (((/* implicit */int) arr_24 [10LL])) : (((/* implicit */int) (signed char)-126)))))));
                            var_28 = (((!(((/* implicit */_Bool) (short)-13006)))) && (((((((/* implicit */_Bool) (signed char)75)) || (((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) && (((((/* implicit */_Bool) arr_27 [i_0] [0LL] [3ULL])) && (((/* implicit */_Bool) (signed char)-22)))))));
                            var_29 = ((/* implicit */_Bool) arr_19 [i_6] [i_0]);
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(0U)));
                        }
                        arr_31 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */unsigned char) max(((unsigned short)5696), (((/* implicit */unsigned short) (signed char)59))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    {
                        var_30 = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_11] [i_0] [i_10] [i_0] [i_0] [i_0])) << (((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_4 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((arr_22 [(signed char)11] [i_4] [(_Bool)1] [i_11]) - (1335952590497094675ULL)))))) : (arr_34 [i_0] [i_4] [i_0] [i_11])))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_11] [i_0] [i_10] [i_0] [i_0] [i_0])) + (2147483647))) << (((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_4 + 2] [i_0 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((arr_22 [(signed char)11] [i_4] [(_Bool)1] [i_11]) - (1335952590497094675ULL)))))) : (arr_34 [i_0] [i_4] [i_0] [i_11]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            arr_39 [i_0] [i_0] [i_10] [i_11] [i_10] = ((/* implicit */signed char) ((arr_38 [i_0] [i_4] [i_10]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)295)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))))));
                            arr_40 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_11] [i_10] [i_0]))));
                            var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))))))))));
                            arr_41 [i_0] = ((/* implicit */unsigned char) var_13);
                        }
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 3) 
                        {
                            var_32 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4]))));
                            var_33 += ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_4 + 1] [(signed char)7]))))) << (((arr_12 [2U] [i_13] [2U]) + (4727033763887714337LL)))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
                        {
                            arr_46 [i_0] [i_10] [i_14] = ((unsigned short) ((((var_0) ^ (arr_19 [i_0] [i_0]))) ^ (((/* implicit */long long int) min((585435141U), (0U))))));
                            arr_47 [i_0 + 2] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 1] [3U] = ((/* implicit */long long int) arr_11 [i_0]);
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned short i_15 = 2; i_15 < 18; i_15 += 3) 
            {
                var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) arr_24 [i_0])) : (((/* implicit */int) arr_48 [i_0] [i_0] [i_0 - 1] [i_0])))) <= (arr_28 [i_0 + 1] [i_4 + 2]))))));
                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)75)) ? (-9223372036854775799LL) : (-9223372036854775799LL)));
                var_36 = ((/* implicit */int) arr_1 [i_4 + 2]);
                arr_50 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((unsigned long long int) arr_15 [i_15 - 1] [i_0] [i_4] [i_4] [i_0] [i_4])) >> (((arr_12 [i_0] [i_15] [i_0]) + (4727033763887714365LL)))))) : (((/* implicit */_Bool) ((((unsigned long long int) arr_15 [i_15 - 1] [i_0] [i_4] [i_4] [i_0] [i_4])) >> (((((arr_12 [i_0] [i_15] [i_0]) - (4727033763887714365LL))) - (2857458746882494823LL))))));
            }
            /* vectorizable */
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
            {
                var_37 = ((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0 + 3] [i_0] [i_0]);
                var_38 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [(unsigned char)11] [(unsigned short)9]))) == (arr_36 [i_0] [i_4] [i_0]))))));
                var_39 = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((((((/* implicit */int) arr_53 [i_16] [i_16] [i_16] [i_16])) | (((/* implicit */int) arr_33 [i_0] [i_4] [i_16 - 1] [(_Bool)1])))) + (2147483647))) << (((arr_3 [i_0 - 1] [i_0]) - (8185999389717422735ULL)))))) : (((/* implicit */long long int) ((((((((/* implicit */int) arr_53 [i_16] [i_16] [i_16] [i_16])) | (((/* implicit */int) arr_33 [i_0] [i_4] [i_16 - 1] [(_Bool)1])))) + (2147483647))) << (((((arr_3 [i_0 - 1] [i_0]) - (8185999389717422735ULL))) - (17235849931247840060ULL))))));
            }
            for (short i_17 = 1; i_17 < 16; i_17 += 3) 
            {
                arr_58 [(short)3] [i_0] [i_17] [i_4 - 1] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_28 [i_0 + 1] [i_4])), (arr_52 [i_0 + 2] [i_0 + 3] [i_4 + 1] [i_17 + 2]))) | (min((arr_36 [i_0] [i_4 + 1] [i_0]), (((/* implicit */long long int) ((((/* implicit */int) arr_27 [(signed char)8] [i_4] [i_17 + 3])) / (((/* implicit */int) arr_1 [i_0 + 1])))))))));
                var_40 = ((/* implicit */long long int) arr_14 [i_0] [i_0]);
                arr_59 [i_0] [i_4] = ((/* implicit */unsigned char) arr_49 [(signed char)3] [i_4 - 1] [i_0]);
            }
        }
        arr_60 [i_0] = ((/* implicit */long long int) arr_51 [i_0]);
    }
    var_41 = ((/* implicit */int) min(((-((-(4294967295U))))), (((/* implicit */unsigned int) (signed char)-4))));
}
