/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169486
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
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    var_15 &= ((/* implicit */_Bool) 18446744073709551606ULL);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned char) (((-(((int) var_7)))) + ((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((((arr_8 [i_3] [i_3]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)))) + (8091))) - (27)))))));
                                var_18 = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) var_5)) | (((/* implicit */int) var_3))))))));
                                arr_15 [i_3] [i_1] [i_2] [1U] [(_Bool)1] = (-(max((((/* implicit */int) (unsigned char)88)), (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_0] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 2) 
                    {
                        for (short i_7 = 1; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_25 [i_7] [1ULL] [i_7] [(unsigned short)2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_7 [i_7]), ((short)10772)))) ? (((/* implicit */int) arr_1 [i_1] [i_5 - 2])) : (((/* implicit */int) ((_Bool) arr_5 [i_7 + 2])))));
                                var_19 = ((/* implicit */_Bool) var_6);
                                var_20 = min((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_7]))))), (max((var_0), (((/* implicit */long long int) arr_7 [i_7])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */int) (((+(((((/* implicit */_Bool) 1951574404)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_31 [i_0] [i_1] [i_8 - 2] [i_0] [i_10] [i_1])))) && (((/* implicit */_Bool) ((int) (unsigned short)65535)))))))));
                                arr_32 [i_8] [i_9] &= ((/* implicit */unsigned int) ((((((int) var_4)) <= (((/* implicit */int) min(((unsigned short)65024), (((/* implicit */unsigned short) var_3))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_14 [i_9]) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_11))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_34 [i_11] [(_Bool)1])), (var_8))))) - (((((/* implicit */_Bool) (short)8191)) ? (arr_33 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        var_24 = ((/* implicit */unsigned long long int) (((+(var_11))) ^ (((/* implicit */long long int) ((var_7) + (((/* implicit */int) arr_34 [i_11] [18U])))))));
        arr_36 [15] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65024)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))) - (((/* implicit */int) arr_34 [i_11] [i_11]))));
    }
    for (short i_12 = 2; i_12 < 22; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_25 = max((((((/* implicit */_Bool) min((arr_37 [i_12]), (((/* implicit */long long int) arr_39 [i_13] [(unsigned short)9]))))) ? (max((((/* implicit */long long int) var_7)), (arr_37 [11U]))) : (((arr_37 [i_12]) + (((/* implicit */long long int) arr_39 [i_12] [i_12])))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_37 [i_12 - 1]))));
            var_26 = (+(((/* implicit */int) ((unsigned short) var_9))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                for (unsigned char i_15 = 1; i_15 < 21; i_15 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_10))));
                        arr_50 [i_15] [i_13] [i_15 + 2] [i_14] [i_13] [i_12] = ((/* implicit */unsigned short) (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_12)))))) > (((/* implicit */int) var_9))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) ((int) arr_46 [i_12 - 1] [i_12] [i_13 - 1] [i_13] [i_13 - 1] [i_13]));
        }
        arr_51 [(unsigned char)14] = ((/* implicit */long long int) ((unsigned int) ((unsigned short) 2578336557289176491LL)));
        var_29 = ((/* implicit */unsigned short) arr_43 [i_12] [i_12] [i_12]);
        /* LoopSeq 3 */
        for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 2) 
        {
            var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (((long long int) min((arr_45 [i_16] [i_16]), (((/* implicit */unsigned short) (short)21313)))))));
            arr_54 [i_12] [i_16] [i_16] = ((/* implicit */_Bool) (~(((int) arr_41 [i_12 - 2] [i_16]))));
        }
        for (short i_17 = 4; i_17 < 20; i_17 += 1) 
        {
            arr_57 [(unsigned short)14] [(unsigned char)12] [i_17] = ((/* implicit */short) (+(max((arr_46 [i_12] [i_12 - 2] [i_12] [i_12 - 1] [i_12 - 2] [i_12]), (((/* implicit */long long int) var_13))))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_48 [i_12] [i_12 - 1] [i_12 - 2] [17ULL])) == (((/* implicit */int) arr_48 [i_12 - 2] [i_12 + 1] [i_12 - 2] [i_12 + 1]))))) + (((/* implicit */int) var_9))));
        }
        for (short i_18 = 3; i_18 < 20; i_18 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                {
                    for (unsigned int i_21 = 1; i_21 < 22; i_21 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((int) (~(((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5904)))))))))));
                            arr_70 [i_18] [i_20] [1] [20ULL] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((max((max((575897802350002176ULL), (((/* implicit */unsigned long long int) arr_47 [i_21] [i_20] [i_20] [(short)6] [i_12])))), (arr_64 [i_18] [i_18 - 2] [17U] [i_20]))) - (((/* implicit */unsigned long long int) arr_38 [i_12]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (long long int i_23 = 1; i_23 < 20; i_23 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 5619018367110038025LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_22] [i_22]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_22] [i_22])) ? (arr_68 [i_22] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                            var_34 &= ((/* implicit */unsigned long long int) var_7);
                            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_72 [i_12 + 1] [i_18 - 1] [i_18] [i_22])))) ? (max((((/* implicit */unsigned long long int) arr_61 [i_12 + 1] [i_18 - 1] [17ULL] [i_23 - 1])), (10685389857304580140ULL))) : (((/* implicit */unsigned long long int) max((arr_61 [i_12 + 1] [i_18 - 3] [(unsigned char)0] [i_23 - 1]), (arr_61 [i_12 + 1] [i_18 - 1] [i_18 - 1] [i_23 + 3]))))));
                            arr_75 [i_22] = ((/* implicit */unsigned long long int) var_6);
                        }
                    } 
                } 
                arr_76 [i_18] [i_18] = ((/* implicit */unsigned char) ((int) ((2578336557289176475LL) + (arr_43 [i_18 - 1] [i_12] [i_18]))));
                arr_77 [i_12] [i_12] = ((/* implicit */short) (~((~(((/* implicit */int) var_6))))));
                var_36 = ((/* implicit */short) (-((-(((/* implicit */int) var_2))))));
            }
            for (int i_24 = 0; i_24 < 23; i_24 += 2) 
            {
                arr_81 [i_12] [4ULL] [i_24] [i_24] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54976))) - (arr_38 [i_18 - 1]))), (((arr_38 [i_18 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_12] [(unsigned char)20] [i_24] [i_12 - 1] [4LL] [i_24])))))));
                /* LoopNest 2 */
                for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (2352352489U))))))) ? (((/* implicit */int) arr_53 [i_26])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) arr_53 [i_26])) ? (((/* implicit */unsigned long long int) var_7)) : (17691928670811770995ULL)))))))))));
                            var_38 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))))), (((unsigned long long int) arr_73 [i_18 + 3] [i_18 + 3] [i_24] [i_12] [i_25 - 1] [i_18 + 3]))));
                        }
                    } 
                } 
            }
            arr_86 [i_12 - 2] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_12 - 1] [i_18 + 1])) && (((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) var_6)) ? (2492852117U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
        }
    }
    for (long long int i_27 = 1; i_27 < 20; i_27 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_28 = 0; i_28 < 21; i_28 += 1) 
        {
            for (unsigned char i_29 = 0; i_29 < 21; i_29 += 2) 
            {
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (max((max((var_11), (((/* implicit */long long int) 3565799338U)))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10560)))))))));
                    var_40 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)69)), (0ULL)))) && (((/* implicit */_Bool) min((((/* implicit */short) arr_47 [2U] [i_28] [i_29] [4LL] [i_27 + 1])), (var_13)))))));
                    var_41 -= ((/* implicit */long long int) min((((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)17200)))) && ((!(((/* implicit */_Bool) arr_42 [i_27]))))))), (var_2)));
                    var_42 ^= ((/* implicit */unsigned int) arr_85 [i_28] [i_28] [10LL] [i_29] [i_28] [16U] [i_29]);
                }
            } 
        } 
        var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (_Bool)1))));
        arr_95 [i_27] = ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_42 [i_27 + 1])), (arr_37 [i_27 + 1])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            arr_98 [i_27 - 1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))));
            var_44 -= ((/* implicit */_Bool) ((long long int) ((unsigned char) (unsigned char)59)));
            var_45 = ((/* implicit */unsigned short) (-(2492852117U)));
            arr_99 [(unsigned short)3] = ((/* implicit */_Bool) ((short) var_12));
        }
        for (int i_31 = 0; i_31 < 21; i_31 += 1) 
        {
            var_46 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_67 [i_27] [i_27] [i_31] [(unsigned short)3]))))));
            /* LoopNest 2 */
            for (unsigned char i_32 = 0; i_32 < 21; i_32 += 2) 
            {
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                {
                    {
                        arr_107 [i_31] [i_31] [6] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_13)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && ((!(((/* implicit */_Bool) var_0))))))) : (((int) (!(((/* implicit */_Bool) var_5)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_34 = 0; i_34 < 21; i_34 += 1) 
                        {
                            arr_111 [i_32] [i_32] [i_32] [i_32] [i_31] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_80 [i_27] [i_27] [0] [i_27])))) ? (((var_4) & (((/* implicit */unsigned long long int) arr_42 [20U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65035)))))));
                            arr_112 [(short)14] [(short)4] [i_31] [i_33] [i_34] [12U] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) min((var_13), ((short)15279)))))), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)10569))))));
                        }
                        for (short i_35 = 0; i_35 < 21; i_35 += 2) /* same iter space */
                        {
                            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) max((((/* implicit */long long int) min((min((var_1), (((/* implicit */unsigned int) (short)27860)))), (arr_61 [i_35] [(_Bool)1] [i_31] [i_27 + 1])))), (((((/* implicit */long long int) ((/* implicit */int) var_3))) & (((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_35] [i_35]))))))))))));
                            var_48 = min(((!(((/* implicit */_Bool) 867652673)))), (((_Bool) var_12)));
                        }
                        for (short i_36 = 0; i_36 < 21; i_36 += 2) /* same iter space */
                        {
                            var_49 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((var_5), (var_8)))))))) >= (var_1));
                            arr_117 [i_36] [i_31] [18LL] [i_31] [(unsigned short)20] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), ((unsigned short)10552)))) ? (((/* implicit */long long int) ((unsigned int) var_11))) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            arr_118 [i_27] [i_31] [16ULL] [i_33] [(short)11] [i_31] = ((/* implicit */long long int) (+(min((arr_90 [i_27 + 1] [i_33] [i_36]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), (var_8))))))));
                            arr_119 [i_36] [i_32] [i_27 - 1] [i_31] [i_36] [i_31] = ((/* implicit */long long int) max((((/* implicit */int) (short)30594)), ((~(arr_116 [i_27] [i_31] [(short)7] [i_27] [i_27 + 1] [i_27 + 1])))));
                        }
                    }
                } 
            } 
            var_50 = max(((+(((/* implicit */int) var_8)))), (((((/* implicit */int) arr_101 [(unsigned char)7] [i_27 + 1] [i_31])) + (((/* implicit */int) (unsigned char)28)))));
            var_51 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_114 [i_27 - 1] [i_31] [i_27 - 1] [i_31] [i_27 - 1] [9U])))))));
            var_52 = ((/* implicit */int) var_8);
        }
        for (unsigned long long int i_37 = 1; i_37 < 19; i_37 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_38 = 0; i_38 < 21; i_38 += 2) 
            {
                arr_124 [i_27 + 1] [i_27 + 1] = ((/* implicit */short) var_1);
                arr_125 [i_37 + 2] [i_27] &= ((/* implicit */short) var_7);
                arr_126 [16LL] [18U] [i_37 - 1] [i_38] = var_11;
                var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) max((((/* implicit */int) max((arr_48 [4] [i_37] [i_38] [i_38]), (arr_48 [i_27] [i_27] [i_37 + 2] [i_38])))), (((((/* implicit */int) arr_109 [i_38] [i_37])) * (arr_62 [i_27 - 1] [i_27 - 1] [i_38]))))))));
            }
            arr_127 [i_27] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */long long int) var_12)), (arr_92 [i_27 + 1] [i_27 + 1] [18U]))))) && (((/* implicit */_Bool) var_12))));
        }
        for (unsigned char i_39 = 1; i_39 < 20; i_39 += 2) 
        {
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (~(((unsigned int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))))))));
            /* LoopNest 2 */
            for (unsigned char i_40 = 0; i_40 < 21; i_40 += 2) 
            {
                for (int i_41 = 0; i_41 < 21; i_41 += 2) 
                {
                    {
                        var_55 = ((/* implicit */int) (+(min((((/* implicit */long long int) var_7)), (arr_58 [i_27] [i_27 + 1] [i_40])))));
                        arr_137 [i_27] [18LL] = var_3;
                    }
                } 
            } 
            var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) ((arr_122 [(_Bool)1] [i_27] [(_Bool)1] [i_39]) / (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)16476)) * (((/* implicit */int) var_9))))))))))));
        }
        arr_138 [i_27] = ((/* implicit */short) 15449488829173283507ULL);
    }
    for (short i_42 = 0; i_42 < 15; i_42 += 2) 
    {
        arr_142 [(signed char)9] = ((/* implicit */int) max((((/* implicit */short) arr_41 [i_42] [i_42])), (var_5)));
        arr_143 [i_42] [i_42] = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
        var_57 = ((/* implicit */long long int) var_4);
        arr_144 [i_42] [i_42] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (signed char)121)), ((short)21230)))) <= (((/* implicit */int) (unsigned short)24243))));
        var_58 &= ((/* implicit */short) min(((-(((/* implicit */int) arr_131 [i_42] [i_42] [i_42] [i_42])))), (((/* implicit */int) ((unsigned short) arr_131 [i_42] [i_42] [9] [i_42])))));
    }
}
