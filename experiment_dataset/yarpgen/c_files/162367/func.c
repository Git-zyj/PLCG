/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162367
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
    var_13 *= ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) var_12))))) ? (((/* implicit */long long int) ((int) var_12))) : (var_1)));
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (((((/* implicit */_Bool) ((((-884352669871641611LL) + (9223372036854775807LL))) >> (((-6115412967706038473LL) + (6115412967706038489LL)))))) ? (4632502838441096731ULL) : (((/* implicit */unsigned long long int) max((127), (((/* implicit */int) var_3)))))))));
        arr_3 [(unsigned char)11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]))) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)21446))));
                var_18 = (!(((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_1 - 1])));
                var_19 *= ((/* implicit */unsigned int) arr_7 [i_1 - 3] [i_2 + 3] [i_2]);
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) >= (arr_2 [i_1 + 1] [i_2 + 2])));
            }
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                arr_12 [i_3] [3LL] [i_3] = ((((unsigned int) var_3)) + (((((/* implicit */unsigned int) arr_5 [i_0] [i_1] [(unsigned short)11])) | (var_0))));
                var_21 = arr_8 [i_0] [i_1] [i_3] [i_3];
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3218825176U)) ? (1145512591) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))))) : (arr_8 [i_4] [i_1] [i_3] [i_4])));
                    arr_16 [i_3] = ((/* implicit */unsigned int) 5221381780425197985ULL);
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    arr_21 [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)44090))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 4; i_6 < 19; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((short) arr_17 [i_6 - 4] [i_6] [i_5 + 1] [i_1 - 2] [(signed char)8] [17])))));
                        var_23 = ((/* implicit */_Bool) ((arr_1 [i_0]) + (arr_1 [i_0])));
                        var_24 = ((/* implicit */unsigned short) arr_25 [i_0] [i_1]);
                    }
                    var_25 = ((/* implicit */signed char) ((arr_11 [i_3] [i_3] [i_3] [(unsigned short)12]) & (((/* implicit */int) arr_9 [i_3] [i_1 + 1] [i_1] [i_5 + 1]))));
                }
            }
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_36 [i_7] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */short) ((arr_35 [i_1 + 1] [i_1] [i_7] [0ULL] [i_9]) | (((/* implicit */int) arr_28 [i_1 - 2] [i_7] [i_7] [i_7] [i_8]))));
                            arr_37 [(_Bool)1] = ((/* implicit */int) (!(arr_33 [i_0] [i_9])));
                            arr_38 [i_0] [i_0] = ((/* implicit */long long int) arr_18 [i_0] [i_1] [(unsigned short)7] [i_8]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                arr_41 [i_0] [i_1] [i_10] = ((/* implicit */signed char) var_7);
                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) var_3)))))))));
            }
            /* LoopSeq 3 */
            for (long long int i_11 = 4; i_11 < 20; i_11 += 2) 
            {
                arr_45 [i_11] [i_1] [i_1] [(signed char)15] = ((/* implicit */short) ((long long int) arr_24 [i_0] [i_1 - 2] [i_0] [i_0] [i_11 - 4]));
                /* LoopNest 2 */
                for (unsigned int i_12 = 4; i_12 < 20; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [i_0] [i_13])))))));
                            arr_51 [i_13] [i_12] [i_11] [i_13] [i_11] [i_1] [0U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_13] [i_11 - 2] [i_1 - 2] [i_13])) ? (((2147483647U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((-834823406) / (-328618177))))));
                            arr_52 [i_0] [(short)21] [i_11] [i_13] [i_13] [i_0] [i_1] = ((/* implicit */short) (((-(3201970370U))) > (((/* implicit */unsigned int) arr_5 [i_12 - 4] [i_11 + 1] [i_1 + 1]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */_Bool) (+(-1722654728)));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_55 [i_0] [i_0] = ((/* implicit */short) 1796482851);
                arr_56 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_39 [i_0] [i_0])) : (((/* implicit */int) var_11)))) | (((/* implicit */int) (!((_Bool)1))))));
            }
            for (short i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                arr_60 [i_15] = ((/* implicit */long long int) ((((/* implicit */int) arr_47 [21U] [i_1] [9] [i_15])) % (((/* implicit */int) arr_18 [i_15] [(signed char)4] [i_1] [1U]))));
                var_29 = ((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_15]);
                /* LoopSeq 3 */
                for (signed char i_16 = 3; i_16 < 20; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_17 = 3; i_17 < 21; i_17 += 2) /* same iter space */
                    {
                        arr_67 [i_0] [0] [(_Bool)1] = ((/* implicit */int) arr_32 [i_17] [i_17 - 2] [i_17] [i_17 - 2] [5LL]);
                        var_30 |= arr_32 [i_0] [i_1] [i_15] [i_16] [i_17];
                        var_31 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) == (-7778967262707827833LL)));
                    }
                    for (int i_18 = 3; i_18 < 21; i_18 += 2) /* same iter space */
                    {
                        arr_72 [(short)20] [i_18] [18LL] [i_16] [i_18] = ((/* implicit */long long int) arr_1 [(_Bool)1]);
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) var_6))));
                        var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) var_8)) ? (arr_24 [i_0] [i_1] [i_0] [0U] [i_1 + 1]) : (arr_24 [i_15] [i_1] [i_0] [i_1] [i_1 + 1])))));
                    }
                    var_34 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_15] [i_1 - 2]))) / (arr_23 [i_0] [i_1] [i_15] [i_16] [i_16] [i_0])));
                }
                for (int i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                {
                    var_35 &= ((/* implicit */long long int) 879200322U);
                    /* LoopSeq 1 */
                    for (long long int i_20 = 3; i_20 < 19; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((arr_1 [i_1 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_1 - 2] [i_19] [i_20] [i_20] [i_20 + 1])))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [11ULL] [i_20 - 1] [i_0] [i_19] [i_20])) ? (((/* implicit */int) arr_34 [i_0] [i_20 - 1] [i_15] [i_19] [18ULL])) : (168213125)));
                    }
                }
                for (int i_21 = 0; i_21 < 22; i_21 += 4) /* same iter space */
                {
                    arr_81 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [(short)6] [i_1] [i_15] [i_15] [i_1] [i_15])) ? (arr_35 [i_0] [i_1] [i_1 + 1] [i_21] [14ULL]) : (((/* implicit */int) var_9))));
                    arr_82 [3U] [i_15] [8U] = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
                    arr_83 [i_0] [i_1] [19U] [i_15] [i_21] = ((/* implicit */int) (+((+(4632502838441096745ULL)))));
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
        {
            arr_86 [i_22] = ((/* implicit */int) arr_42 [i_0] [i_0] [(unsigned char)3] [i_22]);
            /* LoopSeq 2 */
            for (unsigned int i_23 = 1; i_23 < 19; i_23 += 2) 
            {
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) var_4))));
                var_39 = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
            }
            for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 2) 
            {
                /* LoopNest 2 */
                for (short i_25 = 2; i_25 < 21; i_25 += 4) 
                {
                    for (long long int i_26 = 3; i_26 < 21; i_26 += 4) 
                    {
                        {
                            arr_98 [i_0] [i_22] [i_24] [i_22] [i_26] = ((/* implicit */short) var_7);
                            var_40 = ((/* implicit */_Bool) (+(27U)));
                            arr_99 [i_22] = ((/* implicit */unsigned int) (-(884352669871641610LL)));
                            arr_100 [i_22] [i_25] [i_22] = ((/* implicit */int) arr_87 [4U] [i_22] [i_22] [7]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_27 = 1; i_27 < 20; i_27 += 4) 
                {
                    var_41 = ((/* implicit */unsigned char) ((arr_31 [i_27] [i_27] [i_27 + 1] [i_27 - 1] [i_27]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_104 [i_24] [i_22] [i_24] [i_27] &= arr_84 [i_0] [i_22];
                }
                arr_105 [i_22] [i_22] [i_22] = ((((/* implicit */int) arr_49 [i_0] [i_22])) | (((/* implicit */int) arr_49 [i_22] [i_22])));
                /* LoopSeq 1 */
                for (unsigned short i_28 = 1; i_28 < 21; i_28 += 2) 
                {
                    var_42 -= ((unsigned short) (!(((/* implicit */_Bool) var_1))));
                    var_43 |= ((/* implicit */_Bool) arr_23 [i_28 - 1] [i_28] [i_28 + 1] [i_24] [i_24] [i_24]);
                    var_44 += ((/* implicit */short) (((_Bool)1) ? (1092996909U) : (((/* implicit */unsigned int) 168213125))));
                    var_45 = ((/* implicit */short) (+(18446744073709551615ULL)));
                }
            }
            /* LoopNest 3 */
            for (short i_29 = 0; i_29 < 22; i_29 += 2) 
            {
                for (unsigned int i_30 = 1; i_30 < 20; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 2; i_31 < 19; i_31 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) var_8);
                            var_47 = ((/* implicit */int) (+(var_1)));
                            var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2256060107U)) ? (((/* implicit */int) (short)15451)) : (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            } 
        }
        var_49 *= ((/* implicit */_Bool) var_3);
        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) (!((!((_Bool)0))))))));
    }
}
