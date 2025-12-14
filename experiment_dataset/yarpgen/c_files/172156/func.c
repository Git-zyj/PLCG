/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172156
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_3 [i_0 - 1]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            var_15 = (+(((((/* implicit */_Bool) 2493926831U)) ? (8890586178502192606LL) : (((/* implicit */long long int) 0U)))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_3 = 3; i_3 < 9; i_3 += 4) 
                {
                    var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43881))))) ? (((long long int) 1695895933U)) : ((~(var_3))));
                    var_17 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 2] [i_0]);
                }
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned short) var_8);
                    var_19 &= -5489439682697827695LL;
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) ((var_3) - (3165568436783088944LL)))) ? (arr_9 [i_0 + 1] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 1] [i_2 - 1] [i_2]))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_6 [i_2 - 1] [5U] [i_1 + 2] [i_0 - 2]) : (((/* implicit */long long int) 4206803056U)))))));
                    var_22 = ((/* implicit */long long int) arr_18 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_6))))) >= ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned int) arr_20 [i_0 + 2] [i_1 + 1] [i_0 + 2] [i_2] [i_6 + 4] [i_6] [i_6]);
                        var_25 = ((long long int) arr_18 [i_2] [(unsigned short)10] [i_2 + 1] [i_2 + 1] [i_1 + 1] [i_0 - 1]);
                    }
                }
                var_26 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_0 [i_0])))) ^ (((/* implicit */int) ((unsigned short) -3165568436783088927LL)))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0 + 2] [i_1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6312642182125318528LL)));
                    var_28 = ((/* implicit */long long int) 4206803065U);
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 1] [i_2] [i_2 - 1] [i_2] [i_2 - 1])) ? (((-3165568436783088944LL) ^ (arr_11 [i_0] [i_0] [i_0] [i_8]))) : (((/* implicit */long long int) 2688402528U))));
                    var_31 = arr_2 [i_2 + 1] [i_8];
                }
                for (unsigned short i_9 = 4; i_9 < 10; i_9 += 1) 
                {
                    var_32 = 5882221850675043195LL;
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_33 &= -5882221850675043175LL;
                        var_34 = ((/* implicit */unsigned short) 13LL);
                    }
                    for (long long int i_11 = 3; i_11 < 7; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_11] [i_9 + 1])) ? (arr_35 [i_11] [6LL] [6LL] [i_2 + 1] [i_1] [6LL]) : (((/* implicit */long long int) 609916142U)))) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (41839)))));
                        var_36 = 5882221850675043167LL;
                    }
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        var_37 |= ((long long int) var_12);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_2])) ? (arr_31 [i_1 + 2] [i_1] [i_1 + 3] [i_1] [i_1 + 1] [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 1])))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_34 [i_12] [2U] [i_9 - 1] [i_1 + 1] [i_12] [i_1])) ? (((/* implicit */long long int) (-(var_2)))) : ((~(-4134969268290150732LL)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_13 = 2; i_13 < 10; i_13 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) 4134969268290150731LL))));
                        var_41 = ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)59224)) : (((/* implicit */int) var_9))));
                        var_42 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_0] [i_1 + 4] [i_2] [i_13 + 1]))));
                        var_43 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (88164239U))));
                        var_44 = (~(((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_9] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_12))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned short) ((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                        var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(2225600416U))))));
                        var_47 = ((/* implicit */long long int) ((unsigned short) arr_28 [7LL] [i_1 - 1] [7LL] [i_1 + 2] [i_2]));
                    }
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_38 [i_0] [i_1 - 1] [i_2] [i_9 - 1] [i_15]))));
                        var_49 += ((/* implicit */unsigned int) ((arr_40 [i_0] [i_0 - 2] [i_0 - 2] [i_9 + 1]) << (((3165568436783088944LL) - (3165568436783088944LL)))));
                        var_50 = (~(var_3));
                    }
                    var_51 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30859))) + (-525154643394456585LL));
                }
            }
        }
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            var_52 |= ((/* implicit */long long int) (((~(2634755083U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53250)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15682))) - (2249600790429696LL)));
                /* LoopSeq 2 */
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) /* same iter space */
                {
                    var_54 = ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_16] [i_17] [7LL]))) + (((((/* implicit */_Bool) (unsigned short)12704)) ? (((/* implicit */long long int) 88164240U)) : (615120903296813740LL))));
                    var_55 = ((unsigned short) arr_30 [i_0 - 2]);
                }
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
                {
                    var_56 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                    var_57 = ((/* implicit */unsigned short) ((unsigned int) arr_11 [i_19] [i_17] [i_16] [i_0]));
                    var_58 = ((/* implicit */long long int) min((var_58), (((3165568436783088944LL) - (arr_40 [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                    var_59 = ((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_16] [5U] [i_19]);
                }
                var_60 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned short)8316)) & (((/* implicit */int) arr_38 [i_0] [(unsigned short)1] [i_17] [(unsigned short)1] [i_0])))));
            }
            for (long long int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_61 = ((/* implicit */long long int) ((unsigned short) -6902947448218092431LL));
                var_62 = min((((((var_10) % (-7808274020782144166LL))) - (((long long int) -5882221850675043192LL)))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 125829120LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20962))))), (((/* implicit */unsigned int) ((unsigned short) 16LL)))))));
                var_63 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 + 2] [i_0] [i_20])) ? (((long long int) -4134969268290150730LL)) : (arr_11 [i_0] [i_0 - 2] [i_0] [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_21 = 4; i_21 < 10; i_21 += 3) 
                {
                    var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_0 + 2] [i_16] [i_16] [i_21 - 4] [i_0 - 2] [i_16] [i_20])) && (((/* implicit */_Bool) (+(7520588631924398631LL))))));
                    var_65 = ((long long int) (~(((/* implicit */int) (unsigned short)12574))));
                    var_66 = ((/* implicit */unsigned short) ((((/* implicit */int) min((var_5), (((unsigned short) arr_47 [i_0] [i_21] [i_20] [i_20] [i_21 - 3]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_21 - 4] [i_21 - 2] [i_20] [i_16] [i_0])))))));
                }
                for (long long int i_22 = 1; i_22 < 10; i_22 += 4) 
                {
                    var_67 &= ((/* implicit */unsigned int) ((min((min((((/* implicit */long long int) 2395257163U)), (-5122518543238015465LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2047))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5882221850675043199LL)))))) < (((unsigned int) -15LL))))))));
                    var_68 = (-(min((-17LL), (arr_58 [i_0 - 2] [i_16] [i_22 + 1] [i_20] [5LL] [i_22]))));
                    var_69 = max((125829146LL), (((arr_11 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_0 + 1]) << (((var_10) - (8726197968377786254LL))))));
                    var_70 = ((/* implicit */long long int) arr_7 [i_22 - 1] [i_16] [i_0 - 3]);
                }
            }
            /* LoopSeq 3 */
            for (unsigned short i_23 = 4; i_23 < 8; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
                {
                    for (long long int i_25 = 0; i_25 < 11; i_25 += 1) 
                    {
                        {
                            var_71 = ((/* implicit */long long int) max((var_71), (((((/* implicit */_Bool) 3207927276056009885LL)) ? (((/* implicit */long long int) ((((unsigned int) var_5)) >> (((max((5882221850675043195LL), (arr_67 [i_0] [i_16] [i_23] [i_24] [i_16] [i_25]))) - (7234639232553607452LL)))))) : (((((/* implicit */_Bool) -3207927276056009878LL)) ? (((/* implicit */long long int) 191026084U)) : (-6191712269294745724LL)))))));
                            var_72 = max((min((var_7), (min((var_10), (-125829124LL))))), (((long long int) min((2300217043296379829LL), (((/* implicit */long long int) var_11))))));
                            var_73 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (-3207927276056009864LL) : (((/* implicit */long long int) var_0))));
                            var_74 = (-9223372036854775807LL - 1LL);
                        }
                    } 
                } 
                var_75 = ((((/* implicit */_Bool) ((unsigned short) (-(-2300217043296379829LL))))) ? ((-(((((/* implicit */_Bool) arr_46 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_16] [i_23 + 1] [i_0] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20424))) : (arr_43 [i_0] [i_16] [i_16] [i_23] [i_23]))))) : (max((14LL), (-6625222619066517710LL))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 1; i_26 < 10; i_26 += 1) 
                {
                    for (unsigned int i_27 = 2; i_27 < 7; i_27 += 1) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_41 [i_0 - 3] [i_16] [i_0 - 2] [i_0 - 3])))) ? (max((-2300217043296379855LL), (((long long int) var_1)))) : (((5882221850675043183LL) | (((/* implicit */long long int) ((var_2) & (var_4))))))));
                            var_77 = ((/* implicit */unsigned int) 9223372036854775807LL);
                            var_78 &= arr_82 [i_27 - 1] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3];
                        }
                    } 
                } 
                var_79 = ((/* implicit */long long int) min((var_79), (arr_19 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8])));
            }
            for (long long int i_28 = 0; i_28 < 11; i_28 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_29 = 4; i_29 < 8; i_29 += 2) 
                {
                    for (unsigned int i_30 = 1; i_30 < 9; i_30 += 1) 
                    {
                        {
                            var_80 = ((/* implicit */long long int) ((arr_29 [i_0 - 1] [i_28] [i_30 + 1] [4U]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                            var_81 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((unsigned int) 4244709414U))), (max((((/* implicit */long long int) var_1)), (arr_44 [i_0] [i_0] [i_0] [i_29 + 2] [i_16] [i_28] [i_16])))))));
                        }
                    } 
                } 
                var_82 = ((/* implicit */unsigned int) ((unsigned short) arr_61 [i_0 - 2] [i_0 + 2]));
            }
            for (long long int i_31 = 0; i_31 < 11; i_31 += 4) 
            {
                var_83 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */long long int) var_1)) >= (var_7))))), ((+((+(3625028906U)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_32 = 0; i_32 < 11; i_32 += 3) /* same iter space */
                {
                    var_84 = ((/* implicit */unsigned int) max((var_84), (((/* implicit */unsigned int) -3207927276056009879LL))));
                    var_85 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_0 - 3] [i_0] [i_0 - 2] [i_0])) ? (((arr_1 [i_31]) << (((((/* implicit */int) var_5)) - (48731))))) : (((/* implicit */long long int) (+(var_4))))));
                    var_86 -= ((/* implicit */unsigned int) -2253131917068704551LL);
                }
                for (long long int i_33 = 0; i_33 < 11; i_33 += 3) /* same iter space */
                {
                    var_87 = ((/* implicit */unsigned int) max((var_87), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_100 [i_0] [i_0] [i_0] [i_31] [3LL] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (7097374295728346385LL))) + (((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */long long int) var_2)) : (6191712269294745724LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_97 [i_0] [i_16] [i_31])), (var_7)))) || (((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) ((max((var_8), (((/* implicit */long long int) var_2)))) >= ((~(var_10)))))))))));
                    var_88 = ((max((var_3), (((/* implicit */long long int) 2091377711U)))) ^ (((((/* implicit */_Bool) (-(-6723705471394663648LL)))) ? (((/* implicit */long long int) var_1)) : (min((0LL), (((/* implicit */long long int) (unsigned short)65535)))))));
                }
                /* vectorizable */
                for (long long int i_34 = 0; i_34 < 11; i_34 += 3) /* same iter space */
                {
                    var_89 = ((/* implicit */long long int) arr_102 [i_0] [i_0] [i_0 - 2] [i_0]);
                    var_90 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
                    var_91 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((long long int) (unsigned short)20955)) : (((/* implicit */long long int) (+(4294967295U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_35 = 1; i_35 < 9; i_35 += 1) 
                    {
                        var_92 = var_9;
                        var_93 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) -8919163855722646500LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_103 [i_35 + 1]))) : (((long long int) var_1))));
                    }
                    for (long long int i_36 = 2; i_36 < 9; i_36 += 4) 
                    {
                        var_94 = ((((/* implicit */_Bool) var_11)) ? (arr_35 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_36 - 2]) : (((/* implicit */long long int) 2421151520U)));
                        var_95 = (~(arr_10 [i_0] [i_16] [i_31] [i_34] [i_36 + 1] [i_0 - 2]));
                    }
                }
                for (long long int i_37 = 0; i_37 < 11; i_37 += 3) /* same iter space */
                {
                    var_96 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)44581))))) < (33554431LL)));
                    var_97 -= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) 2715700386U)))));
                    var_98 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)50429)), (arr_9 [i_0] [i_16] [i_16] [i_31] [i_37])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_37] [i_31] [i_16] [i_0]))) : (var_1));
                }
                var_99 = max((((/* implicit */long long int) (unsigned short)20955)), (-8327249450349378494LL));
                var_100 = ((/* implicit */unsigned int) ((((((arr_41 [i_31] [i_16] [0U] [i_0 - 1]) + (9223372036854775807LL))) << (((((((/* implicit */int) (unsigned short)44581)) & (((/* implicit */int) (unsigned short)35075)))) - (34817))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_66 [i_0])) ? (((/* implicit */int) arr_86 [i_0] [i_0 + 1] [i_31] [i_0 + 2])) : (((/* implicit */int) var_5)))))));
            }
        }
        /* vectorizable */
        for (long long int i_38 = 0; i_38 < 11; i_38 += 1) 
        {
            var_101 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)42144)) >> (((((/* implicit */int) var_9)) - (41837))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1654349104331990771LL)) || (((/* implicit */_Bool) var_3)))))));
            var_102 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44581)) ? (var_1) : (arr_54 [i_0] [6U] [i_0] [i_38]))))));
            var_103 = ((/* implicit */long long int) (~(((/* implicit */int) arr_109 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [6LL]))));
            var_104 ^= var_6;
            var_105 = -7254152491471970745LL;
        }
        for (long long int i_39 = 0; i_39 < 11; i_39 += 3) 
        {
            var_106 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50429))));
            var_107 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0 - 1] [i_0 - 2] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_69 [i_0 + 2]))))), ((~(arr_36 [i_0 + 2] [i_0 - 3] [i_0] [i_0])))));
            var_108 = ((unsigned int) ((long long int) arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0]));
        }
        var_109 = ((/* implicit */unsigned int) max((var_109), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_105 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 3])) ? (2278865208783222770LL) : ((-(arr_105 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0]))))) + (((/* implicit */long long int) ((unsigned int) min(((unsigned short)44581), ((unsigned short)6767))))))))));
        var_110 = ((/* implicit */unsigned short) ((-1085718733113456556LL) - (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    }
    var_111 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4134969268290150750LL)) ? (min((((/* implicit */long long int) (unsigned short)30456)), (((long long int) var_3)))) : (max((((((/* implicit */_Bool) 0U)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (min((var_12), (((/* implicit */long long int) var_6))))))));
}
