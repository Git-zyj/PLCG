/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10780
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) arr_3 [i_1 + 1] [i_1 - 1]);
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_1 + 3] [i_1 - 2])));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
            arr_8 [i_0] = (-(arr_4 [i_0] [i_1 + 3] [i_0]));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned short)28298)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28298))) : (-2134717145769258214LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [(unsigned char)4] [i_0]))))))) ? (min((((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_12)) + (4124))) - (18))))), (((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_8))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((arr_13 [i_2] [i_2]) ? (((/* implicit */int) arr_11 [14ULL])) : (var_11)))) || ((!(((/* implicit */_Bool) var_0))))))));
        var_22 = (+(var_4));
    }
    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        arr_17 [i_3 + 1] = (-(((arr_4 [16] [i_3] [i_3]) | (((/* implicit */unsigned int) max((var_16), (var_3)))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) || (((/* implicit */_Bool) arr_20 [i_5]))))) - (((/* implicit */int) ((((/* implicit */int) var_18)) != (var_16))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_3])) ? (arr_22 [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) (-(var_3)))))))));
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_3 - 1]), (arr_0 [i_3 + 1]))))) * (((arr_18 [i_3 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 + 1]))))))))));
                var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)38719))) | (-1LL))) + (((/* implicit */long long int) (~(var_15))))));
            }
            arr_24 [i_4] = ((/* implicit */short) var_15);
        }
        /* LoopSeq 3 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_26 = ((/* implicit */int) (+((-(((arr_22 [i_6] [14ULL] [14ULL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
            arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) var_3);
            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */int) var_13);
            arr_30 [i_6] = ((((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_0)) - (28322)))))) | (((var_2) ^ (((/* implicit */long long int) var_4)))));
        }
        for (long long int i_7 = 3; i_7 < 17; i_7 += 4) 
        {
            var_27 = ((/* implicit */_Bool) (-(arr_20 [i_7])));
            var_28 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_23 [i_7 - 3] [(unsigned char)3] [i_7 - 1])) : (((/* implicit */int) arr_23 [i_7 - 2] [i_7 - 2] [i_7 - 3]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            var_29 ^= ((/* implicit */long long int) var_10);
            var_30 = ((/* implicit */long long int) max((var_30), (((((((/* implicit */long long int) ((/* implicit */int) var_9))) * (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (arr_31 [i_3] [i_8]))))) + (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
            var_31 ^= (~(max((((((/* implicit */_Bool) arr_20 [i_8])) ? (((/* implicit */int) arr_11 [2LL])) : (((/* implicit */int) arr_13 [i_3] [i_8])))), (((/* implicit */int) var_1)))));
            arr_35 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_22 [i_8] [i_8] [i_8])))) ? (((/* implicit */int) arr_2 [i_3 + 1])) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [(unsigned short)18])) && (((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) var_12)))))))));
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 8582242083411473305LL))));
        }
        arr_36 [i_3] = ((/* implicit */long long int) arr_14 [i_3]);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            arr_39 [i_9] = ((/* implicit */_Bool) var_14);
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_9 + 1])) + (min((((/* implicit */int) arr_37 [i_9 + 1])), (var_3)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_45 [i_9] [i_9] [i_10] [i_11 - 1] = ((/* implicit */unsigned long long int) var_10);
                    arr_46 [i_3] [i_3] [i_3 - 1] [i_9] [i_3] [i_3] = ((/* implicit */unsigned char) ((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) arr_20 [i_11]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (var_16) : (((/* implicit */int) var_9))));
                        var_36 ^= ((/* implicit */short) var_10);
                    }
                }
                var_37 ^= ((/* implicit */long long int) arr_23 [i_3] [i_9] [i_10]);
            }
            for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_38 ^= ((/* implicit */unsigned char) var_9);
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        {
                            var_39 ^= ((/* implicit */signed char) ((var_17) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            arr_59 [i_3 - 1] [(_Bool)1] [i_9] [i_14] [i_15 + 2] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((max((((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) ((((var_3) + (2147483647))) << (((((((/* implicit */int) var_13)) + (150))) - (22)))))))) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3])))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_4))));
                var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (((+(((/* implicit */int) arr_49 [i_9 + 1] [i_9] [i_9] [i_9] [10LL] [i_9] [i_9])))) + (((((var_11) - (((/* implicit */int) var_10)))) - (var_4))))))));
            }
        }
        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            var_42 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -2134717145769258214LL)) && (((/* implicit */_Bool) -8582242083411473305LL)))))));
            var_43 = ((/* implicit */unsigned short) arr_13 [4U] [i_16]);
        }
    }
    for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        arr_64 [i_17] = ((/* implicit */_Bool) var_1);
        arr_65 [i_17] [i_17] = ((/* implicit */unsigned short) ((((((arr_51 [i_17] [i_17] [i_17] [i_17]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) % (((/* implicit */int) var_12))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7388819644673099762LL)) ? (min((var_5), (var_5))) : (((/* implicit */int) (_Bool)1)))))));
        var_44 = ((/* implicit */unsigned int) min((arr_31 [i_17] [i_17]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_9)))))) + (min((var_15), (((/* implicit */unsigned int) var_16)))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_20 = 3; i_20 < 12; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_21 = 4; i_21 < 12; i_21 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 1; i_22 < 12; i_22 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_48 [i_20 + 1] [i_21 - 1] [i_21 - 3] [i_21 - 3] [i_21] [i_21] [i_22 - 1]) : (arr_22 [i_20 - 2] [i_21 - 4] [i_22])));
                        arr_81 [i_18] [i_19] [i_18] [i_21] [i_21] [i_20] = (-(((/* implicit */int) arr_71 [i_21 - 1])));
                    }
                    var_46 = ((/* implicit */unsigned int) var_5);
                }
                var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -8582242083411473290LL)) && (((/* implicit */_Bool) -10193061846191934LL)))))));
                var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_20 - 2] [i_20 - 3] [i_20 + 1])) << (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_2 [i_18])))))));
                var_49 ^= ((/* implicit */signed char) var_6);
            }
            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) ((var_5) + (((((((/* implicit */int) var_12)) + (2147483647))) << (((((var_11) + (1889205500))) - (10))))))))));
        }
        for (long long int i_23 = 0; i_23 < 13; i_23 += 4) 
        {
            arr_84 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) var_11)) * (arr_18 [i_18]))), ((-(var_15)))))) ? (((/* implicit */int) var_8)) : (var_5)));
            var_51 ^= ((/* implicit */int) var_17);
            var_52 = ((/* implicit */short) (-((-(((/* implicit */int) var_9))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_24 = 2; i_24 < 12; i_24 += 2) /* same iter space */
        {
            arr_88 [i_24 + 1] = var_7;
            var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((-1LL) | (((/* implicit */long long int) 0U))))) && (((/* implicit */_Bool) var_11))))), (var_5))))));
            arr_89 [i_24] = arr_50 [i_24 - 1] [i_24] [i_24] [i_18];
            /* LoopSeq 2 */
            for (long long int i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_26 = 4; i_26 < 11; i_26 += 1) /* same iter space */
                {
                    var_54 ^= ((/* implicit */unsigned short) ((var_7) <= (((/* implicit */long long int) (-(((/* implicit */int) arr_74 [i_24 - 1] [i_24 - 1] [i_26 - 4])))))));
                    var_55 = ((/* implicit */_Bool) var_2);
                }
                for (signed char i_27 = 4; i_27 < 11; i_27 += 1) /* same iter space */
                {
                    arr_100 [i_27] [i_25] [i_27] = min((((/* implicit */unsigned int) var_18)), (((max((((/* implicit */unsigned int) var_9)), (arr_34 [i_27 - 1] [i_18] [i_18]))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                    arr_101 [i_27] [i_27] [i_25] = ((/* implicit */signed char) var_9);
                }
                arr_102 [i_18] [i_24] [i_25] [i_25] = ((/* implicit */unsigned long long int) (((+(arr_47 [i_24 - 2] [i_24 + 1] [i_24 - 1] [i_24 + 1] [i_24 - 2] [i_24 - 2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_24 - 2] [i_24] [i_24] [i_24 + 1] [i_24] [i_18])))));
                /* LoopNest 2 */
                for (signed char i_28 = 4; i_28 < 11; i_28 += 2) 
                {
                    for (unsigned short i_29 = 0; i_29 < 13; i_29 += 4) 
                    {
                        {
                            arr_109 [(short)0] [i_24 - 1] [i_25] [i_25] [i_29] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) & (((/* implicit */int) var_9))))), (((13515819665184858644ULL) | (((/* implicit */unsigned long long int) 10193061846191926LL))))))));
                            var_56 ^= min((max((((/* implicit */int) arr_27 [i_24 + 1] [i_28 - 4])), (var_5))), ((-(((/* implicit */int) (short)-13062)))));
                        }
                    } 
                } 
                arr_110 [i_18] [i_18] [i_18] = ((/* implicit */short) (~(min((((/* implicit */long long int) (~(((/* implicit */int) arr_69 [1LL]))))), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
            }
            /* vectorizable */
            for (int i_30 = 3; i_30 < 12; i_30 += 2) 
            {
                var_57 = ((/* implicit */long long int) arr_44 [i_18] [i_18] [i_24] [i_18] [i_24 + 1] [i_30 - 2]);
                arr_113 [1ULL] [i_30] [i_24 - 2] [i_24] = var_7;
            }
        }
        for (unsigned short i_31 = 2; i_31 < 12; i_31 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_32 = 0; i_32 < 13; i_32 += 2) /* same iter space */
            {
                var_58 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((2294606610727984977LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_43 [i_18] [i_31 - 2] [i_32] [i_31 - 2])))));
                var_59 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_115 [i_18] [i_31 + 1] [i_32])) - (((/* implicit */int) arr_115 [i_32] [i_31 - 2] [i_18])))) / ((+(((/* implicit */int) arr_49 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))))));
                arr_118 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) : (13515819665184858644ULL)));
            }
            for (signed char i_33 = 0; i_33 < 13; i_33 += 2) /* same iter space */
            {
                arr_122 [i_33] [i_31] [i_18] [i_18] = ((/* implicit */unsigned int) var_2);
                var_60 = ((/* implicit */signed char) (+(((/* implicit */int) arr_77 [i_33]))));
                arr_123 [(short)5] [i_31] [i_33] = ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)124))))));
            }
            arr_124 [i_18] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((var_17) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) > (((/* implicit */int) var_10))));
            var_61 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((var_17) << (((var_2) + (7506047179545127665LL))))))));
            var_62 ^= ((/* implicit */unsigned int) var_14);
        }
        arr_125 [i_18] [7ULL] = (+((+(((/* implicit */int) arr_78 [(unsigned short)12] [i_18])))));
        arr_126 [i_18] [i_18] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (+(var_4)))) - (arr_68 [i_18]))) << (((var_3) + (220049039)))));
    }
    var_63 = ((var_2) * ((-(((((/* implicit */long long int) var_5)) / (var_7))))));
}
