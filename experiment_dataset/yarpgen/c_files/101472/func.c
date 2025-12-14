/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101472
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) arr_0 [i_0] [5]);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) ^ (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned long long int) var_0)), (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) == (var_4)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (arr_1 [8])))))))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_22 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_0)))));
                arr_8 [i_2] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_8)) ? (arr_5 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_4)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1124800395214848ULL)) ? (max((((/* implicit */long long int) var_18)), (arr_3 [(signed char)5] [(signed char)5]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1558093745U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1009154701U)))))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_14 [6LL] [i_0] [2U] [i_2] [i_0] [2U] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_9))))) > (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [9] [i_1] [9])) ? (((/* implicit */int) arr_11 [i_4] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)8] [i_3] [i_1]))))));
                            var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_12 [i_3] [i_1] [i_1] [i_2 - 1] [i_4 - 2]))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_4] [i_2 - 1] [i_4 - 2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)7] [i_2 - 1] [i_4 - 2])))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    for (short i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) (~(arr_5 [i_0] [6U] [i_6])));
                            var_25 = ((/* implicit */int) var_10);
                            arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((unsigned long long int) max((var_5), (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_6] [i_6]))))) : (var_11)));
                        }
                    } 
                } 
            } 
            arr_24 [i_0] = ((/* implicit */unsigned int) ((((var_4) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_12)))))))));
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                    {
                        {
                            arr_33 [i_0] [(signed char)10] [(signed char)10] [i_9 + 1] [i_9 + 1] &= ((/* implicit */long long int) max((var_11), (((/* implicit */unsigned long long int) max((arr_27 [i_0] [i_8 - 1]), (arr_27 [i_8 - 1] [i_10 + 3]))))));
                            arr_34 [i_0] [i_0] [i_8] [i_9 + 1] [i_10] [i_0] = var_8;
                        }
                    } 
                } 
            } 
        }
        for (int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (short i_12 = 4; i_12 < 11; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) var_5);
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_45 [i_0] [i_11] [i_12] [i_12] [i_0] [i_14] = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_12 - 4] [i_13] [i_13])) && (((/* implicit */_Bool) var_16)))))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_29 [i_11] [i_0] [i_11] [i_11] [i_11]))))) || (((/* implicit */_Bool) var_18))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) arr_39 [i_0] [i_11] [i_0] [i_13]))));
                            var_29 = ((/* implicit */unsigned long long int) arr_20 [i_14] [i_13] [i_12] [i_11]);
                        }
                        for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            var_30 = ((((/* implicit */_Bool) min((((((/* implicit */int) arr_1 [10ULL])) ^ (((/* implicit */int) arr_12 [i_0] [i_11] [(_Bool)1] [i_13] [i_15])))), (((/* implicit */int) ((signed char) var_1)))))) || (((/* implicit */_Bool) ((int) ((((arr_28 [i_15] [i_11] [i_12] [i_11] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) var_10)) - (1))))))));
                            var_31 ^= ((/* implicit */unsigned short) arr_35 [i_0]);
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_47 [i_0] [i_12 + 1] [i_12])))) + ((~(((/* implicit */int) var_0))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_32 += (+(var_5));
                            arr_51 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 8422836156182030054ULL))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 1; i_17 < 10; i_17 += 4) 
                        {
                            arr_54 [3U] [i_0] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_12 - 2] [i_12] [i_17 + 2] [i_17 + 2] [i_17 + 2])) / (((/* implicit */int) arr_11 [i_12 - 2] [i_12 - 2] [i_17 + 2] [i_17 + 2] [i_17 + 2]))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_17] [i_17 - 1] [i_12 - 4] [i_12 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_12 - 3] [i_12] [i_12 - 1] [i_17 + 2] [i_17 + 1]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_49 [i_0] [(unsigned char)10] [(unsigned char)5] [i_13] [(unsigned char)10]))))))));
                        }
                        arr_55 [i_11] [i_11] [i_11] [i_11] |= ((/* implicit */signed char) arr_43 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 - 3]);
                        var_35 = ((/* implicit */long long int) max(((+(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1124800395214846ULL)) || (((/* implicit */_Bool) 573063513168253809LL)))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            var_36 &= ((/* implicit */unsigned short) ((arr_36 [i_0] [(_Bool)0] [i_18]) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (arr_16 [i_11] [i_11] [i_13] [i_18])))) ? (var_7) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_30 [i_12 - 1] [i_12 - 1] [i_11] [i_0])), (var_14)))))))));
                            var_37 = (~(((/* implicit */int) max((((/* implicit */unsigned short) ((signed char) var_4))), (var_16)))));
                        }
                    }
                } 
            } 
            var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (min(((+(var_19))), (((/* implicit */long long int) arr_6 [4U] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min((var_16), (((/* implicit */unsigned short) ((_Bool) var_13)))))))));
            var_39 = ((/* implicit */unsigned short) var_8);
        }
        /* LoopSeq 2 */
        for (short i_19 = 2; i_19 < 11; i_19 += 2) 
        {
            var_40 = ((/* implicit */int) min((var_40), (max((((((/* implicit */int) var_9)) * (((/* implicit */int) arr_39 [i_19] [i_19 + 1] [i_19 + 1] [i_0])))), (((((/* implicit */_Bool) arr_29 [i_0] [i_19] [i_19] [i_19] [i_19 - 1])) ? (((/* implicit */int) arr_37 [i_19 - 1] [i_19 - 2] [i_19 - 2] [i_19])) : (arr_38 [i_19] [i_19 - 2] [i_19 + 1])))))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_19 - 1] [i_0] [i_19 - 1] [i_19] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */signed char) arr_1 [i_0])))))) : (min((var_19), (arr_20 [i_19] [i_19 - 1] [i_0] [i_0])))))) : ((+(((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_52 [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_5)))))));
        }
        for (unsigned char i_20 = 1; i_20 < 10; i_20 += 4) 
        {
            var_42 = ((((/* implicit */_Bool) arr_26 [i_20 + 2] [i_20 + 1] [i_20 + 1])) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) 1558093743U)) != (var_5)))), (var_17)))) : (((/* implicit */int) var_1)));
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_63 [i_20 + 2] [i_20 + 1] [i_20 + 1]))) ? (max((arr_58 [i_20 - 1]), (((/* implicit */unsigned long long int) arr_63 [i_20 + 2] [i_20 + 1] [i_20 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_63 [i_20 + 1] [i_20 - 1] [i_20 + 2]), (var_0)))))));
            arr_65 [i_0] [i_0] [4U] &= ((/* implicit */signed char) ((((/* implicit */int) min((var_13), (arr_7 [i_20 + 2])))) & (((/* implicit */int) min((var_18), (arr_7 [i_20 + 2]))))));
        }
        arr_66 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0]))))), (min((var_15), (((/* implicit */unsigned char) var_3))))))), (((max((8201557821225779004LL), (((/* implicit */long long int) 2736873559U)))) & (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    }
    for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (arr_36 [i_21] [i_21] [i_21]))) : (((/* implicit */unsigned long long int) max((arr_28 [i_21] [i_21] [i_21] [i_21] [i_21]), (arr_28 [i_21] [i_21] [0LL] [i_21] [i_21]))))));
        /* LoopSeq 2 */
        for (short i_22 = 2; i_22 < 9; i_22 += 1) 
        {
            arr_73 [i_21] [i_21] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_63 [i_21] [i_21] [i_21]))));
            /* LoopSeq 1 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_45 = ((/* implicit */short) (~(((int) max((((/* implicit */short) arr_30 [i_21] [i_22] [i_22 - 2] [i_22])), (arr_11 [i_23] [i_21] [i_21] [i_21] [i_21]))))));
                var_46 ^= ((/* implicit */short) max((min((arr_41 [i_22 - 2] [10ULL] [i_22] [i_23]), (arr_41 [i_22 + 1] [2U] [6U] [(_Bool)1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_41 [i_22 + 2] [(signed char)10] [i_23] [i_23])))))));
                var_47 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_21] [i_22])), (var_12)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_21] [i_21]))))));
                /* LoopSeq 1 */
                for (unsigned char i_24 = 2; i_24 < 11; i_24 += 1) 
                {
                    arr_79 [i_24 - 2] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_21] [i_22 + 2] [i_23] [i_24] [i_23] [(unsigned char)4]))) : (arr_58 [(short)7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (max((374344052900746993ULL), (((/* implicit */unsigned long long int) (unsigned char)4))))));
                    var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_17)), (var_19))), (((/* implicit */long long int) ((int) var_8))))))));
                    arr_80 [i_21] [(_Bool)1] [i_22] [(_Bool)1] [i_24] [i_21] = ((/* implicit */unsigned char) arr_52 [i_21] [i_22] [(signed char)8] [i_21] [i_21]);
                    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_15))));
                }
            }
        }
        for (unsigned long long int i_25 = 1; i_25 < 11; i_25 += 4) 
        {
            arr_83 [i_21] [(unsigned char)4] = ((/* implicit */long long int) arr_78 [i_21] [i_21] [i_25] [i_25 - 1] [(unsigned char)3] [i_25 + 1]);
            arr_84 [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_30 [i_21] [i_25 + 1] [i_25] [i_21])), (var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2736873553U)))) : (((((/* implicit */_Bool) arr_30 [(unsigned char)3] [i_25 + 1] [i_25] [i_21])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))));
        }
        arr_85 [i_21] = ((/* implicit */unsigned char) var_7);
        arr_86 [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_49 [(signed char)10] [i_21] [i_21] [i_21] [i_21]), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(unsigned char)1] [i_21] [(unsigned char)1]))) : (max((max((18445619273314336784ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((unsigned long long int) var_7))))));
        var_50 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -8201557821225778998LL)) / (1124800395214870ULL)));
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
        {
            arr_92 [i_26] [i_26] = ((/* implicit */unsigned short) var_1);
            arr_93 [i_26] = ((((/* implicit */_Bool) min((arr_88 [i_26]), (arr_88 [i_27])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((signed char) arr_90 [15] [15]))));
        }
        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_88 [i_26])) ? (arr_88 [i_26]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_88 [i_26])) ? (((/* implicit */long long int) var_6)) : (arr_88 [i_26]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_88 [i_26])))))))));
        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_88 [i_26])) ? (arr_89 [i_26] [i_26] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
    }
    var_53 ^= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_19))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_11)))))));
    var_54 = ((/* implicit */short) var_7);
}
