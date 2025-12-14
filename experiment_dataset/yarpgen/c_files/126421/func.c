/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126421
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
    var_15 = ((/* implicit */long long int) var_9);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) arr_2 [11] [i_0]);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) < (((/* implicit */int) (unsigned short)24499))))) < (((/* implicit */int) ((((/* implicit */int) (signed char)44)) < (-2046791952))))))) < (((/* implicit */int) (unsigned short)58508))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] |= ((/* implicit */int) ((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)44)) : (arr_0 [i_1]))), (((/* implicit */int) ((((/* implicit */int) (short)-2143)) < (((/* implicit */int) (unsigned short)58495))))))) < (((/* implicit */int) ((arr_5 [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58508))))))));
        var_18 = (((!(((arr_0 [i_1]) < (((/* implicit */int) (short)-512)))))) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) (unsigned short)62577)));
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) 2147483584ULL)) ? ((-(((/* implicit */int) (unsigned short)58508)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) < (arr_5 [i_1])))))), (((/* implicit */int) (!(((2046791952) < (((/* implicit */int) arr_2 [i_1] [i_1])))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_3] [(short)4] [7U] [i_5] = min((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_4] [i_3])) < (((/* implicit */int) arr_4 [i_2] [i_4]))))), ((~(1658088894U))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -2015143015)) ? (((((/* implicit */_Bool) arr_15 [(unsigned short)0] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58508))) : (arr_1 [i_4] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_3 [i_3]))))))) * (((/* implicit */unsigned int) arr_0 [i_3]))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_3 [i_2]))) < (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)253)) < (((/* implicit */int) arr_8 [(unsigned char)10]))))), ((short)-29454))))));
                        arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned long long int) arr_13 [i_2] [i_3] [(unsigned short)1]));
                        var_22 = ((/* implicit */unsigned int) ((((arr_14 [i_2] [i_2]) ? (((/* implicit */int) arr_14 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_5] [i_2])))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (65535U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) (~(7083906586989435852ULL)));
            var_24 = ((/* implicit */int) arr_3 [(unsigned char)7]);
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) min((((((((/* implicit */int) var_10)) < (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)129)), (arr_11 [i_7] [i_7] [i_7])))) : (((arr_8 [i_7]) ? (((/* implicit */long long int) 586235833)) : (arr_6 [i_2] [i_2]))))), (max((arr_6 [i_2] [i_7]), (arr_6 [i_2] [i_2]))))))));
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521))) : (arr_1 [(unsigned short)5] [i_8])))) < (arr_23 [i_9 - 2] [i_9 - 2] [i_9 - 2])))))))));
                            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) max((min((arr_15 [i_2] [i_8 + 2] [i_10]), (((/* implicit */unsigned short) arr_25 [i_10] [i_9] [i_7] [(unsigned short)0])))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)10)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                arr_36 [i_11] = ((/* implicit */unsigned char) max(((((-(((/* implicit */int) arr_20 [i_2] [i_2])))) < (((/* implicit */int) ((arr_23 [i_2] [i_2] [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_11])))))))), (min((((arr_26 [i_12] [i_2]) < (((/* implicit */long long int) ((/* implicit */int) (short)2143))))), (max(((_Bool)1), (arr_35 [i_2] [i_11] [(unsigned short)1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((((/* implicit */short) max(((!(((/* implicit */_Bool) -8051228763782250788LL)))), ((!(((/* implicit */_Bool) (unsigned short)2958))))))), (var_14)));
                            var_29 -= ((/* implicit */int) 6ULL);
                            arr_41 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_39 [i_2] [i_2] [i_2]), (arr_4 [i_13] [i_11])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_2] [i_12] [i_13])))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                arr_44 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_11] [i_15])) ? (arr_23 [i_2] [i_11] [i_15]) : (arr_23 [i_2] [i_11] [i_15])));
                var_30 = ((/* implicit */unsigned short) ((arr_28 [(unsigned char)8] [(unsigned char)8] [i_11] [(unsigned char)8]) < (((/* implicit */int) arr_42 [i_2] [5] [i_11] [i_15]))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 7; i_16 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        {
                            arr_53 [i_16] [i_16] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)2550))));
                            var_31 &= ((/* implicit */signed char) (unsigned char)0);
                            arr_54 [i_16] [2U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_16 + 3]))) + (max((((/* implicit */int) (_Bool)1)), (arr_22 [i_2]))))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */short) arr_30 [i_2] [i_2] [i_11] [i_2] [i_2]);
            }
            for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_33 = arr_12 [i_2] [i_2] [i_19];
                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_2] [i_11] [i_19] [i_11]) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_19])) : (((/* implicit */int) arr_27 [i_2] [i_11] [i_11] [i_19]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-634521537) : (((/* implicit */int) (_Bool)1))))) ? (arr_28 [i_2] [i_2] [i_19] [0U]) : (((/* implicit */int) ((((/* implicit */int) arr_52 [i_19] [i_19] [(unsigned char)2])) < (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((arr_13 [i_2] [i_11] [i_19]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
            }
            arr_57 [i_2] [i_11] [(unsigned short)0] = ((/* implicit */signed char) (-(max((max((((/* implicit */long long int) var_12)), (20LL))), ((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3389174513U))))))));
            /* LoopSeq 3 */
            for (short i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                var_35 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_39 [i_2] [i_2] [i_11])) ? (((/* implicit */int) (signed char)-70)) : (-1587446029))) + (((/* implicit */int) max((arr_39 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) (unsigned char)7))))))) * (((/* implicit */int) arr_45 [i_2] [i_20] [i_20]))));
                arr_61 [i_2] [i_11] [i_20] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((-(-634521519))) < (min((((/* implicit */int) (short)-2143)), (295430504))))))));
            }
            for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_22 = 0; i_22 < 11; i_22 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) ((arr_6 [i_2] [i_2]) < (((/* implicit */long long int) 2871151429U))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_2] [i_2] [i_21] [i_22])) < ((-(((/* implicit */int) arr_16 [i_22] [i_21] [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 2) /* same iter space */
                    {
                        arr_70 [i_23] [i_23] [i_22] [i_21] [i_11] [i_2] = ((/* implicit */unsigned char) (unsigned short)65535);
                        var_38 = (~(((((/* implicit */_Bool) (unsigned short)2953)) ? (((/* implicit */int) arr_66 [i_2] [i_11] [i_21] [i_23])) : (((/* implicit */int) arr_66 [i_11] [i_21] [i_22] [i_23])))));
                        var_39 *= ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-105)), (-2147483644)))), (18446744073709551609ULL)))));
                        var_40 = ((/* implicit */unsigned short) ((1628821008U) - (((/* implicit */unsigned int) (-2147483647 - 1)))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) /* same iter space */
                    {
                        arr_74 [i_21] [i_24] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) arr_9 [i_22] [i_24])), (24ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -612779870)))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_73 [i_2] [i_11] [i_21] [i_21] [i_22] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                        arr_75 [i_22] [1U] = 1476007518;
                        arr_76 [i_2] = ((/* implicit */short) (unsigned short)2959);
                    }
                    for (int i_25 = 3; i_25 < 9; i_25 += 4) 
                    {
                        var_41 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_42 [i_2] [i_11] [i_21] [i_22])), (18446744073709551615ULL)));
                        arr_79 [i_2] [i_11] [i_21] [(short)4] [i_25] = ((/* implicit */unsigned int) ((short) (_Bool)0));
                        var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (-(((/* implicit */int) (((-(16576568254046927798ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (4611686018426339328ULL)))))))))))));
                        var_43 += ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) arr_30 [i_25] [i_25] [(unsigned short)4] [i_25 - 3] [i_25])), (4294967290U)))));
                    }
                    arr_80 [i_22] [i_21] [i_21] [i_11] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_12)))), (max((-1476007518), (((/* implicit */int) arr_58 [i_2]))))))) ? (((/* implicit */unsigned int) max((min((((/* implicit */int) (short)2142)), (2147483647))), (((/* implicit */int) ((arr_10 [i_11]) < (arr_30 [i_2] [i_11] [5LL] [i_22] [i_2]))))))) : (max((max((((/* implicit */unsigned int) arr_43 [i_2])), (487544064U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_21])) ? (((/* implicit */int) arr_2 [i_2] [i_22])) : (923176132))))))));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_2] [i_21] [i_11])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_78 [i_2] [i_11] [i_21] [i_26] [i_26] [i_21]))))) : (arr_49 [i_2] [i_2] [i_21] [i_2])));
                    var_45 = ((/* implicit */int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_8))))))), ((~(max((((/* implicit */unsigned int) var_12)), (416343962U)))))));
                    arr_85 [i_26] [i_21] [i_11] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [(unsigned short)8] [i_11]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_37 [4ULL] [4ULL] [4ULL] [i_26])) < (((/* implicit */int) (unsigned short)63)))))) < (((((/* implicit */_Bool) 4224974248U)) ? (17223608953387619090ULL) : (((/* implicit */unsigned long long int) 2442321313U))))))) : ((((_Bool)0) ? (1056964608) : (((/* implicit */int) (unsigned short)65535))))));
                }
                arr_86 [i_2] [i_2] [i_21] [i_21] = ((/* implicit */int) min((((arr_49 [i_2] [i_11] [i_21] [i_21]) < (arr_49 [i_2] [i_2] [i_11] [(unsigned char)2]))), (((arr_49 [i_2] [i_2] [i_21] [i_2]) < (arr_49 [i_2] [i_21] [i_21] [i_21])))));
                var_46 = ((/* implicit */long long int) (-((+(((/* implicit */int) var_14))))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                arr_90 [i_2] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_28 [i_2] [i_11] [i_27] [i_27])) < (var_6)));
                var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((((_Bool)0) || (((/* implicit */_Bool) 416343962U)))) ? (max(((-2147483647 - 1)), (((/* implicit */int) (short)32767)))) : (-365553169))))));
            }
            arr_91 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_87 [2U] [i_11] [i_11]), (((/* implicit */unsigned short) arr_32 [i_2]))))))))) < (((((((/* implicit */int) (_Bool)1)) < (2147483644))) ? (min((arr_69 [i_2]), (((/* implicit */long long int) (short)31615)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_55 [i_2] [i_2] [i_2]) < (((/* implicit */unsigned int) 2147483647))))))))));
        }
    }
    var_48 = var_8;
    var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
}
