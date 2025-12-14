/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157769
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1] [i_0])))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_0]))))) / (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_4))) != (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            arr_7 [9U] [i_2] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_3 [i_2])))) : (((((/* implicit */int) arr_5 [i_0] [4ULL])) & ((-(((/* implicit */int) var_7)))))));
            arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_1)))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [0U] [i_0])) && (((/* implicit */_Bool) var_8)))))));
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) ((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(_Bool)1] [i_0] [i_0])))));
            arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) var_10))));
        }
        var_23 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_8))))) : (var_8))) & (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_16)))))))));
    }
    for (int i_4 = 1; i_4 < 7; i_4 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
        {
            var_24 = ((/* implicit */int) var_6);
            var_25 *= ((/* implicit */signed char) var_17);
            /* LoopSeq 4 */
            for (short i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (arr_20 [i_4] [i_4] [i_6] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [(_Bool)1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (var_17))))))))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1199903897)))) ? (((arr_20 [i_6 + 1] [i_6] [i_6] [i_6]) | (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                arr_21 [i_4] [i_4] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59784)) ? (5405125317668134142ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58471))))))))), (((unsigned short) 5405125317668134142ULL))));
            }
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 1) 
            {
                arr_25 [i_4 + 1] [i_5] [i_4] = ((/* implicit */signed char) arr_14 [i_4]);
                var_28 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))))) <= (((((/* implicit */_Bool) arr_15 [i_4 + 4])) ? (var_11) : (((/* implicit */int) arr_15 [i_7 + 1]))))));
                arr_26 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (var_16)));
                arr_27 [i_5] [i_5] [i_4] [i_7 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                var_29 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((var_17) + (2147483647))) >> (((((((/* implicit */_Bool) arr_16 [4U])) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) var_7)))) + (842)))))) <= (((unsigned int) arr_24 [i_4 + 3] [i_5 + 2]))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 4; i_9 < 9; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        arr_37 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_34 [i_5 - 3] [i_9] [i_9 - 2] [(_Bool)1])) : (var_11))))));
                        arr_38 [i_4] [i_5 - 1] [i_4] [i_4] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_18)) ^ (min((((/* implicit */unsigned int) arr_19 [i_5] [i_5 - 2] [i_5 + 1])), (var_13)))));
                    }
                    arr_39 [i_4] [i_8] [i_8] [i_4] [i_8] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1199903907)))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) var_18))))))));
                }
                arr_40 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5405125317668134142ULL))))), (4294967286U))))));
                var_30 = ((/* implicit */unsigned int) (((-(var_9))) * ((-(var_3)))));
                var_31 = ((/* implicit */int) max((var_31), (((((((/* implicit */int) ((unsigned short) 1199903906))) * (((/* implicit */int) (!(arr_23 [(short)0] [i_8])))))) & (((/* implicit */int) var_0))))));
            }
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((var_3) + (arr_43 [i_12] [i_11] [i_4] [8U] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) 989155469)) : (1481744515U))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        var_33 -= ((/* implicit */signed char) var_7);
                        var_34 = ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */int) arr_33 [i_13 + 2] [i_13 + 2] [i_11] [i_4])) : (((/* implicit */int) arr_33 [i_13 - 1] [i_13 - 1] [(signed char)2] [i_4]))));
                        arr_49 [i_4] [i_5 - 1] [i_11] [i_11] [i_4] [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_53 [i_4] [i_4] [i_4] [8ULL] [i_4] = ((unsigned long long int) -1199903906);
                        arr_54 [i_11] [i_11] [i_11] [i_4] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_11] [i_4]))) & (var_4)));
                    }
                    for (unsigned int i_15 = 1; i_15 < 10; i_15 += 3) 
                    {
                        var_35 |= ((/* implicit */int) ((((/* implicit */int) arr_33 [10] [i_15 - 1] [i_5 + 2] [10])) == (((/* implicit */int) arr_23 [i_5 + 1] [i_4 + 3]))));
                        var_36 = (!(((/* implicit */_Bool) ((int) arr_48 [i_4] [i_5 - 2] [i_15] [i_12] [i_15] [i_12] [i_15]))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        arr_59 [i_4] [i_5 - 1] [i_11] [i_12] [i_16] [(unsigned short)0] [i_11] = ((/* implicit */short) ((arr_45 [i_4 - 1] [i_4 + 4] [i_4 - 1] [i_5 - 3]) ? (((/* implicit */int) arr_28 [i_4] [i_4 + 2])) : (((/* implicit */int) arr_45 [i_4] [i_4 + 3] [i_4 + 1] [i_5 - 3]))));
                        arr_60 [i_4 + 1] [i_4] [i_5] [i_5] [i_11] [i_12] [i_16] = ((/* implicit */short) ((((/* implicit */int) arr_32 [i_4 + 4])) * (((/* implicit */int) arr_32 [i_4 + 1]))));
                        var_37 *= var_4;
                    }
                    arr_61 [(unsigned short)2] [i_5] [i_5 + 2] [i_5 + 2] &= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                }
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    arr_66 [i_4] [i_4] [i_4] [i_4] [i_17] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_18))));
                    var_38 = ((/* implicit */unsigned long long int) arr_28 [1ULL] [i_11]);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_63 [(unsigned short)0] [10ULL] [(unsigned short)0] [10ULL] [i_5 + 2]) ? (((/* implicit */unsigned long long int) var_6)) : (arr_51 [i_4 + 3] [i_11])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))));
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_71 [i_4] = ((/* implicit */unsigned int) var_15);
                        var_40 = ((/* implicit */short) var_14);
                    }
                }
                for (unsigned short i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_41 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) != (((var_13) + (((/* implicit */unsigned int) var_17)))))))) & (var_9)));
                    var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) var_14)))));
                    var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_46 [i_11] [i_5 - 1]) & (arr_46 [i_4 - 1] [i_4])))) ? (arr_46 [(unsigned short)2] [i_5 - 1]) : (((((/* implicit */_Bool) var_7)) ? (arr_46 [i_20] [i_4 + 4]) : (arr_46 [i_11] [i_5 + 1])))));
                }
                for (short i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (var_16)));
                        arr_80 [i_4] [i_4] [i_22] [i_4] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4 + 1]))))))));
                        arr_81 [i_22] [i_4] [i_5] [2ULL] [i_5] [i_5] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_6)) ^ (var_9))) == (((/* implicit */unsigned long long int) var_13))))) >= (((/* implicit */int) ((((((/* implicit */unsigned int) 1138638008)) * (10U))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_23 = 2; i_23 < 10; i_23 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) var_11);
                        arr_86 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / ((+(((/* implicit */int) var_7))))));
                        arr_87 [i_4] [i_5 + 1] [i_11] [i_11] [i_21] [i_4] [i_23] = var_8;
                    }
                    for (int i_24 = 0; i_24 < 11; i_24 += 1) 
                    {
                        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_19) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [3ULL] [i_11] [i_11] [i_4]))) : (arr_75 [i_4] [i_4] [i_11] [i_11])))), (((((/* implicit */unsigned long long int) var_8)) + (var_9)))))) ? (((((/* implicit */_Bool) arr_31 [1U] [i_5] [i_5 - 2] [i_4 + 3])) ? (((/* implicit */unsigned long long int) var_5)) : (var_3))) : (((/* implicit */unsigned long long int) var_5))));
                        arr_90 [i_24] [i_4] [i_4 + 3] [5] [i_4] [i_4 + 3] = ((/* implicit */short) var_14);
                    }
                    /* LoopSeq 1 */
                    for (short i_25 = 1; i_25 < 8; i_25 += 4) 
                    {
                        arr_93 [i_4] = ((/* implicit */short) var_17);
                        var_47 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) arr_67 [(unsigned short)8] [i_21]))));
                        arr_94 [i_4] [i_25] [i_4] [i_4] [i_25] = ((max((((((/* implicit */unsigned long long int) var_5)) * (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_15))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) arr_62 [i_5] [(unsigned short)8] [(unsigned short)8] [i_25]))));
                    }
                    var_49 = ((((/* implicit */_Bool) ((var_5) / (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */int) ((unsigned short) min((var_17), (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_12)));
                }
            }
        }
        for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 1) 
        {
            arr_97 [10] &= ((/* implicit */short) var_9);
            /* LoopSeq 1 */
            for (short i_27 = 4; i_27 < 9; i_27 += 3) 
            {
                arr_100 [i_4] [i_27 - 1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_4 + 4] [i_26])) ? (arr_56 [i_27 - 1] [i_27 - 2] [i_4 - 1] [i_4] [i_4 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_41 [i_4] [i_26] [i_26]) <= (((/* implicit */int) var_0))))))))) ? (((/* implicit */unsigned long long int) (-(((var_19) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_19))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_4] [i_4] [i_26] [(_Bool)1])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_28 [10U] [i_4]))))) ? (((/* implicit */unsigned long long int) ((1199903906) >> (((((/* implicit */int) arr_22 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 1])) + (13942)))))) : (arr_52 [i_4] [i_4] [i_4 + 3] [i_27 - 4] [i_4] [i_4])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 3) 
                {
                    arr_103 [i_4] [i_26] [i_4] [i_27] [i_28] = ((/* implicit */unsigned int) arr_57 [i_4] [i_26] [i_27 - 2] [i_28] [i_28] [i_27 - 2]);
                    /* LoopSeq 3 */
                    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                    {
                        arr_106 [i_4] = ((/* implicit */unsigned long long int) (-(var_11)));
                        arr_107 [i_4] [i_4] [i_4] [i_28] = ((/* implicit */int) ((((unsigned long long int) arr_63 [i_4] [7ULL] [i_29] [i_29 - 1] [i_4])) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2U)) ? (6U) : (((/* implicit */unsigned int) -137232598)))))));
                        arr_108 [i_4] [i_4 + 4] [i_4] [i_4] [i_4] = ((/* implicit */short) (-((~(((arr_99 [i_27] [i_27] [i_29 - 1]) - (((/* implicit */unsigned long long int) var_17))))))));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                    {
                        var_50 = ((/* implicit */short) var_5);
                        arr_112 [i_4] [i_26] [i_27 - 2] [(signed char)7] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_15))))), (var_15))))));
                        var_51 |= ((/* implicit */short) var_11);
                        arr_113 [i_4] = ((/* implicit */unsigned int) (((((-(var_3))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_10)), (var_7))))))) < (((/* implicit */unsigned long long int) var_5))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_88 [i_4] [i_26] [i_27]))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_70 [i_4 + 1] [i_26] [(unsigned short)3] [i_31]))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15))))));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_102 [(short)3] [i_4 + 1] [i_4] [(short)3] [i_31] [i_27 + 1])) : (arr_51 [i_4] [i_4 + 2])));
                    }
                }
            }
            var_54 ^= ((/* implicit */unsigned short) arr_76 [i_4] [i_26] [i_4] [(unsigned short)6]);
            var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) arr_105 [i_4] [i_4] [10] [i_4] [i_4 + 2] [10] [i_4]))));
            arr_117 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) 646165726)) & (3U))))));
        }
        for (unsigned int i_32 = 0; i_32 < 11; i_32 += 1) 
        {
            var_56 = ((/* implicit */_Bool) var_3);
            var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_4] [i_32] [i_32] [i_32])) ? ((+((-(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (var_11)))) ? (((/* implicit */int) var_15)) : (((var_18) + (((/* implicit */int) arr_105 [10] [i_32] [10] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))))))));
        }
        for (unsigned long long int i_33 = 1; i_33 < 7; i_33 += 3) 
        {
            var_58 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_75 [i_4 - 1] [i_4 - 1] [i_33 + 4] [i_33 + 3])) && (((/* implicit */_Bool) arr_75 [i_4 + 2] [(_Bool)0] [i_4 + 2] [i_4 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (arr_75 [i_4 + 4] [i_33] [i_33 + 4] [i_33 + 1])));
            arr_123 [i_4] [i_4] [i_33] = ((/* implicit */signed char) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_16)))))));
        }
        arr_124 [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_76 [i_4] [i_4 + 4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) 3641571457U)) ? (((/* implicit */unsigned long long int) 10U)) : (5405125317668134127ULL))) : (((((/* implicit */_Bool) var_5)) ? (arr_76 [i_4] [i_4 - 1] [i_4] [i_4]) : (arr_76 [i_4 + 2] [i_4 + 3] [i_4] [i_4])))));
    }
    var_59 -= min((max((var_8), ((+(var_18))))), (var_18));
}
