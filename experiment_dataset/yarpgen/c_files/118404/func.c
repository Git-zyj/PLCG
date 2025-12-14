/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118404
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (short)-27121)) % (((/* implicit */int) arr_2 [i_0] [i_0])))));
        var_21 += ((/* implicit */long long int) ((((arr_1 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) ? (min((((((/* implicit */_Bool) 10373418658524293749ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))), (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_2 [i_0] [(_Bool)1]))))))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_22 = ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */int) var_19)))) / ((-(((/* implicit */int) min((var_12), (((/* implicit */signed char) (_Bool)1))))))));
        var_23 = ((/* implicit */signed char) min(((unsigned short)61041), (((/* implicit */unsigned short) (unsigned char)77))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [8U]))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((-(var_11))) : (var_11)));
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_1]))))) && (((/* implicit */_Bool) arr_3 [i_1]))));
            arr_8 [i_1] [(signed char)16] = (-(((unsigned long long int) arr_5 [i_1])));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_3] [i_3] [i_2])) && (((/* implicit */_Bool) arr_12 [i_4 + 2] [i_4] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 - 1] [5] [5] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [i_4] [i_5 - 1])) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_3] [15] [i_5 + 1]))));
                            var_28 = ((/* implicit */unsigned short) ((_Bool) arr_14 [i_1] [i_4] [i_5 - 1]));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_5 + 2])) ? (((/* implicit */int) arr_15 [i_5 + 2] [i_4 - 2] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_3 [i_4]))));
                        }
                    }
                } 
            } 
            var_30 &= ((/* implicit */long long int) arr_5 [i_1]);
            var_31 = ((/* implicit */unsigned short) (((~(4262477717U))) % (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
        }
        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_6] [i_6] [i_7] [i_1]))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) 3617843113138500814LL))));
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */short) (~(((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_7] [i_1]))) : (var_18)))));
                            var_34 = ((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */int) arr_18 [i_1] [i_6 + 3] [i_8 - 3])) : (arr_28 [i_6]));
                            var_35 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2711457329U)) ? (((/* implicit */int) arr_15 [i_6 + 2] [i_8] [i_8 - 2] [0] [12ULL])) : (((/* implicit */int) arr_5 [i_6 - 1]))));
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55239))) : (arr_13 [i_1] [i_9] [i_8 - 1] [i_6] [i_6] [i_1])))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1] [i_6] [i_6 + 2] [(unsigned char)4]) | (arr_13 [i_1] [i_6] [i_6 + 3] [i_6] [i_6] [i_1])));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                var_38 &= ((/* implicit */int) ((arr_26 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                var_39 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 2] [i_10] [i_10 - 1] [i_10]))) & (((arr_6 [i_1] [i_6]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                var_40 = ((/* implicit */long long int) var_7);
            }
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                arr_34 [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_1])) ? (((/* implicit */int) arr_30 [i_11] [i_6] [i_11] [i_6])) : (((/* implicit */int) arr_33 [i_6 - 2] [i_6 - 2] [i_6 + 4] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    for (short i_13 = 3; i_13 < 22; i_13 += 3) 
                    {
                        {
                            arr_39 [i_6] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29236)) * (((/* implicit */int) (signed char)96))));
                            var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_13] [i_13 - 3] [i_13] [i_13 - 2] [i_13 - 2])) ? (-6) : (((/* implicit */int) var_12))));
                            var_42 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(short)4] [i_13 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_18 [i_1] [i_13 - 3] [i_6 + 4])) : (((/* implicit */int) arr_18 [i_1] [i_13 - 1] [i_6 - 1]))));
                        }
                    } 
                } 
                arr_40 [i_6] = ((/* implicit */long long int) ((unsigned long long int) arr_20 [i_1] [i_6 - 2] [i_11]));
            }
            for (int i_14 = 0; i_14 < 23; i_14 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                {
                    var_43 = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)115)))) % (((/* implicit */int) var_2))));
                    arr_47 [(unsigned short)19] [i_6] [i_14] [i_6] [i_6] [10ULL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_6 - 2] [i_6 - 2] [i_14]))));
                }
                var_44 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_45 = ((/* implicit */signed char) (+(arr_17 [i_6 - 2] [i_6])));
                /* LoopSeq 2 */
                for (short i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    var_46 *= (~(arr_41 [i_16] [i_6 + 3]));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)29864)) / (((((/* implicit */_Bool) 6)) ? (-6) : (6)))));
                    var_48 = ((/* implicit */short) ((arr_38 [i_16] [i_14] [i_14] [i_14] [i_6] [i_1]) ? ((+(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) arr_30 [i_6] [i_1] [i_1] [i_6]))))));
                    var_49 = ((/* implicit */unsigned long long int) var_11);
                }
                for (int i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-120)))) % (((((/* implicit */_Bool) arr_45 [i_1] [i_17] [i_1] [i_6] [i_1] [i_17])) ? (arr_48 [i_1] [i_6] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_11))))));
                    var_51 = ((/* implicit */int) arr_16 [i_1] [i_17]);
                    var_52 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [1U] [(short)15] [i_14] [(unsigned short)14] [i_17]))) == (arr_6 [i_1] [i_1]))))));
                    var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_6 + 3])) ? (((/* implicit */int) arr_5 [i_6 + 3])) : (((/* implicit */int) arr_5 [i_6 - 2]))));
                }
                var_54 = ((/* implicit */int) (+(arr_31 [i_6 + 4] [i_6] [i_6 + 2])));
            }
            for (int i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                arr_57 [i_6] [i_6] = (unsigned char)63;
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 23; i_19 += 3) 
                {
                    var_55 &= ((/* implicit */signed char) arr_50 [i_1] [i_1] [i_1] [i_6] [i_1] [i_19]);
                    /* LoopSeq 2 */
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 1) 
                    {
                        var_56 = ((/* implicit */unsigned short) min((var_56), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_1] [i_6] [i_6 - 1] [i_1])))))));
                        arr_65 [i_6] [i_1] [i_18] [i_6] = ((/* implicit */short) (-(var_3)));
                        var_57 = ((/* implicit */unsigned int) (((!(arr_51 [i_1] [i_1] [(unsigned short)22] [i_6]))) ? (((/* implicit */int) arr_55 [i_6] [i_6 + 1] [i_6 + 1] [i_6])) : (((((/* implicit */_Bool) arr_45 [i_1] [i_6] [i_1] [i_1] [i_1] [i_1])) ? (arr_32 [i_20]) : (((/* implicit */int) var_9))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        var_58 = ((/* implicit */long long int) ((((_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_6] [i_18] [i_19] [i_21])) && (((/* implicit */_Bool) (short)768))))) : (((/* implicit */int) arr_18 [i_6 + 4] [i_6 + 3] [i_6]))));
                        var_59 ^= ((/* implicit */unsigned int) (short)-21497);
                    }
                }
                for (unsigned int i_22 = 4; i_22 < 20; i_22 += 1) 
                {
                    var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_62 [i_22 - 4] [i_22 - 4] [i_22 - 4] [i_22 - 4] [i_22 + 2] [i_22 - 4] [i_22 - 4])) : (((((/* implicit */_Bool) arr_61 [i_1] [i_6] [i_6] [i_22])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
                    var_61 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_1] [i_6] [i_6] [i_1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_1])))));
                    var_62 = ((/* implicit */signed char) min((var_62), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10311)) ? (((/* implicit */int) (_Bool)1)) : (0)))) ? (((/* implicit */int) (short)-8002)) : (((((/* implicit */int) arr_52 [i_1] [i_1] [i_1] [i_1])) - (2147483647))))))));
                }
            }
            arr_73 [i_1] [i_6] [i_6] = ((/* implicit */short) (-(((/* implicit */int) arr_43 [i_1] [i_6] [i_6 + 4] [i_1]))));
        }
        for (int i_23 = 4; i_23 < 22; i_23 += 4) 
        {
            arr_77 [i_1] [i_1] = ((/* implicit */long long int) ((var_11) != (((/* implicit */int) arr_11 [i_23] [i_23 - 4] [i_23 - 2] [i_23 - 2]))));
            var_63 ^= ((/* implicit */signed char) ((((arr_51 [i_1] [i_1] [i_23] [i_1]) ? (var_18) : (((/* implicit */unsigned long long int) var_14)))) * (arr_61 [i_1] [i_1] [i_1] [i_23 - 2])));
            arr_78 [i_1] = ((arr_59 [i_1] [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_23 - 3] [i_23 - 2] [i_23 - 4] [i_23 - 3] [i_23 - 2] [i_23 + 1] [i_23 - 1]))));
            arr_79 [(unsigned short)18] [i_23] = ((/* implicit */signed char) arr_23 [i_23 - 3] [i_1] [i_1] [i_1] [i_1] [i_1]);
        }
        arr_80 [i_1] = ((/* implicit */unsigned char) ((unsigned short) var_11));
        var_64 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (arr_75 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    }
    for (int i_24 = 0; i_24 < 22; i_24 += 1) 
    {
        /* LoopNest 2 */
        for (short i_25 = 2; i_25 < 20; i_25 += 4) 
        {
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                {
                    var_65 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_25] [i_26 - 1] [i_26] [i_26 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_25 - 2] [i_26] [i_26 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_31 [i_25 + 1] [i_25] [i_26 - 1])))) : (((((/* implicit */_Bool) arr_76 [i_26 - 1] [i_25 + 2] [i_25])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (var_11)))) : (((((/* implicit */_Bool) arr_9 [i_24] [i_24])) ? (var_4) : (((/* implicit */unsigned long long int) 33))))))));
                    /* LoopSeq 4 */
                    for (int i_27 = 0; i_27 < 22; i_27 += 1) 
                    {
                        arr_89 [i_27] [i_27] [i_26] [5LL] [i_24] [i_27] = max((((/* implicit */unsigned long long int) (+(arr_26 [i_27])))), (((((/* implicit */_Bool) arr_24 [i_27] [i_26 - 1] [i_25 - 2] [i_25 + 1] [i_25 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_24] [i_25] [i_25] [i_25])) && (((/* implicit */_Bool) (unsigned short)2764)))))) : (var_4))));
                        arr_90 [i_26 - 1] [i_27] [i_27] [i_24] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_19 [i_24] [i_25 + 2] [i_26] [i_26 - 1]))))) ? (arr_68 [(signed char)17] [(signed char)17] [i_27] [i_27]) : ((+(((/* implicit */int) var_7))))));
                    }
                    for (int i_28 = 3; i_28 < 21; i_28 += 3) 
                    {
                        var_66 = ((/* implicit */unsigned int) ((long long int) arr_43 [i_24] [i_25] [i_26] [i_28 - 3]));
                        var_67 = ((/* implicit */long long int) var_9);
                    }
                    for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 1) 
                    {
                        arr_95 [i_29] = ((/* implicit */unsigned long long int) ((unsigned int) (+((-(((/* implicit */int) arr_23 [i_24] [i_29] [i_25] [i_26] [i_29] [i_29])))))));
                        arr_96 [(short)6] [i_25] [i_25] [i_24] |= var_4;
                    }
                    /* vectorizable */
                    for (short i_30 = 0; i_30 < 22; i_30 += 4) 
                    {
                        arr_100 [i_24] [i_25] [i_30] = ((/* implicit */_Bool) ((arr_85 [i_25 - 2] [i_26 - 1]) / (((/* implicit */unsigned int) (-2147483647 - 1)))));
                        var_68 = ((/* implicit */long long int) var_2);
                        var_69 += ((/* implicit */signed char) ((((/* implicit */int) arr_53 [i_24] [i_25 - 1] [i_26 - 1] [i_30])) + (var_17)));
                        var_70 += ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_24] [i_24] [(unsigned char)19] [i_30]))) : (var_15)))));
                    }
                    arr_101 [i_24] [i_25 - 1] [i_26] [i_25] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-8002))));
                    arr_102 [i_24] [i_25] [i_26 - 1] [i_26 - 1] = ((/* implicit */int) (~((~(var_18)))));
                }
            } 
        } 
        arr_103 [i_24] = ((/* implicit */unsigned char) max(((-(arr_17 [(signed char)0] [(signed char)0]))), (((/* implicit */unsigned long long int) arr_60 [i_24] [i_24]))));
    }
    var_71 = ((/* implicit */int) var_19);
}
