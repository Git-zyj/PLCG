/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162206
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((int) arr_4 [i_0] [i_2] [i_0]));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1464395439)) ? (((/* implicit */int) (signed char)-62)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) var_9))))) ? (arr_4 [i_0] [i_1] [i_2]) : (min((arr_4 [i_0] [i_3] [7ULL]), (((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                            var_16 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) arr_2 [i_3])) & (arr_7 [i_4] [i_2] [i_1])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_0] [i_5] [11U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (((~(((arr_8 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))) - (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) min(((short)-2), (((/* implicit */short) var_11))))))))))));
                            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_12))))))) ? (((unsigned long long int) ((unsigned int) arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_3] [i_3])) < (((((/* implicit */_Bool) arr_1 [7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [9U] [9U]))))))))));
                        }
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (arr_15 [i_0] [i_0] [(short)15] [(signed char)7] [i_0] [i_0] [(signed char)7]) : (((/* implicit */int) (signed char)-73))))))))));
                        var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned short) (short)-64)), (((/* implicit */unsigned short) ((short) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-26)))) : (((/* implicit */int) (!(((((/* implicit */int) (signed char)25)) < (((/* implicit */int) (short)3968)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-26)))))) * (((arr_18 [i_0] [i_6] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7]))) : (arr_7 [i_0] [0ULL] [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        arr_25 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((int) (short)25862));
                        /* LoopSeq 3 */
                        for (int i_9 = 4; i_9 < 15; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_13);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((signed char)-25), ((signed char)36)))) <= (((/* implicit */int) (!(arr_28 [i_8 + 2] [i_8] [i_8] [(_Bool)1] [i_8 + 2] [i_9 - 3] [i_9]))))));
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(arr_28 [i_8] [i_8] [i_6] [i_6] [i_6] [i_0] [i_0]))))));
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_25 &= ((unsigned int) max(((short)-21231), ((short)-25854)));
                            var_26 = ((/* implicit */unsigned long long int) ((((_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned char)214))))) || (((/* implicit */_Bool) ((long long int) (signed char)-127)))));
                            var_27 += ((/* implicit */unsigned long long int) (((~(arr_30 [i_10 + 1] [i_8 - 1] [i_7] [(unsigned char)4] [i_7]))) >= (((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-25)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                            var_28 = ((/* implicit */unsigned long long int) (signed char)-37);
                        }
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-(((arr_14 [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_7]) | (((/* implicit */int) var_2))))));
                            var_30 *= ((/* implicit */int) ((min((((/* implicit */int) min((var_2), (((/* implicit */short) var_12))))), (((var_0) ? (arr_14 [i_0] [(short)11] [(short)11] [4] [4]) : (2006473421))))) < ((-(((/* implicit */int) (signed char)-31))))));
                        }
                    }
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)15)))) ? (11960263397669357093ULL) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))))));
                    var_32 = ((/* implicit */unsigned long long int) (signed char)-26);
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 4) 
    {
        arr_36 [11LL] [i_12] = ((/* implicit */short) arr_15 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [(unsigned char)3]);
        arr_37 [i_12] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)39))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
                {
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_14] [i_14] [i_14]))));
                            var_34 += ((/* implicit */unsigned short) var_12);
                            var_35 &= ((/* implicit */unsigned long long int) arr_12 [i_12] [(_Bool)1] [(_Bool)1] [i_14] [i_16] [i_13]);
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) var_4))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 1) 
            {
                var_37 = ((/* implicit */_Bool) ((1046528ULL) - (11960263397669357086ULL)));
                /* LoopSeq 4 */
                for (unsigned char i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    var_38 ^= ((/* implicit */_Bool) arr_47 [i_18] [i_12] [i_12] [i_12]);
                    var_39 = ((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_18]);
                    /* LoopSeq 2 */
                    for (short i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) min((var_40), ((!(((/* implicit */_Bool) (short)-25863))))));
                        arr_56 [i_12] [i_13] [i_17] [(signed char)8] = ((/* implicit */unsigned short) 2844412599U);
                        var_41 = ((/* implicit */unsigned int) var_7);
                        var_42 *= ((/* implicit */unsigned int) ((arr_28 [3] [i_12 - 1] [i_13 + 2] [i_17 - 1] [8] [i_19] [i_19]) && (((/* implicit */_Bool) var_1))));
                    }
                    for (int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        var_43 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_51 [i_12] [(unsigned short)2]) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ^ ((-(arr_38 [i_12])))));
                        var_44 -= ((/* implicit */unsigned long long int) arr_19 [i_12] [i_13 - 1] [i_17]);
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_18] [i_12] [i_12]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))))))) + (arr_5 [i_12 - 2] [i_13 + 1])));
                    }
                    arr_61 [i_12] [i_17] [i_17 - 1] [(unsigned char)6] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_12 - 1] [i_13] [i_17 + 1] [i_12 - 1] [i_18])) ? ((~(((/* implicit */int) arr_43 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12])))) : ((~(((/* implicit */int) (signed char)124))))));
                    var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_12] [i_13 + 1] [i_17])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_12] [i_13 + 1] [(_Bool)1])))))));
                }
                for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
                {
                    arr_65 [i_21] [(unsigned char)0] [i_17] [i_17] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= ((~(((/* implicit */int) arr_0 [(unsigned short)15]))))));
                    var_47 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(18446744073708505103ULL)))) ? (arr_41 [(_Bool)1] [i_17 - 1] [i_21]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_12] [i_13] [(unsigned short)13] [i_21])) ? (((/* implicit */int) (short)-6423)) : (((/* implicit */int) var_9)))))));
                    var_48 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_12 - 1] [i_12] [i_12 - 1]) : (((/* implicit */unsigned long long int) 3505667856U))));
                }
                for (unsigned short i_22 = 2; i_22 < 15; i_22 += 1) 
                {
                    arr_68 [i_12] [14LL] [i_17] [i_12 - 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (1046521ULL)))) >= (((/* implicit */int) arr_52 [i_12] [i_22 + 1] [i_12 + 1]))));
                    arr_69 [i_17] [i_17] [i_17] [(unsigned char)1] [i_13] [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
                }
                for (signed char i_23 = 1; i_23 < 15; i_23 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_24 = 4; i_24 < 15; i_24 += 1) 
                    {
                        var_49 = ((/* implicit */short) (-(((/* implicit */int) arr_53 [i_12] [i_13 + 2] [i_17] [i_24 - 2] [i_17 + 1] [i_12 + 1]))));
                        var_50 = ((/* implicit */_Bool) ((arr_48 [i_12 - 2] [i_12 - 1] [i_12 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_12 - 2] [i_12 - 2] [i_23 - 1])))));
                    }
                    var_51 = ((/* implicit */unsigned int) ((short) arr_14 [12U] [i_12 - 2] [i_13 + 2] [i_23 + 1] [i_23]));
                    var_52 = ((/* implicit */unsigned long long int) -1349613585);
                    var_53 = ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 0; i_25 < 16; i_25 += 4) 
                    {
                        arr_78 [(short)4] [i_17] [4U] [i_17] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_12 - 2])) ? (((/* implicit */int) arr_53 [i_17] [i_17] [i_17] [i_17 - 1] [i_23 - 1] [5U])) : (((/* implicit */int) (unsigned char)216))));
                        var_54 = ((/* implicit */long long int) ((unsigned int) arr_8 [i_17 - 1] [(_Bool)1] [i_17 - 1]));
                    }
                }
                var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
            }
        }
        /* vectorizable */
        for (int i_26 = 0; i_26 < 16; i_26 += 4) 
        {
            var_56 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - ((+(arr_15 [i_12] [i_12] [9U] [i_12] [i_12] [i_12 - 1] [5U])))));
            var_57 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-127)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        for (signed char i_27 = 1; i_27 < 13; i_27 += 4) 
        {
            var_58 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_83 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */unsigned long long int) arr_83 [i_12 - 2] [i_12 - 2])) : (arr_31 [i_12 - 2] [i_12] [i_27 + 2] [i_27] [(short)4] [i_27 + 2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_27 + 1] [i_12] [i_12 + 1] [i_12]))))))));
            arr_85 [i_12] [i_27] = ((/* implicit */_Bool) arr_42 [i_27] [i_27 + 2] [i_27 - 1] [i_27]);
            /* LoopSeq 2 */
            for (unsigned long long int i_28 = 0; i_28 < 16; i_28 += 1) 
            {
                var_59 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((int) (signed char)25)) <= (((((/* implicit */_Bool) arr_79 [i_27])) ? (((/* implicit */int) arr_67 [(_Bool)1] [i_28] [i_12] [i_12] [i_12])) : (var_6))))))));
                var_60 = ((/* implicit */signed char) ((short) ((var_8) * (((/* implicit */unsigned long long int) arr_51 [i_12] [i_27])))));
                arr_88 [i_12 - 1] [i_12] = ((/* implicit */unsigned int) min((((max((arr_44 [i_27] [i_27] [i_27] [i_12]), (((/* implicit */long long int) var_5)))) != ((+(arr_26 [i_12] [i_27] [i_27] [i_12]))))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)42))))));
                arr_89 [i_12] [i_27] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)39)))))) <= (((((/* implicit */_Bool) min((arr_38 [0]), (((/* implicit */long long int) arr_29 [i_12] [(signed char)8]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (min((arr_63 [i_12] [7U] [i_28] [i_12] [i_12]), (((/* implicit */unsigned long long int) (short)12034))))))));
            }
            for (int i_29 = 0; i_29 < 16; i_29 += 4) 
            {
                arr_92 [i_12 - 1] [i_27 + 2] [i_12] [i_27] = ((/* implicit */short) ((unsigned char) var_11));
                arr_93 [i_29] [i_12] [i_27] [i_12] = ((/* implicit */_Bool) var_2);
            }
        }
        var_61 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (arr_80 [9ULL])))) ? (((/* implicit */int) ((_Bool) arr_66 [i_12] [i_12] [i_12]))) : (var_6))));
        var_62 -= ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (((signed char) arr_82 [i_12 - 1] [i_12 - 1]))));
    }
    var_63 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) var_13)) <= (((/* implicit */int) var_13)))))))) : (var_4));
    var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_13), (var_13))))))) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (var_6))) <= (var_6))))));
}
