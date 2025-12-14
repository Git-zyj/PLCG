/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110871
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                    var_13 = ((/* implicit */unsigned long long int) min((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))), (((/* implicit */long long int) arr_5 [i_0] [i_1]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_21 [6LL] [i_3] [(signed char)8] [i_4] [i_4] [i_5] [i_3] &= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [(_Bool)1] [i_3 - 1])), (arr_15 [i_6] [i_3] [i_6])))), (arr_20 [i_5] [i_5] [(_Bool)1] [i_3 - 1] [i_0 - 1]))) >= (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_3])), (min((arr_8 [i_3] [i_3] [0ULL] [0ULL]), (((/* implicit */unsigned long long int) arr_5 [(short)8] [i_4]))))))));
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_16 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 2]))));
                            var_15 *= ((/* implicit */_Bool) (signed char)87);
                            arr_22 [i_5] [i_0] [i_0] [i_0] [i_0 - 1] = (!(((/* implicit */_Bool) 0ULL)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */long long int) 1083009075)))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1])) != (((/* implicit */int) arr_3 [i_0 - 1]))));
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_3 - 1] [i_0 - 1])) : (((/* implicit */int) arr_7 [i_3 + 1] [i_0 - 1]))));
                            var_19 -= ((/* implicit */signed char) (~(12LL)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_36 [i_0] [i_0] [i_7] [i_10] = (+(((/* implicit */int) var_8)));
                    var_20 = ((/* implicit */unsigned short) var_1);
                }
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 6286835614807894597ULL);
                    arr_43 [i_0] [i_0] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_26 [i_11] [i_3] [i_11] [i_11]))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_21 = ((/* implicit */int) arr_6 [(unsigned short)2] [i_13]);
                        var_22 -= ((/* implicit */long long int) 1083009100);
                        var_23 = ((/* implicit */int) (+(0ULL)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) -1083009076)) : (var_2))) : (((/* implicit */unsigned long long int) (+(1053044349))))));
                        arr_49 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_28 [i_3 - 2] [i_0 - 1])) : ((-(arr_16 [i_0] [i_3] [i_11] [i_13])))));
                    }
                    arr_50 [i_0 - 1] [i_0] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                    arr_51 [i_0] [i_0] = (!(((/* implicit */_Bool) arr_1 [i_0])));
                    var_25 = ((/* implicit */short) var_10);
                }
                var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
            }
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        {
                            arr_60 [i_0] [i_0] [i_0] [i_0] = max(((~(((((/* implicit */_Bool) arr_53 [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) arr_52 [(signed char)3] [(signed char)3] [i_0])));
                            var_27 = ((/* implicit */_Bool) var_1);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) var_8))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    arr_63 [i_0] [i_3 - 2] [i_3] = ((-1285486369) < (((/* implicit */int) ((var_9) == (min((((/* implicit */int) (_Bool)1)), (-1083009075)))))));
                    arr_64 [i_3] [i_3] [i_3] [i_3] |= (((+(((((/* implicit */_Bool) -1083009087)) ? (((/* implicit */int) (unsigned char)46)) : (((/* implicit */int) var_10)))))) / (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1083009062)), (var_0)))) ? (arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (1083009087))));
                    var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned long long int) max((var_1), (((/* implicit */long long int) (_Bool)0))))))));
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    var_30 = ((((_Bool) arr_8 [i_0] [i_3 - 2] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_19])) : (((/* implicit */int) (!((_Bool)1)))));
                    arr_68 [i_15] [i_0] = ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3 - 1] [i_19])) ? (arr_8 [i_0] [i_3] [i_3 + 1] [i_0]) : (arr_8 [i_0] [i_3] [i_3 - 1] [i_19]));
                }
                for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    arr_72 [i_0 - 1] [i_0] = (short)1897;
                    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (((_Bool)0) ? ((-2147483647 - 1)) : (-1083009087))))));
                }
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((1083009086) & (((/* implicit */int) arr_80 [i_0] [i_0] [i_0] [i_22] [i_0]))))) ? (((/* implicit */int) arr_4 [i_3 + 1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                            var_33 = ((/* implicit */_Bool) arr_81 [i_0 - 1] [i_0 - 1] [(short)1] [2] [(unsigned short)6] [i_0]);
                            arr_82 [i_0] [i_3] [i_21] [i_0] [i_23] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)9040)) ? (((/* implicit */int) (unsigned short)24)) : (((/* implicit */int) (signed char)-22))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_3 - 1])) : (var_0)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_86 [i_0] [i_21] [i_24] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_84 [i_0 - 1] [i_0 - 1] [10LL] [i_24] [i_0] [i_0 - 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_25 = 0; i_25 < 11; i_25 += 2) 
                    {
                        arr_89 [i_0] [i_3 - 1] [i_3 - 1] [i_24] = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                        arr_90 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_24] [i_24] = arr_74 [i_3 + 1] [i_0] [i_21] [i_0 - 1];
                    }
                    var_34 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_65 [i_0 - 1] [i_21] [i_0])) : ((+(0ULL))));
                    /* LoopSeq 1 */
                    for (signed char i_26 = 3; i_26 < 10; i_26 += 1) 
                    {
                        arr_93 [i_0] [i_0] [i_21] [i_24] [i_21] = ((/* implicit */long long int) -1083009076);
                        var_35 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_26 + 1] [i_24] [i_21] [i_3 + 1] [i_0])))))) * (((var_10) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        arr_94 [i_26] [i_0] [i_24] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_26 [i_3 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                    var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((/* implicit */int) var_5)) : (((arr_12 [i_0] [i_0] [i_3]) ? (((/* implicit */int) (unsigned short)65531)) : (arr_65 [i_0] [i_0] [i_3])))));
                }
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_99 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_0 - 1] [i_0 - 1] [i_0])) ? (((16877829715728015416ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [(_Bool)1] [i_3] [(short)3] [i_3] [(short)3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_3 - 1] [i_27] [i_3 - 1] [i_0 - 1] [i_0])))));
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (_Bool)1))));
                    arr_100 [i_0] [i_21] [i_21] = ((/* implicit */unsigned char) arr_28 [i_0 - 1] [i_0 - 1]);
                }
                for (unsigned short i_28 = 0; i_28 < 11; i_28 += 2) 
                {
                    arr_103 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_10 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) / (18446744073709551608ULL)));
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) 
                    {
                        var_38 -= ((/* implicit */short) arr_6 [i_0 - 1] [i_0 - 1]);
                        var_39 += ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_74 [i_3 - 1] [i_3] [i_3] [i_0 - 1])));
                    }
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_21]))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1LL)));
                    var_41 = ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_3] [i_3 - 1]) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_0]))))));
                }
                arr_108 [i_0] = ((/* implicit */int) arr_106 [(short)8] [i_3 - 2] [i_0] [i_21] [(_Bool)1] [i_3]);
            }
        }
        for (long long int i_30 = 0; i_30 < 11; i_30 += 1) /* same iter space */
        {
            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_30] [i_0]))) - (((((/* implicit */_Bool) ((arr_28 [i_0] [i_30]) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_30] [i_0])))))) ? (var_2) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (1215745041))))))));
            var_43 ^= ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */signed char) (!(((/* implicit */_Bool) 1197139649677064438ULL)))))));
            var_44 -= ((/* implicit */unsigned short) 18446744073709551612ULL);
        }
        for (long long int i_31 = 0; i_31 < 11; i_31 += 1) /* same iter space */
        {
            arr_114 [i_0] [(unsigned short)10] [i_0] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_8)), (arr_19 [i_31])))));
            arr_115 [i_0] [i_0] = ((/* implicit */unsigned char) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(max((arr_52 [i_0] [i_0] [i_0]), ((_Bool)1)))))))));
        }
        var_45 = ((/* implicit */int) min((((/* implicit */long long int) (+(arr_65 [i_0 - 1] [i_0] [i_0])))), (((var_11) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    }
    var_46 = var_7;
    var_47 = ((/* implicit */_Bool) var_7);
}
