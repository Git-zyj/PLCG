/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174516
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
    var_11 = ((/* implicit */long long int) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [i_0])));
        var_13 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_8));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 4; i_2 < 8; i_2 += 4) 
        {
            var_14 = ((/* implicit */long long int) ((max((6197607560621358380LL), (3918207853835150104LL))) == (arr_9 [i_1 + 1])));
            var_15 += ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 3918207853835150118LL)) || (((/* implicit */_Bool) (unsigned char)254))))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_14 [i_1] = ((/* implicit */unsigned char) (-(max((var_4), (var_3)))));
            arr_15 [i_3] |= max((arr_6 [i_1 - 2]), ((-(var_8))));
            arr_16 [i_1] = ((/* implicit */unsigned char) min((min((((((var_5) + (9223372036854775807LL))) >> (((var_8) - (4503306744659873679LL))))), (((/* implicit */long long int) arr_12 [i_1 + 1] [i_1 - 2])))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8)))));
            arr_17 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (var_4)))) ? (min((arr_13 [i_1]), (arr_1 [i_3]))) : (var_4)))));
        }
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 8; i_4 += 2) 
        {
            var_16 = arr_13 [i_1];
            arr_21 [i_1] = ((((/* implicit */_Bool) -3918207853835150105LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (-2470003528615553940LL));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_17 |= ((/* implicit */unsigned char) (-((-(var_0)))));
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
                {
                    var_18 = var_9;
                    var_19 += ((/* implicit */long long int) var_6);
                    /* LoopSeq 3 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        arr_30 [i_1] [i_4] [i_1] [i_6] [i_7] = (-(arr_22 [i_4] [i_4] [i_1]));
                        var_20 |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)93))));
                        arr_31 [i_1] [i_4 - 1] [i_5] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_1] [(unsigned char)10] [i_1 - 2] [i_4 + 3])) | (((/* implicit */int) arr_27 [i_1] [i_1 - 2] [i_1 - 1] [i_4 - 1]))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                        var_22 = var_4;
                        var_23 |= arr_12 [i_1] [10LL];
                    }
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        arr_36 [i_1] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)2)) ? (6370057649508385694LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
                        arr_37 [i_1] [i_1] = ((((/* implicit */_Bool) -802426935731723851LL)) ? (-8879405427779238646LL) : (1048575LL));
                        var_24 = ((((((/* implicit */_Bool) var_0)) ? (var_4) : (var_7))) & (((long long int) var_9)));
                    }
                }
            }
            var_25 = var_0;
        }
        var_26 = (~((~(-9223372036854775791LL))));
        var_27 = ((/* implicit */long long int) max((var_27), ((+(((((/* implicit */_Bool) -5746095886993649752LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_11 = 2; i_11 < 10; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 1; i_12 < 11; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_13 = 1; i_13 < 9; i_13 += 2) 
                {
                    var_28 = ((/* implicit */unsigned char) (+(arr_39 [i_12])));
                    arr_46 [i_13] [i_12] [i_12] [i_10] = ((/* implicit */long long int) arr_43 [i_11 + 1] [i_13 + 3] [i_12 + 1]);
                }
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_11] [i_11 + 2])) ? (arr_45 [i_12 - 1] [i_12] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_30 = ((((/* implicit */_Bool) arr_43 [i_11 + 2] [i_11 - 1] [i_11])) ? (arr_42 [i_11 - 1] [i_11] [i_11]) : (var_5));
            }
            /* LoopSeq 1 */
            for (long long int i_14 = 2; i_14 < 9; i_14 += 2) 
            {
                arr_49 [i_14] [i_11 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_11] [i_11 - 1] [i_14 + 1])) || (((/* implicit */_Bool) var_2))));
                arr_50 [i_14] [i_11] [i_10] = ((((/* implicit */_Bool) arr_44 [i_10] [i_11] [i_14] [i_11 - 2] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [(unsigned char)1] [i_11] [3LL] [i_11 - 2] [i_10] [9LL]))) : (var_5));
            }
            arr_51 [i_10] [i_11] [8LL] = ((/* implicit */unsigned char) var_7);
            var_31 = ((/* implicit */unsigned char) (~(var_3)));
        }
        for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
        {
            var_32 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) -7750947467856619166LL))));
            arr_54 [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)110))));
            var_33 = ((/* implicit */unsigned char) ((arr_38 [(unsigned char)4]) / (((((/* implicit */_Bool) var_5)) ? (arr_1 [(unsigned char)13]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
            var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)98))));
        }
        for (long long int i_16 = 0; i_16 < 12; i_16 += 3) 
        {
            var_35 = ((/* implicit */long long int) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_10])) ? (((((/* implicit */_Bool) arr_57 [i_17] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_10] [i_16] [i_17])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) < (7149850922765029120LL))))));
                var_37 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_58 [i_17] [11LL] [i_10] [i_10])) : (((/* implicit */int) var_10)))) + (((/* implicit */int) arr_44 [i_10] [(unsigned char)3] [i_16] [i_16] [i_16] [i_17]))));
                var_38 = ((arr_1 [i_17]) | (((long long int) arr_1 [i_10])));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            var_39 |= ((/* implicit */unsigned char) var_4);
            var_40 = ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_10] [i_10] [i_10]))) & (arr_45 [i_10] [i_10] [i_10]));
        }
    }
    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_22 = 0; i_22 < 12; i_22 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 12; i_23 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_23] [i_20] [i_19])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_76 [i_19] [i_19] [i_19] [i_19] [i_19] [i_23]))))) ? (((var_3) >> (((arr_56 [i_19]) - (7501962162537702395LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_6))))))));
                        var_43 = ((((/* implicit */_Bool) var_3)) ? (((long long int) arr_39 [i_19])) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_19] [i_19] [i_19]))));
                        var_44 = ((/* implicit */long long int) var_10);
                        arr_78 [i_19] [i_22] [i_21] [i_20] [i_23] [i_20] = ((/* implicit */unsigned char) arr_45 [i_23] [i_22] [i_20]);
                        var_45 = (i_19 % 2 == zero) ? (((/* implicit */unsigned char) ((((((arr_42 [4LL] [i_19] [9LL]) + (9223372036854775807LL))) >> (((var_7) - (8685065663437130666LL))))) << (((((arr_39 [i_20]) + (1831048342315712091LL))) - (20LL)))))) : (((/* implicit */unsigned char) ((((((((arr_42 [4LL] [i_19] [9LL]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_7) - (8685065663437130666LL))))) << (((((arr_39 [i_20]) + (1831048342315712091LL))) - (20LL))))));
                    }
                    for (long long int i_24 = 0; i_24 < 12; i_24 += 2) /* same iter space */
                    {
                        var_46 = arr_44 [i_24] [i_22] [i_22] [i_21] [i_20] [(unsigned char)11];
                        var_47 = ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_0));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 4; i_25 < 9; i_25 += 3) /* same iter space */
                    {
                        arr_85 [(unsigned char)3] [i_20] [i_20] [i_19] [i_20] = var_0;
                        var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_3))))));
                        var_49 += ((/* implicit */unsigned char) ((long long int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_20] [i_21] [i_21]))))));
                        arr_86 [5LL] [i_20] [i_21] [i_22] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (5746095886993649732LL) : ((+(-2617280945430570850LL)))));
                    }
                    for (unsigned char i_26 = 4; i_26 < 9; i_26 += 3) /* same iter space */
                    {
                        var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3030058047086678132LL))));
                        arr_89 [2LL] [i_20] [i_21] [i_22] [i_19] [i_26] = ((/* implicit */unsigned char) (~(arr_80 [i_19] [i_20] [i_21] [i_22] [i_19])));
                        var_51 -= ((/* implicit */unsigned char) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                        arr_90 [i_19] = ((/* implicit */unsigned char) (~(arr_80 [i_26 - 3] [i_26 - 3] [i_26 - 3] [i_26 - 3] [i_19])));
                        var_52 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_77 [i_26 - 4] [i_26 + 3] [i_26 - 3] [10LL] [i_26 - 3] [i_19]))));
                    }
                    for (unsigned char i_27 = 4; i_27 < 9; i_27 += 3) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_68 [i_19])) | (((/* implicit */int) arr_68 [i_19]))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (var_5)));
                        arr_93 [i_19] [i_20] [i_20] [i_20] [i_20] = ((long long int) (unsigned char)82);
                    }
                }
                for (long long int i_28 = 0; i_28 < 12; i_28 += 3) /* same iter space */
                {
                    var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_94 [i_28] [3LL] [3LL] [i_19])) || (((/* implicit */_Bool) var_9))));
                    var_56 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_39 [i_28]))))));
                }
                for (long long int i_29 = 0; i_29 < 12; i_29 += 3) /* same iter space */
                {
                    var_57 = var_0;
                    var_58 = arr_65 [i_20] [i_19];
                    var_59 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [4LL] [i_20] [i_20] [i_20])) ? (var_8) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_67 [(unsigned char)8] [(unsigned char)8])))));
                }
                arr_99 [(unsigned char)5] [i_19] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                /* LoopSeq 2 */
                for (unsigned char i_30 = 0; i_30 < 12; i_30 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_31 = 0; i_31 < 12; i_31 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_101 [i_19] [3LL] [i_20] [i_19]) : (var_3)));
                        var_61 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_61 [i_20]))));
                    }
                    var_62 = ((/* implicit */unsigned char) (~(arr_100 [i_19] [i_20] [i_19] [i_30])));
                    arr_105 [i_19] = var_8;
                    arr_106 [(unsigned char)4] [8LL] [i_19] [i_30] = (~(arr_42 [i_19] [i_19] [i_19]));
                }
                for (unsigned char i_32 = 1; i_32 < 11; i_32 += 4) 
                {
                    arr_111 [i_19] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) != (((/* implicit */int) arr_71 [i_32 + 1]))));
                    var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_75 [i_19] [i_21] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_94 [i_32 - 1] [i_32 + 1] [i_32 + 1] [i_32 + 1]))) : (arr_60 [i_32 + 1] [i_32 + 1] [i_32 - 1] [i_32 - 1])));
                }
                var_64 = ((/* implicit */long long int) min((var_64), (((((/* implicit */_Bool) 3918207853835150096LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125))) : (-1LL)))));
            }
            for (unsigned char i_33 = 0; i_33 < 12; i_33 += 3) 
            {
                var_65 = ((/* implicit */unsigned char) (-(arr_70 [i_19] [i_20] [i_33] [i_33])));
                arr_115 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_110 [i_20] [i_19])) ? (((/* implicit */int) arr_68 [i_19])) : (((/* implicit */int) var_2))));
                var_66 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)93)) + (((/* implicit */int) (unsigned char)152))));
            }
            arr_116 [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) arr_69 [i_19] [i_20] [6LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_9))));
            var_67 = ((long long int) arr_91 [i_20] [i_20] [i_20] [i_19] [i_19]);
        }
    }
    var_68 |= ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_69 = ((/* implicit */long long int) ((var_4) <= (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)110)))))))));
}
