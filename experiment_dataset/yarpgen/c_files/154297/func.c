/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154297
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
    var_20 -= ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) ^ (-54968596)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28021)) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (-933176976)))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_11 [i_0 - 1] [i_0] [i_3]);
                            var_22 ^= ((/* implicit */unsigned short) arr_6 [i_0] [i_0 - 1] [i_4 - 1] [i_4 - 1]);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_3] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_16 [i_0] [i_1] [i_3] [i_5] = ((/* implicit */unsigned short) (-(arr_11 [i_1] [i_2] [i_3])));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_1] [i_5]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            arr_19 [i_3] [i_1] [i_1] [i_3] [i_6] = ((/* implicit */long long int) ((var_16) ? (arr_11 [i_1] [i_2] [i_3]) : (arr_11 [i_0] [i_0] [i_3])));
                            var_24 = ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_2] [i_1] [i_3])) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_1])))));
                        }
                        arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_19)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -299888516)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((arr_13 [i_3] [i_1] [i_2] [i_2] [i_3]), (((/* implicit */unsigned short) (unsigned char)0))))) : ((-(((/* implicit */int) arr_18 [i_0] [i_1] [i_3] [i_3]))))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        var_25 -= (!(((/* implicit */_Bool) ((((/* implicit */int) var_19)) >> (((arr_11 [(_Bool)1] [i_7] [(_Bool)1]) - (3795227365U)))))));
        var_26 ^= ((/* implicit */unsigned int) ((_Bool) arr_22 [i_7]));
        var_27 = arr_7 [i_7] [i_7] [i_7] [i_7];
        var_28 *= ((/* implicit */_Bool) 9767706157911940520ULL);
        var_29 = (~(((/* implicit */int) arr_6 [i_7] [i_7] [i_7] [i_7])));
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 8; i_8 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_22 [i_8]) : (((/* implicit */int) arr_7 [i_8] [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) arr_23 [i_8])) : (((((((/* implicit */int) (short)-27165)) + (2147483647))) << (((3413132245U) - (3413132245U))))))))));
        var_31 = ((/* implicit */int) var_1);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 1) 
        {
            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_1 [6] [i_9 + 2]))))) & (((var_17) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2548976364U))))))));
            var_33 -= ((/* implicit */signed char) (~(arr_28 [i_8 + 2] [i_8 + 2] [i_8 + 1])));
            /* LoopSeq 1 */
            for (int i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                arr_33 [i_8] [i_9 - 1] = ((/* implicit */unsigned short) arr_24 [i_8] [i_8]);
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) > (arr_17 [i_8] [i_8] [i_9 - 2] [i_10] [i_10 + 2] [i_11] [i_11])));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1] [i_8]))) - (var_10)));
                    arr_38 [i_8] [i_8] [i_9 - 2] [i_10] [i_11] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_11] [i_9] [i_9 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_9 - 1] [i_9 + 2] [i_8]))) : (0ULL)));
                    var_36 = ((/* implicit */unsigned short) (-(arr_5 [i_9 - 1] [i_9 + 1] [i_9] [i_9 + 2])));
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned int) arr_40 [i_8] [i_8 + 1] [i_8 + 1] [(unsigned short)4] [i_8 + 1]);
                            arr_43 [i_9] [i_10 + 1] [i_12] [i_13] = ((/* implicit */long long int) (~(195950685)));
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)29243)) ? (((/* implicit */int) arr_41 [i_9 - 2])) : (181658767)));
                        }
                    } 
                } 
            }
            var_39 |= ((/* implicit */long long int) ((int) arr_29 [i_8 + 1] [i_8 - 2]));
        }
        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            arr_47 [i_8 - 2] [i_14] = ((/* implicit */unsigned short) ((arr_24 [i_8] [i_8]) ? (((((/* implicit */int) arr_31 [i_8] [i_14])) + (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_25 [i_8 - 1]))));
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        {
                            var_40 &= ((/* implicit */long long int) ((((/* implicit */int) ((short) 0ULL))) >= (((int) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8 - 2]))));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_36 [i_15 + 2] [i_14] [i_15] [4U])) ^ (((((/* implicit */int) var_9)) + (((/* implicit */int) var_5))))));
                            var_42 -= ((/* implicit */short) ((arr_51 [i_15]) + ((+(2834051219U)))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_8])) >> (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            } 
            var_44 *= ((/* implicit */short) ((var_6) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        }
    }
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)0) ? (1052204622U) : (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((0ULL) >= (((/* implicit */unsigned long long int) -1797493077)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) var_18))))) ? (8427768572732995337LL) : (((/* implicit */long long int) ((/* implicit */int) (!(var_17)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 23; i_19 += 2) 
        {
            arr_61 [i_18] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_18] [i_19])) ? (arr_56 [i_19]) : (0ULL)));
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 2; i_21 < 20; i_21 += 2) 
                {
                    {
                        var_46 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_21 - 1] [i_21 + 3] [i_21 - 1] [i_21 + 3])) * (((/* implicit */int) arr_64 [i_21 - 2] [i_21 - 2] [i_21] [(unsigned short)18]))));
                        var_47 = ((/* implicit */unsigned char) var_4);
                        var_48 = ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 2 */
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                        {
                            arr_69 [i_18] [i_18] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_18] [i_19] [i_21 + 3] [i_18] [i_22]))));
                            var_49 = ((/* implicit */short) ((((int) var_3)) + (((var_18) ? (arr_55 [i_20]) : (((/* implicit */int) var_5))))));
                            arr_70 [i_19] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_18] [i_19] [i_19] [i_21 + 2] [i_22])) ? ((~(arr_68 [i_20]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40367)))));
                            var_50 = ((/* implicit */int) (((_Bool)1) && (var_17)));
                        }
                        for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
                        {
                            arr_73 [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-4184)))))));
                            var_51 = ((/* implicit */short) ((((arr_56 [i_21]) - (((/* implicit */unsigned long long int) arr_62 [i_18])))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_64 [i_19] [i_19] [i_20] [i_21])))))));
                            var_52 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (arr_57 [i_23] [i_23])));
                            var_53 = ((/* implicit */unsigned char) ((_Bool) (_Bool)1));
                            var_54 |= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) ? (arr_65 [i_20] [i_20] [i_20] [i_20] [i_20]) : (((/* implicit */int) arr_58 [i_20] [i_23])))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_24 = 0; i_24 < 23; i_24 += 1) 
            {
                arr_77 [i_18] [i_19] [i_24] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (arr_57 [i_18] [i_24])));
                var_55 = ((/* implicit */int) 3729552299U);
                arr_78 [i_18] [i_18] [i_19] [i_24] = (!(((/* implicit */_Bool) arr_55 [i_24])));
                var_56 = ((/* implicit */int) (unsigned short)46056);
            }
            for (int i_25 = 3; i_25 < 20; i_25 += 3) 
            {
                arr_83 [i_25] [i_19] [i_18] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29952)))))));
                var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                arr_84 [(_Bool)1] [(_Bool)1] [(short)5] [i_25] = ((var_16) ? (((/* implicit */int) arr_72 [i_18] [i_18] [i_19] [i_19] [i_25 - 3])) : (((/* implicit */int) arr_72 [i_18] [i_18] [i_18] [i_18] [i_18])));
                var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) 9580397656846360318ULL))));
                var_59 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_67 [i_18] [i_25 - 3] [i_25 - 2] [i_18] [i_25])) : (((/* implicit */int) var_19))));
            }
            arr_85 [i_18] [i_19] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (_Bool)1)) != (1037391589))));
        }
        for (int i_26 = 1; i_26 < 21; i_26 += 1) 
        {
            var_60 *= ((/* implicit */unsigned char) ((short) arr_79 [i_26] [i_18]));
            arr_88 [i_18] [i_18] = ((/* implicit */unsigned char) arr_74 [i_18] [i_18] [i_26] [22]);
            var_61 ^= 1904386820U;
            /* LoopNest 2 */
            for (long long int i_27 = 0; i_27 < 23; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    {
                        var_62 = ((/* implicit */short) -328088991);
                        var_63 = ((/* implicit */unsigned char) min((var_63), (((/* implicit */unsigned char) ((((/* implicit */int) arr_59 [i_18] [i_27])) > (1550924713))))));
                        var_64 = ((/* implicit */unsigned int) (~(arr_62 [i_26 - 1])));
                        var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) 8427768572732995337LL))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                for (unsigned int i_30 = 0; i_30 < 23; i_30 += 4) 
                {
                    {
                        var_66 = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        var_67 = ((arr_65 [i_18] [i_26 + 1] [i_29] [i_29] [i_30]) - (((/* implicit */int) (short)7)));
                        var_68 = (~(((/* implicit */int) arr_91 [i_29])));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
        {
            for (unsigned short i_32 = 0; i_32 < 23; i_32 += 4) 
            {
                for (unsigned long long int i_33 = 3; i_33 < 20; i_33 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_34 = 1; i_34 < 21; i_34 += 1) 
                        {
                            var_69 = ((/* implicit */int) arr_81 [i_31 + 1]);
                            var_70 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_60 [i_31 + 1] [i_33 - 3])) + (((/* implicit */int) var_9))));
                            arr_110 [i_34] [i_31 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_109 [i_33] [i_33] [i_33 - 1] [i_33] [i_33]))));
                        }
                        for (int i_35 = 1; i_35 < 22; i_35 += 2) 
                        {
                            var_71 = ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_96 [i_32] [i_18] [i_35])));
                            var_72 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_100 [(signed char)6] [i_18])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [(unsigned short)15] [i_32] [i_32] [i_32] [i_32])))))));
                            var_73 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_12))) * (((((/* implicit */_Bool) arr_56 [i_31 + 1])) ? (((/* implicit */unsigned long long int) arr_57 [i_18] [i_18])) : (arr_63 [i_32] [i_33] [i_35])))));
                            var_74 = ((/* implicit */unsigned char) ((((_Bool) arr_103 [i_18] [i_31] [i_18] [i_35])) ? (arr_109 [i_18] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_35 - 1]) : (arr_75 [i_31])));
                            arr_113 [i_35] [i_31] [i_32] [i_32] [i_31] [i_35] [i_35] = ((/* implicit */short) var_6);
                        }
                        var_75 = ((/* implicit */int) ((var_16) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_31 + 1] [i_33 - 2]))) : (var_10)));
                    }
                } 
            } 
        } 
    }
}
