/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16668
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
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((var_9) - (((/* implicit */unsigned long long int) var_11)))) != (((/* implicit */unsigned long long int) var_19)))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(-2244101259842431881LL))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((var_13) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
        var_22 = (~(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)0)))));
        var_23 = ((/* implicit */_Bool) var_13);
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_18))))) ? (((2244101259842431880LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) ^ (var_13)))))))) : (743428400U)));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_19)) > (((unsigned long long int) 14127579795034357040ULL))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [i_1 + 1]) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (var_19)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) (-(var_2)));
                var_28 = ((/* implicit */signed char) var_13);
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) var_11);
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1 - 1] [i_2 - 1] [i_4 + 1] [i_4] [i_4 - 1])) / (arr_6 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_5])))))) : (arr_6 [i_1 + 1] [i_2])));
                    }
                } 
            } 
        }
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_14 [i_1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])));
            var_32 = ((/* implicit */unsigned long long int) var_11);
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_33 = ((/* implicit */long long int) 4194303U);
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) -9223372036854775795LL))));
            var_35 = ((/* implicit */_Bool) 4769000582180995426LL);
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) -2244101259842431881LL)) * (0ULL))), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */_Bool) arr_19 [i_1] [i_1 + 1])) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 5989326463610950721LL)) : (var_13))) : ((~(arr_17 [i_1 + 1]))))) : (((((/* implicit */unsigned long long int) (+(var_15)))) % (arr_5 [i_1] [i_1] [3ULL])))));
        }
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) var_16);
            var_38 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (min((((/* implicit */int) (_Bool)1)), (var_2)))))));
            var_39 |= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (int i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            var_40 -= ((/* implicit */unsigned long long int) arr_24 [i_1 + 1]);
                            arr_35 [i_12] [i_10] [i_11] [i_10] [i_10] [i_1] = ((/* implicit */signed char) var_9);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_41 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (var_16)))) ? (((/* implicit */long long int) ((int) var_5))) : (var_7)));
                            var_42 = ((/* implicit */_Bool) max((var_42), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (6916155146747409087ULL)))));
                            var_43 = ((/* implicit */unsigned char) ((9100182156107740967ULL) >> (((((((/* implicit */_Bool) var_7)) ? (2681475439030041656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) - (2681475439030041606ULL)))));
                            arr_39 [i_13] [i_11] [i_11] [i_10] [i_9] [i_9] [i_1 + 1] = ((/* implicit */unsigned int) (-(2244101259842431853LL)));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 7; i_14 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) > (2681475439030041656ULL))))));
                            var_45 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-76)) ? (var_9) : (var_9))) : (((/* implicit */unsigned long long int) (-(var_11))))));
                        }
                        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (-1130868598827983302LL) : (var_16)))) ? ((+(((/* implicit */int) arr_3 [i_11])))) : (((/* implicit */int) var_10))));
                    }
                    for (unsigned long long int i_15 = 1; i_15 < 7; i_15 += 3) 
                    {
                        var_48 -= min((((/* implicit */unsigned long long int) (~(-8702666847893012208LL)))), (((max((var_9), (((/* implicit */unsigned long long int) arr_14 [i_15 - 1] [i_10 - 1] [8] [i_1] [1ULL] [i_1])))) + (((/* implicit */unsigned long long int) ((unsigned int) arr_29 [i_9] [i_15] [i_10 - 1] [i_9] [i_9]))))));
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1 - 1] [i_9] [i_15] [i_15 - 1])) ? (arr_8 [i_15 + 1] [i_15 + 2] [i_15 + 1]) : (arr_43 [(_Bool)1] [i_10] [i_9] [i_9] [(_Bool)0])))) : (-10LL)));
                        arr_44 [i_10] [i_9] [i_10] [i_15] = ((/* implicit */signed char) 8702666847893012219LL);
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_50 = ((/* implicit */signed char) (+(-1LL)));
                        arr_47 [i_10] [i_10 - 2] [i_9] [i_10] = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 2) 
                    {
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_10 [i_17] [i_10 - 2] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) arr_10 [i_17] [i_10 + 1] [i_1 + 1] [i_1])) : (var_12)))) ? (min((arr_9 [i_1]), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0)))))));
                        var_52 = (((((_Bool)1) ? (arr_21 [i_10] [i_10 - 2] [i_10]) : (var_15))) ^ (((((/* implicit */_Bool) arr_21 [i_10] [i_10 - 2] [i_10])) ? (arr_21 [i_1 - 1] [i_10 + 1] [i_10]) : (arr_21 [i_1] [i_10 - 2] [i_10]))));
                        var_53 = max((18105930197376549736ULL), (2646676308099852720ULL));
                        var_54 -= ((/* implicit */unsigned long long int) var_17);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        arr_53 [i_10] [(_Bool)1] [i_10] [i_9] [0U] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-92))));
                        var_55 = ((/* implicit */_Bool) (+(var_15)));
                        var_56 ^= ((/* implicit */signed char) (-(var_14)));
                    }
                    for (signed char i_19 = 2; i_19 < 8; i_19 += 4) 
                    {
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned long long int) var_4)) : (((min((((/* implicit */unsigned long long int) var_0)), (2681475439030041639ULL))) >> (((/* implicit */int) (_Bool)0))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            arr_60 [i_1] [i_1 + 1] [i_10] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (5863498511304457846LL) : (2784512446884941035LL)));
                            var_58 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [i_20] [i_1 - 1] [i_10] [i_9]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        for (unsigned long long int i_22 = 4; i_22 < 9; i_22 += 4) 
                        {
                            {
                                var_59 = max((((/* implicit */unsigned int) var_10)), (504658914U));
                                var_60 += ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)122)) >> (((310824696) - (310824694)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (340813876333001876ULL))))), (((/* implicit */unsigned long long int) ((min((0), (((/* implicit */int) (_Bool)1)))) >> (((var_2) + (716481637))))))));
                                var_61 += ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    var_62 = ((/* implicit */unsigned char) (signed char)-94);
                    var_63 = ((/* implicit */unsigned char) arr_41 [i_10 - 2] [i_9] [i_9] [i_1] [i_1] [i_1 + 1] [i_1]);
                }
            } 
        } 
    }
    for (unsigned char i_23 = 1; i_23 < 9; i_23 += 1) /* same iter space */
    {
        var_64 -= ((/* implicit */unsigned int) ((((arr_64 [i_23] [i_23 - 1] [i_23]) + (9223372036854775807LL))) >> (((arr_49 [i_23] [i_23] [7ULL] [i_23]) - (210912504U)))));
        var_65 = ((((/* implicit */_Bool) (~(arr_51 [i_23] [i_23] [i_23] [i_23 + 1])))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))));
        arr_68 [i_23] = ((/* implicit */unsigned char) (+(var_6)));
        /* LoopSeq 2 */
        for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            var_66 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)203))))), (((((/* implicit */_Bool) arr_32 [(signed char)9] [(signed char)9] [i_23 + 1] [i_24] [5ULL] [i_24] [1U])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_67 += ((/* implicit */unsigned long long int) -310824697);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_27 = 1; i_27 < 9; i_27 += 3) 
                        {
                            var_68 = ((/* implicit */_Bool) max((var_68), (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (7330137525349087908ULL) : (((/* implicit */unsigned long long int) (~(((arr_42 [i_25] [i_24] [i_27 - 1] [i_26] [i_27]) * (((/* implicit */long long int) ((/* implicit */int) var_1)))))))))))));
                            var_69 = ((/* implicit */unsigned long long int) ((var_2) > (((-1064313494) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551606ULL)))))))));
                            var_70 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) max((var_19), (var_2)))) ? (min((var_13), (((/* implicit */unsigned long long int) var_4)))) : (arr_20 [i_23 + 1] [i_23 - 1])))));
                            var_71 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) -9028009149541881963LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_8)) : (var_17)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_9)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_28 = 3; i_28 < 7; i_28 += 2) 
                        {
                            var_72 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_70 [i_24])) : (arr_79 [i_24] [i_24] [i_24])));
                            var_73 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_2))) * (((/* implicit */int) ((18105930197376549739ULL) <= (((/* implicit */unsigned long long int) var_7)))))));
                            var_74 = ((/* implicit */long long int) arr_12 [7ULL] [i_25] [i_24]);
                            var_75 -= ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551577ULL))));
                            var_76 = ((/* implicit */unsigned long long int) arr_59 [i_26] [i_24] [9U] [(signed char)1] [i_25]);
                        }
                        for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 3) 
                        {
                            var_77 = ((/* implicit */int) var_9);
                            arr_86 [i_23] [i_24] [i_25] [i_23] = ((/* implicit */unsigned char) arr_46 [i_23] [i_23] [i_23] [(_Bool)1] [i_23] [i_23]);
                            var_78 = ((/* implicit */unsigned long long int) var_1);
                        }
                        var_79 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_79 [i_23] [i_23] [i_23 - 1])) ? (var_9) : (arr_79 [i_23] [i_24] [i_23 + 1])))));
                    }
                } 
            } 
        }
        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_31 = 0; i_31 < 10; i_31 += 4) 
            {
                for (unsigned int i_32 = 0; i_32 < 10; i_32 += 4) 
                {
                    for (unsigned char i_33 = 3; i_33 < 9; i_33 += 4) 
                    {
                        {
                            var_80 = ((/* implicit */unsigned long long int) (signed char)-47);
                            var_81 = ((/* implicit */unsigned int) ((var_1) ? (340813876333001892ULL) : (340813876333001873ULL)));
                            var_82 = ((/* implicit */unsigned int) var_7);
                            var_83 = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            } 
            arr_98 [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (10797195176746928772ULL))) - (arr_30 [0ULL] [i_23] [i_30] [i_30])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) - (arr_74 [i_23 + 1] [i_23 - 1] [i_23 + 1] [i_23 - 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
            var_84 = ((/* implicit */unsigned int) ((unsigned long long int) (~(var_15))));
        }
        var_85 = ((/* implicit */unsigned char) var_16);
    }
    /* vectorizable */
    for (unsigned char i_34 = 1; i_34 < 9; i_34 += 1) /* same iter space */
    {
        var_86 = ((((/* implicit */unsigned long long int) 2637016536U)) - (340813876333001872ULL));
        var_87 = ((/* implicit */int) var_11);
        var_88 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_83 [i_34] [i_34] [i_34 - 1] [4LL] [i_34 + 1] [i_34] [i_34]))) : (var_9)));
        var_89 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7138478431250088918ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_18 [i_34 + 1] [i_34 + 1])));
        arr_102 [i_34] = ((/* implicit */int) var_0);
    }
    var_90 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_14)), ((((~(18105930197376549719ULL))) ^ (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */long long int) var_4)))))))));
    var_91 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_11))))) ? (((((/* implicit */_Bool) var_0)) ? (18105930197376549759ULL) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (-(var_5)))))) <= (((/* implicit */unsigned long long int) var_2))));
    var_92 = ((/* implicit */_Bool) var_15);
}
