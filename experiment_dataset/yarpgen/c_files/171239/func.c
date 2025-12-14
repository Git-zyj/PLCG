/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171239
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [6ULL] [i_0] = ((/* implicit */unsigned char) var_0);
                    var_17 = ((/* implicit */unsigned int) var_4);
                    var_18 |= ((/* implicit */unsigned long long int) ((min((arr_5 [i_1]), (((arr_5 [i_2]) ^ (((/* implicit */long long int) 2590040782U)))))) <= (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1459553450U)))))) & (var_7)))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (5363079015989203865LL)))) - (1511778733399052916ULL))) & (((/* implicit */unsigned long long int) arr_5 [i_2 - 2]))));
                }
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_4 [i_0] [(signed char)21] [i_0])))) << (((((3895314854494789467LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))))) - (80LL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)90))));
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = ((/* implicit */long long int) max((((((/* implicit */int) var_3)) + (((/* implicit */int) arr_13 [i_4])))), (((/* implicit */int) (short)(-32767 - 1)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                    {
                        var_21 += ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)20273), ((unsigned short)20273)))) * ((((~(((/* implicit */int) arr_14 [i_3])))) | (((((/* implicit */int) arr_19 [i_3] [i_4] [i_5] [i_5] [i_6])) ^ (((/* implicit */int) arr_11 [i_3]))))))));
                        var_22 = ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (short)25694))) <= (((/* implicit */int) ((-1540389070) <= (((/* implicit */int) (signed char)75)))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        arr_23 [i_3] [(short)5] [i_5] [i_7] [i_7] = ((/* implicit */long long int) min(((-(arr_18 [i_3] [i_4] [i_3] [i_4] [i_5] [i_7]))), (((((/* implicit */_Bool) arr_18 [18] [(signed char)20] [(signed char)20] [i_5] [i_5] [i_7])) ? (arr_18 [i_3] [i_3] [i_4] [(unsigned short)5] [i_7] [i_7]) : (arr_18 [i_3] [i_4] [i_5] [i_7] [i_3] [i_5])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_11 [i_5]))) ? (((/* implicit */int) var_14)) : ((((-(var_4))) - (((((/* implicit */int) arr_20 [i_3] [i_7] [(_Bool)1])) | (((/* implicit */int) arr_24 [i_3] [(signed char)6] [i_5] [23LL] [i_8] [i_8])))))))))));
                            var_24 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (min((var_7), (((/* implicit */long long int) arr_21 [i_3] [i_3] [i_3] [i_3] [1LL] [i_3])))))))));
                            var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) << (((arr_22 [i_8]) - (315684430))))) >= (((/* implicit */int) arr_14 [9])))))) | (max((((((/* implicit */_Bool) (short)25693)) ? (9242935196206008227ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25693))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_3])) != (((/* implicit */int) (unsigned char)251))))))));
                        }
                        arr_26 [(unsigned short)3] [i_4] [i_5] [i_7] = (-(((((_Bool) arr_20 [11LL] [6ULL] [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) <= (arr_18 [i_3] [i_4] [i_5] [i_7] [i_7] [i_7]))))) : (((281474842492928LL) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 22; i_9 += 1) 
                    {
                        var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [(signed char)13] [(signed char)13] [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
                        {
                            arr_33 [(short)16] [i_4] [i_5] [i_9 - 1] [2LL] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20614))) / (17582560876478910394ULL)));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_10 - 1])) ? (((/* implicit */int) arr_29 [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_29 [i_9 - 1] [i_9 - 1]))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (arr_30 [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 + 2]))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-20621)) >= (((/* implicit */int) (short)-25668))));
                            arr_34 [i_3] [(_Bool)1] [i_5] [i_9] [i_10] [(short)2] = ((((((((/* implicit */int) var_16)) + (2147483647))) << (((((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_3] [i_3])) - (21275))))) / (arr_22 [i_9 + 2]));
                        }
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_1))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_31 = ((unsigned char) arr_35 [i_3] [i_3] [i_5] [i_11]);
                        var_32 = ((/* implicit */int) ((short) arr_16 [i_3]));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) arr_16 [i_11]))))) / (18446744073709551615ULL))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))) / (4062936093U))))));
                        var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_35 [i_3] [i_4] [(short)21] [i_4]) != (((/* implicit */int) arr_11 [i_5])))))));
                    }
                    arr_37 [(unsigned char)23] = ((/* implicit */short) max((((long long int) var_7)), (((/* implicit */long long int) arr_28 [5LL] [i_4] [i_5] [i_4]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 2; i_12 < 23; i_12 += 4) 
                    {
                        var_36 = ((((((/* implicit */int) arr_19 [i_4] [i_12] [i_4] [i_12 - 2] [i_12])) + (((/* implicit */int) arr_19 [19LL] [6LL] [9U] [i_12 + 1] [i_12 + 1])))) >= ((~(((/* implicit */int) arr_19 [i_12 + 1] [i_12] [18ULL] [i_12 - 2] [i_12])))));
                        arr_42 [(signed char)22] [i_4] [i_4] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) 208637987508872826ULL))), (((arr_39 [i_4] [i_5] [i_12 - 1]) ? (((/* implicit */int) (short)32767)) : (arr_21 [i_3] [i_3] [i_3] [i_4] [i_5] [i_12 - 2]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            var_37 |= ((/* implicit */unsigned char) ((unsigned long long int) 0LL));
                            var_38 |= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (short)25668)) + (((/* implicit */int) arr_12 [0LL] [i_12])))), (((/* implicit */int) arr_20 [i_3] [10U] [i_5]))));
                            arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_25 [i_5] [i_5]);
                            arr_47 [i_3] [i_3] [i_5] [(_Bool)1] [21LL] [i_13] = ((/* implicit */signed char) arr_22 [i_13]);
                        }
                    }
                    for (short i_14 = 1; i_14 < 22; i_14 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_28 [i_3] [i_3] [i_3] [i_14 - 1]) & (arr_28 [i_3] [i_4] [i_4] [i_14 - 1])))) || (((/* implicit */_Bool) min((4294967295U), (arr_28 [i_3] [i_4] [i_5] [i_14 - 1])))))))));
                        var_40 += ((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned char)59)) ? (2147475456) : (((/* implicit */int) (short)3968)))) - (((/* implicit */int) (unsigned short)45255))))));
                        var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) arr_44 [i_3] [i_3] [i_4] [i_5] [i_14]))))) && (((((/* implicit */int) arr_13 [i_4])) < (arr_22 [i_4])))))) * (((/* implicit */int) arr_12 [i_3] [2LL]))));
                    }
                    arr_50 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 1459553450U)), (-6179429693494825120LL)))) ? (((/* implicit */int) arr_44 [i_3] [i_3] [i_4] [9] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) ((3045140505U) << (((6179429693494825140LL) - (6179429693494825133LL)))))))))));
                }
            } 
        } 
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) 31744)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (0LL)));
        var_43 = ((/* implicit */short) (-(((((arr_15 [i_3] [i_3] [i_3] [i_3]) / (((/* implicit */int) (short)20606)))) / (((/* implicit */int) ((signed char) arr_39 [i_3] [i_3] [i_3])))))));
        var_44 = ((/* implicit */_Bool) min((var_44), ((_Bool)1)));
    }
}
