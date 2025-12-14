/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154227
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
            arr_7 [(signed char)14] [(short)19] [i_0] = ((/* implicit */unsigned long long int) -9223372036854775804LL);
            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) 14192242868859929922ULL))));
            var_13 &= ((/* implicit */long long int) 14192242868859929922ULL);
        }
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_2 + 2])), (var_6)))), (min((((/* implicit */long long int) arr_8 [i_2 + 2])), (max((arr_14 [i_2] [i_3] [i_5]), (-9223372036854775791LL)))))));
                            arr_19 [i_0] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_2)), (max((-6451022411586954580LL), (((/* implicit */long long int) 4294967295U)))))), (max((((/* implicit */long long int) (unsigned short)0)), (-6451022411586954597LL)))));
                            var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((-9103096745372051708LL), (((/* implicit */long long int) var_5))))), (max((((/* implicit */unsigned long long int) 9223372036854775800LL)), (arr_10 [i_2 - 1] [i_2 + 4] [i_2 + 3])))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) min((min((((/* implicit */short) var_3)), ((short)-14886))), (((/* implicit */short) (signed char)59))))), (min((9223372036854775787LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)59)), (arr_13 [i_0] [i_0] [i_0] [i_0])))))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (max((min((((/* implicit */long long int) max((arr_11 [i_0] [i_0] [i_0]), (var_5)))), (-9223372036854775787LL))), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_11))))))));
                        var_18 = ((/* implicit */short) max((((/* implicit */long long int) max((max((arr_15 [(short)0] [8U] [i_2 + 1] [i_6] [8U]), (((/* implicit */unsigned int) arr_23 [i_7] [i_6] [i_2 + 4] [i_0] [i_0])))), (((/* implicit */unsigned int) -2147483640))))), (max((6451022411586954580LL), (((/* implicit */long long int) var_11))))));
                        arr_27 [i_0] [i_0] [i_0] [i_0] &= min((((/* implicit */unsigned long long int) max((9223372036854775793LL), (((/* implicit */long long int) arr_23 [(_Bool)1] [i_2 + 2] [i_6] [(_Bool)1] [i_7]))))), (min((((/* implicit */unsigned long long int) var_8)), (min((18446744073709551596ULL), (arr_10 [i_0] [i_7] [i_6]))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */short) max((min((3706940978U), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) max(((unsigned short)60124), (((/* implicit */unsigned short) var_3)))))));
        }
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (_Bool)1)), (-9223372036854775787LL))), (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_28 [i_8]))))))), (max((((/* implicit */unsigned long long int) var_9)), (max((8796093022207ULL), (((/* implicit */unsigned long long int) arr_33 [4ULL] [i_8]))))))));
                var_21 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_28 [i_8])), (8796093022183ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_0] [i_8] [i_0])), (arr_28 [i_8]))))));
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_11 = 3; i_11 < 17; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (min((((/* implicit */long long int) max(((short)-17685), (((/* implicit */short) (signed char)24))))), (max((((/* implicit */long long int) (short)32767)), (arr_2 [i_0])))))));
                        arr_40 [i_0] [19ULL] [i_8] [i_9] [i_9] [i_8] [i_11] = ((/* implicit */int) min((max((-6451022411586954592LL), (((/* implicit */long long int) max((((/* implicit */short) var_7)), (var_8)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (1174803855U))))));
                        var_23 = ((/* implicit */int) min((1174803855U), (((/* implicit */unsigned int) (unsigned short)52233))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) (_Bool)1)), ((short)14886))), (min((((/* implicit */short) var_3)), (var_11)))));
                    var_25 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_2)), (arr_2 [i_0]))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)113)), ((short)32744))))));
                    arr_41 [(short)8] [i_8] [(short)8] [i_8] = ((/* implicit */short) max((max((2542546741769900905LL), (((/* implicit */long long int) (short)-24389)))), (min((3482958804361756286LL), (((/* implicit */long long int) var_6))))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    var_26 &= (unsigned short)65515;
                    arr_45 [i_8] [i_8] [10] [i_12] = ((/* implicit */_Bool) (short)32743);
                    arr_46 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */long long int) (unsigned short)25501);
                    var_27 = ((/* implicit */unsigned long long int) 2147483647U);
                    var_28 = ((/* implicit */unsigned int) (short)14886);
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */long long int) (short)9988);
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (unsigned short)15))));
                    var_31 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                }
                for (unsigned short i_14 = 2; i_14 < 19; i_14 += 1) 
                {
                    var_32 &= ((/* implicit */long long int) max((min(((short)-4889), (arr_18 [i_9] [i_14 - 2] [i_14] [i_14] [i_14 + 1]))), (min((arr_30 [i_8] [i_14 - 2] [i_14] [i_14 - 1]), (arr_18 [i_14] [i_14 - 2] [i_14] [(signed char)8] [7ULL])))));
                    var_33 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_4)), (var_2)))), (max((arr_43 [i_14 - 2] [i_14 - 1] [i_14 - 2] [3LL] [i_14 - 1]), (arr_43 [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14] [i_14])))));
                    var_34 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((/* implicit */short) var_3)), (var_11)))), (min((var_0), (((/* implicit */unsigned int) var_7))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_35 = ((/* implicit */int) (unsigned short)25501);
                    arr_55 [i_8] [i_8] [i_16] = 29360128;
                    var_36 = ((/* implicit */signed char) (unsigned char)31);
                    arr_56 [i_8] [i_0] [i_0] [i_8] = ((/* implicit */int) 1982554339U);
                }
                arr_57 [i_8] [i_8] [i_15] = ((/* implicit */unsigned short) 16993400342903225852ULL);
                var_37 = ((/* implicit */short) (unsigned short)4);
                var_38 = ((/* implicit */int) (unsigned short)25501);
            }
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 20; i_18 += 1) 
                {
                    arr_63 [i_0] [i_0] [i_0] [i_17] &= ((/* implicit */unsigned long long int) -6617385172136523032LL);
                    var_39 = ((/* implicit */long long int) (unsigned short)25503);
                }
                var_40 = ((/* implicit */int) (short)14886);
            }
            /* vectorizable */
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_41 = ((/* implicit */unsigned int) (short)15808);
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_21 = 1; i_21 < 17; i_21 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */int) (short)14876);
                        var_43 = ((/* implicit */unsigned int) (unsigned short)40009);
                    }
                    for (unsigned int i_22 = 1; i_22 < 17; i_22 += 4) /* same iter space */
                    {
                        arr_77 [i_0] [i_8] [i_8] [i_8] [(unsigned short)19] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                        var_44 = ((/* implicit */short) (signed char)40);
                        arr_78 [11ULL] [8ULL] [i_8] [i_22] [i_22] = ((/* implicit */signed char) 1397032386U);
                    }
                    arr_79 [i_20] [i_19] [i_8] [i_8] [i_0] = (_Bool)0;
                    arr_80 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */short) 4143409262948935803LL);
                    var_45 = ((/* implicit */unsigned int) (short)-14886);
                }
                /* LoopSeq 1 */
                for (unsigned int i_23 = 3; i_23 < 18; i_23 += 4) 
                {
                    arr_84 [i_8] [i_8] = (unsigned short)28340;
                    var_46 = ((/* implicit */unsigned int) min((var_46), (15U)));
                }
            }
            var_47 = ((/* implicit */unsigned char) max((max((var_6), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) min((max((arr_51 [i_8]), (((/* implicit */int) (_Bool)1)))), (max((((/* implicit */int) var_4)), ((-2147483647 - 1)))))))));
        }
        for (short i_24 = 0; i_24 < 20; i_24 += 3) 
        {
            var_48 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) 1982554339U)), (1533546486156429326LL))), (-4143409262948935806LL)));
            var_49 = ((/* implicit */unsigned short) max((((/* implicit */int) min((arr_61 [i_24]), (((/* implicit */unsigned short) var_1))))), (min((((/* implicit */int) min((var_8), (var_8)))), (2147483647)))));
        }
        arr_87 [i_0] [i_0] = max((((/* implicit */long long int) max(((unsigned short)40028), (((/* implicit */unsigned short) var_1))))), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_8)))));
    }
    var_50 = min((max((((/* implicit */unsigned int) max((1873776513), (((/* implicit */int) var_2))))), (var_6))), (((/* implicit */unsigned int) var_11)));
    var_51 = ((/* implicit */unsigned long long int) max((max((max((((/* implicit */unsigned int) 2147483647)), (var_9))), (max((var_9), (((/* implicit */unsigned int) var_8)))))), (((/* implicit */unsigned int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 12; i_25 += 3) 
    {
        for (int i_26 = 0; i_26 < 12; i_26 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) /* same iter space */
                {
                    var_52 = ((/* implicit */int) min((((/* implicit */unsigned int) min((arr_49 [i_27] [i_27] [i_26] [i_25]), ((_Bool)1)))), (max((var_0), (((/* implicit */unsigned int) arr_28 [i_26]))))));
                    var_53 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_58 [i_27] [16ULL] [i_27] [i_26]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (1533546486156429326LL))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_28 = 3; i_28 < 9; i_28 += 4) 
                    {
                        arr_97 [i_28] [i_27] [i_27] [i_25] [i_26] [i_25] = (short)7411;
                        var_54 = (unsigned short)25527;
                        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_29 = 1; i_29 < 8; i_29 += 2) 
                        {
                            var_56 = (short)-7412;
                            arr_100 [i_25] [i_26] [i_27] [(unsigned char)10] [i_29] = ((/* implicit */unsigned char) (unsigned short)25530);
                        }
                        for (unsigned long long int i_30 = 1; i_30 < 11; i_30 += 4) 
                        {
                            arr_105 [i_25] [i_26] [i_27] [i_30] [i_30 + 1] [i_30] = (short)32767;
                            var_57 = ((/* implicit */unsigned int) -982792719);
                            arr_106 [2U] [i_30] [i_30] [i_27] [i_27] = ((/* implicit */_Bool) (short)-26194);
                            arr_107 [i_26] [i_26] &= ((/* implicit */unsigned short) 9223372036854775808ULL);
                            var_58 = ((/* implicit */_Bool) (short)7435);
                        }
                        var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) -2147483647))));
                    }
                    for (long long int i_31 = 2; i_31 < 8; i_31 += 3) 
                    {
                        var_60 = ((/* implicit */unsigned int) min((max((arr_70 [4LL] [i_27] [i_26] [i_25] [(unsigned short)14]), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)42528)), (36028797018963840LL))))));
                        arr_111 [i_25] [i_27] [i_31] = ((/* implicit */short) min((((/* implicit */long long int) min((536155179), (arr_62 [i_31 + 3] [i_31 + 1] [i_31] [i_31 + 4] [i_31 + 4] [i_31 + 4])))), (max((((/* implicit */long long int) arr_62 [i_31 + 1] [i_31 + 1] [(_Bool)1] [i_31 + 2] [i_31 + 4] [14ULL])), (5379744248723755656LL)))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_32 = 0; i_32 < 12; i_32 += 1) /* same iter space */
                {
                    var_61 &= ((/* implicit */unsigned int) (short)7445);
                    var_62 = ((/* implicit */short) (_Bool)1);
                    var_63 = ((/* implicit */unsigned short) 2147483647);
                }
                /* vectorizable */
                for (short i_33 = 0; i_33 < 12; i_33 += 3) 
                {
                    arr_118 [i_25] [i_33] [i_33] [i_33] = ((/* implicit */short) -536155150);
                    var_64 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                var_65 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (2854455112317833294ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), ((short)-7461))))));
                var_66 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max(((unsigned short)25527), (((/* implicit */unsigned short) arr_36 [i_25] [i_25] [i_26] [i_26] [i_25]))))), (max((min((var_0), (((/* implicit */unsigned int) arr_36 [i_25] [i_25] [i_26] [i_25] [i_25])))), (((/* implicit */unsigned int) arr_35 [i_26] [i_26] [i_26] [i_26]))))));
                var_67 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((arr_64 [i_25] [i_25]), (((/* implicit */int) min((((/* implicit */short) var_7)), ((short)-32750))))))), (max(((-9223372036854775807LL - 1LL)), (min((((/* implicit */long long int) arr_23 [i_26] [i_26] [(unsigned char)19] [i_26] [(short)2])), (6415981501060435749LL)))))));
                arr_119 [i_25] [i_26] [i_26] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_59 [i_25] [i_25] [i_26])), (max((((/* implicit */unsigned char) var_3)), (var_7)))))), (max(((unsigned short)63294), (arr_61 [i_25])))));
            }
        } 
    } 
    var_68 &= ((/* implicit */int) min((max((max((((/* implicit */unsigned int) var_2)), (var_9))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */short) var_4))))))), (((/* implicit */unsigned int) var_3))));
}
