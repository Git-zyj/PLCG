/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1867
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
    var_12 = var_1;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((int) -1));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1717112276)) : (7556046337384030977LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) : (arr_2 [i_0] [i_0 - 2]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_7) : (((/* implicit */long long int) 1))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_1] [7ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) arr_5 [i_1])) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((short) arr_7 [2])))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_16 [i_1] [i_3] = ((/* implicit */long long int) ((int) arr_13 [i_1] [i_1] [i_1]));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_15 [i_1] [i_1])) : (((int) var_7))));
            var_17 = var_11;
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_26 [i_1] [i_3] [i_4] [i_5 - 1] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_5 - 1])) ? (arr_2 [i_3] [i_3]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                            var_18 = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((long long int) ((1) >> (((((/* implicit */int) arr_13 [i_1] [(signed char)5] [i_1])) + (101))))));
            var_20 = ((/* implicit */long long int) ((arr_18 [i_1] [i_1] [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_11 [i_1] [i_1])));
            arr_30 [i_1] = arr_13 [i_1] [i_7] [6];
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_28 [i_7])) : (((/* implicit */int) arr_28 [i_7]))));
                            var_22 = ((/* implicit */unsigned long long int) ((arr_31 [i_7] [i_8 - 3] [i_10]) | (((/* implicit */long long int) var_9))));
                        }
                        arr_39 [i_1] [6ULL] [6ULL] [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_1]);
                    }
                } 
            } 
        }
        arr_40 [i_1] = ((/* implicit */unsigned long long int) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) 2896339474U)) ? (1) : (((/* implicit */int) arr_15 [i_1] [(_Bool)1])))) : (((/* implicit */int) arr_15 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) arr_42 [i_1] [i_11] [i_11]))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_4))));
            arr_44 [(signed char)9] [i_1] [(signed char)9] = ((/* implicit */unsigned int) var_10);
        }
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            arr_47 [i_12] [i_12] [i_12] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 2649649911693853029LL)) ? (arr_24 [(unsigned char)5] [i_12] [i_12] [i_12] [i_12]) : (arr_24 [i_1] [i_12] [(short)5] [i_12] [i_1])));
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        arr_52 [(signed char)2] [i_12] [i_12] [i_1] = ((/* implicit */signed char) 7556046337384030975LL);
                        arr_53 [6ULL] [i_13] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((2796303280U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1])))));
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2649649911693853030LL)) ? (arr_48 [i_12] [i_12] [i_12]) : (arr_48 [i_12] [i_14] [i_14]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_57 [i_1] [(signed char)5] [i_13] [i_14] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)246)) ? (9322418195736754667ULL) : (34359738367ULL)));
                            var_26 = ((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (short)26846)) : (((/* implicit */int) var_0)));
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                var_27 -= ((/* implicit */long long int) ((_Bool) arr_50 [i_1] [i_1] [i_16] [i_1]));
                var_28 |= ((/* implicit */unsigned char) -4978014076876437613LL);
                arr_64 [i_1] = ((/* implicit */signed char) ((unsigned int) arr_2 [i_1] [i_16]));
            }
            for (int i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                arr_67 [i_1] [i_1] [i_18] = ((/* implicit */_Bool) arr_61 [i_1] [(_Bool)1] [i_1]);
                var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((var_2) >= (var_8)))) : (((/* implicit */int) arr_42 [i_1] [i_16] [1ULL]))));
                /* LoopSeq 2 */
                for (signed char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                {
                    arr_70 [i_1] = ((/* implicit */long long int) ((unsigned short) arr_35 [i_1] [i_1] [i_1] [10] [i_1]));
                    var_30 = ((/* implicit */long long int) ((_Bool) 4294967295U));
                }
                for (signed char i_20 = 0; i_20 < 11; i_20 += 3) /* same iter space */
                {
                    arr_74 [i_1] [i_16] [i_1] = ((/* implicit */unsigned long long int) arr_31 [i_1] [i_16] [i_18]);
                    arr_75 [(signed char)3] [i_1] [i_18] [(signed char)3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7004237270718236742ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (6160802076962449499LL)))) ? (((/* implicit */int) arr_13 [(signed char)5] [i_16] [i_1])) : (((/* implicit */int) arr_50 [i_1] [i_16] [i_18] [i_1]))));
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        arr_78 [7ULL] [i_1] [i_18] [7ULL] [i_21] [(signed char)5] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_9 [i_1] [i_1] [i_1])))));
                        arr_79 [i_1] [i_1] [i_18] [i_1] [i_20] [6U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_2))));
                        arr_80 [0LL] [i_16] [i_16] [i_16] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 193268284U)) ? (((/* implicit */int) arr_45 [i_1] [i_16] [(_Bool)1])) : (((/* implicit */int) arr_22 [i_21] [i_20] [(unsigned char)2] [i_16] [i_1]))));
                    }
                    arr_81 [i_1] [i_18] [i_16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_20] [i_16] [i_16] [i_1])) ? (((/* implicit */unsigned int) 713451002)) : (((unsigned int) arr_50 [i_1] [i_1] [i_1] [7ULL]))));
                }
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) : (0U)));
            }
            for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_24 [i_16] [i_16] [i_16] [i_16] [i_22 + 2]) : (9124325877972796949ULL)));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (arr_24 [i_22] [i_22] [i_22 + 2] [i_22] [i_1]))))));
                /* LoopNest 2 */
                for (int i_23 = 3; i_23 < 10; i_23 += 2) 
                {
                    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        {
                            arr_90 [i_1] [i_1] [(unsigned char)10] [(_Bool)1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) var_6);
                            arr_91 [(_Bool)1] [(_Bool)1] [i_16] [(unsigned char)2] |= ((/* implicit */unsigned char) -2147483642);
                            arr_92 [i_24] [i_1] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (arr_25 [i_1] [i_1] [i_23] [i_16] [i_22])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_26 = 0; i_26 < 11; i_26 += 3) 
                    {
                        var_35 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) arr_46 [i_22 + 1]))));
                        var_36 = ((/* implicit */long long int) (~(arr_66 [i_26] [i_16] [i_1])));
                        var_37 = ((/* implicit */unsigned char) var_6);
                    }
                    for (signed char i_27 = 0; i_27 < 11; i_27 += 3) 
                    {
                        var_38 += ((/* implicit */long long int) ((arr_38 [i_22 - 1] [10ULL] [i_22 - 1] [i_22 + 2] [10ULL]) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_69 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(_Bool)1] [i_25])))));
                        arr_100 [i_16] [i_1] = ((/* implicit */_Bool) 0ULL);
                    }
                    for (int i_28 = 0; i_28 < 11; i_28 += 1) 
                    {
                        var_39 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_83 [(unsigned short)2] [i_22 + 2] [i_22 + 2] [(unsigned char)2]) : (arr_83 [i_1] [i_16] [i_22 - 1] [6ULL])));
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((unsigned int) var_11)))));
                    }
                    var_41 -= ((/* implicit */signed char) -289612002822581772LL);
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_29 = 0; i_29 < 11; i_29 += 2) 
            {
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    {
                        arr_108 [i_1] = ((/* implicit */short) ((unsigned char) arr_33 [i_1] [7U]));
                        var_42 -= ((signed char) 2896339453U);
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6738))) : (var_1))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_29] [i_16]))))))));
                        var_44 -= ((/* implicit */int) ((unsigned int) arr_105 [i_1] [i_29] [i_29]));
                        arr_109 [i_29] [i_1] [i_29] [i_1] = ((((/* implicit */_Bool) (short)-466)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)124)));
                    }
                } 
            } 
        }
        arr_110 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (2649649911693853030LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30467)))));
    }
    for (short i_31 = 0; i_31 < 11; i_31 += 3) /* same iter space */
    {
        var_45 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) ^ (-2649649911693853040LL)));
        /* LoopNest 3 */
        for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 3) 
        {
            for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 3) 
            {
                for (unsigned long long int i_34 = 0; i_34 < 11; i_34 += 3) 
                {
                    {
                        var_46 &= min((min((var_8), (((/* implicit */long long int) (signed char)-53)))), (((/* implicit */long long int) arr_105 [i_31] [i_32] [4])));
                        arr_124 [i_31] [i_32] = ((/* implicit */unsigned char) max((2649649911693853030LL), (((/* implicit */long long int) 3445626505U))));
                    }
                } 
            } 
        } 
    }
    var_47 = ((/* implicit */long long int) min((var_47), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (849340791U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2))) % (max((min((((/* implicit */long long int) var_5)), (var_7))), (((long long int) var_1))))))));
    var_48 = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) -289612002822581794LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))) ^ (9322418195736754666ULL))), (var_1)));
    var_49 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (9124325877972796949ULL)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((var_7) >= (var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-1))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)67)), (849340791U)))))))) : (2649649911693853030LL)));
}
