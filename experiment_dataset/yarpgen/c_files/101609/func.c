/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101609
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
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(signed char)2] [i_0])) ? (min((((/* implicit */unsigned long long int) var_19)), (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (signed char)-61)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)127))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))) : (min((((/* implicit */unsigned long long int) 1955282051)), (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12)))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_0] [(signed char)3] [i_1] [i_0] [i_0 - 3] = ((/* implicit */int) (signed char)-95);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_10 [i_0] [i_1 + 1]), (var_8)))) <= (((((/* implicit */int) arr_10 [i_0] [i_1 + 1])) | (((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    for (signed char i_7 = 3; i_7 < 7; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))))))));
                            var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10066680567798702887ULL)) ? (arr_1 [i_5] [i_5]) : (9387646579352767654ULL)))) ? (arr_1 [i_5] [i_5]) : (((arr_1 [i_5] [i_5]) << (((arr_1 [i_5] [i_5]) - (11979713676700427838ULL)))))));
                            arr_23 [i_0] [i_4] [i_5] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */unsigned long long int) -241380138)) : (((((var_15) - (var_17))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
            } 
            var_25 += ((/* implicit */unsigned long long int) min((-1), (((/* implicit */int) ((((unsigned long long int) (signed char)-95)) != (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [4] [4])) + (2147483647))) << (((var_11) - (6099268702508998320ULL)))))))))));
            arr_24 [i_0] = ((signed char) -1);
        }
        for (int i_8 = 1; i_8 < 8; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 6; i_11 += 2) 
                        {
                            var_26 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_8 + 1] [i_0])) && (((/* implicit */_Bool) var_8)))) ? ((((+(arr_26 [i_0] [i_8]))) * (min((10066680567798702887ULL), (((/* implicit */unsigned long long int) arr_16 [i_8 + 2])))))) : (((((((/* implicit */_Bool) var_0)) ? (18446744073709551615ULL) : (18446744073709551615ULL))) / (((((/* implicit */_Bool) arr_10 [i_10] [i_10])) ? (var_11) : (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10]))))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 21ULL))) ? (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_14 [i_11] [i_9] [i_8 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1)))))) : (min((var_17), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_8 - 1])))))) : (((unsigned long long int) (signed char)-95))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), ((-(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0] [i_8] [i_9] [i_0] [4ULL] [i_0] [i_8])) + (((/* implicit */int) (signed char)-113))))) + ((+(11936558816305016334ULL)))))))));
                            var_29 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_14)), (var_4))) < (var_13)))), (min((4187912209254026791ULL), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_11 + 4] [i_9] [i_8 - 1] [i_8 + 1]))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            arr_41 [i_9] [i_0] [i_9] [i_10] [i_12] = (signed char)-8;
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_10] [i_8] [i_10]) / (arr_9 [i_10] [i_10] [i_10])))) ? ((+(18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_10] [i_9] [i_8] [i_10])) * (((/* implicit */int) arr_33 [i_10] [i_0 - 2] [i_8] [i_10]))))))))));
                        }
                        arr_42 [i_0] [i_8 + 1] [i_9] [i_10] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_12)) ? (min((var_15), (arr_18 [i_0] [i_0] [i_0] [i_0]))) : (((arr_30 [i_0] [i_0] [9ULL]) | (arr_30 [i_10] [i_0] [i_8])))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_9))));
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) ((((arr_4 [5ULL] [i_0] [i_0]) != (arr_4 [i_0 - 3] [i_0] [i_8 + 2]))) && (((/* implicit */_Bool) (signed char)-82))));
        }
        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_33 &= ((/* implicit */signed char) (+(var_18)));
            arr_47 [i_0] = ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned long long int) (signed char)-4))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_34 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0 - 3] [i_13]))));
                            var_35 *= ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (var_12))) + (var_13));
                            arr_57 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)124))))) ? (((/* implicit */unsigned long long int) 1299720770)) : (var_1));
                        }
                    } 
                } 
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11114962533829573722ULL)) ? (((11936558816305016330ULL) % (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_0] [i_0])))))));
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 3; i_18 < 8; i_18 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_19 = 1; i_19 < 9; i_19 += 4) /* same iter space */
                    {
                        var_37 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
                        var_38 = ((/* implicit */int) arr_40 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [2]);
                    }
                    for (signed char i_20 = 1; i_20 < 9; i_20 += 4) /* same iter space */
                    {
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (+(var_7)))) <= (((((/* implicit */_Bool) 14531430680666916316ULL)) ? (var_5) : (var_9))))) && (((/* implicit */_Bool) min((var_16), (min((18446744073709551591ULL), (var_1)))))))))));
                        var_40 = ((/* implicit */unsigned long long int) ((signed char) arr_48 [i_0 - 2] [i_18 - 3]));
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (arr_6 [i_18])));
                    }
                    for (signed char i_21 = 2; i_21 < 7; i_21 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_22 = 1; i_22 < 9; i_22 += 1) /* same iter space */
                        {
                            var_42 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (14258831864455524825ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53)))))) && (((/* implicit */_Bool) arr_71 [i_0 - 2] [i_17] [i_18] [i_21])))))));
                            arr_75 [i_0] [i_17] [i_18] [i_21] [4ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)19))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                            var_43 ^= ((max((((/* implicit */unsigned long long int) (signed char)104)), (arr_36 [i_22 - 1] [i_21 + 2] [i_18 - 1] [i_0 - 3] [i_0]))) * (((/* implicit */unsigned long long int) (+(0)))));
                        }
                        /* vectorizable */
                        for (signed char i_23 = 1; i_23 < 9; i_23 += 1) /* same iter space */
                        {
                            arr_80 [(signed char)6] [(signed char)6] &= (-(((/* implicit */int) var_10)));
                            arr_81 [i_0] [i_0] [i_21] [i_0] [7ULL] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_23 - 1] [i_21] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 268435455)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))))) : (((1852914312330520217ULL) * (4187912209254026791ULL)))));
                        }
                        /* vectorizable */
                        for (signed char i_24 = 1; i_24 < 9; i_24 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */int) max((var_44), (((((/* implicit */int) (signed char)-9)) % (((/* implicit */int) arr_71 [i_21 - 2] [5ULL] [i_21 - 2] [i_21 + 2]))))));
                            arr_86 [i_0] [i_0] [i_17] [i_18 + 1] [i_21] [i_0] [5ULL] = ((/* implicit */unsigned long long int) -1);
                        }
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (min((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))) : (max((arr_20 [5] [5] [5] [i_0]), (var_17))))), (min((((unsigned long long int) var_11)), (var_5)))))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_25 = 1; i_25 < 8; i_25 += 3) /* same iter space */
                    {
                        arr_89 [i_0] [6ULL] &= ((/* implicit */int) (!(((/* implicit */_Bool) 4095))));
                        var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
                        var_47 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_55 [i_25] [i_25 + 2] [i_18] [i_18] [i_18] [i_18])) && (((0ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))))))))) / (1149666327574878200ULL)));
                    }
                    for (signed char i_26 = 1; i_26 < 8; i_26 += 3) /* same iter space */
                    {
                        arr_93 [i_0] [i_17] [i_18] [i_0] = ((unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (var_7) : (((/* implicit */int) (signed char)41)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) -1299975705)) == (var_4))))));
                        arr_94 [i_0] [i_0] [i_18] = ((/* implicit */signed char) var_16);
                        arr_95 [(signed char)2] [i_17] [i_18] [i_18] &= ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_18 + 1] [i_18 + 1] [i_18]))) > (var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122))) : (var_9));
                    }
                    for (signed char i_27 = 1; i_27 < 8; i_27 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 3) 
                        {
                            arr_101 [i_0] [(signed char)6] [i_17] [i_17] [(signed char)6] [i_27] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) << (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (var_3))) - (17783196253874093422ULL)))))) && (((((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_18 + 2] [i_27 - 1] [7ULL])) < (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_14)))))))));
                            var_48 += ((/* implicit */signed char) ((((/* implicit */int) var_14)) != ((-(((/* implicit */int) var_10))))));
                        }
                        arr_102 [i_0] [0] [3ULL] [i_17] [i_0] [i_18] = ((/* implicit */int) ((((/* implicit */int) arr_65 [i_27 - 1] [i_27] [i_27] [i_27] [i_27 + 1] [i_27])) != (((/* implicit */int) min((arr_65 [i_27 - 1] [i_27 - 1] [i_27] [(signed char)3] [i_27 - 1] [i_27]), ((signed char)-81))))));
                        var_49 += ((/* implicit */signed char) var_4);
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_19)) ? (arr_58 [(signed char)4] [(signed char)4]) : (var_17))))) >> (((var_11) - (6099268702508998288ULL))))))));
                        var_51 = ((((((/* implicit */_Bool) 6510185257404535282ULL)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) var_2)))) << (((/* implicit */int) ((((/* implicit */_Bool) 1609781427)) && (((/* implicit */_Bool) -271197547))))));
                    }
                    for (signed char i_29 = 1; i_29 < 8; i_29 += 3) /* same iter space */
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (signed char)6)) : ((+(((/* implicit */int) (signed char)-48)))))) << (((1717912122548087279ULL) - (1717912122548087274ULL)))));
                        var_53 += ((/* implicit */signed char) min((9ULL), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) | (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) != (var_13)))))))));
                    }
                    var_54 = ((/* implicit */unsigned long long int) (signed char)-50);
                }
            } 
        } 
    }
    for (int i_30 = 0; i_30 < 13; i_30 += 1) 
    {
        arr_108 [12ULL] &= ((/* implicit */signed char) ((((((((/* implicit */int) var_19)) != (((/* implicit */int) (signed char)77)))) ? (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))))) : (((((/* implicit */_Bool) var_18)) ? (var_16) : (11932763071749329009ULL))))) > (var_12)));
        /* LoopNest 2 */
        for (unsigned long long int i_31 = 2; i_31 < 11; i_31 += 2) 
        {
            for (signed char i_32 = 0; i_32 < 13; i_32 += 3) 
            {
                {
                    var_55 = ((/* implicit */unsigned long long int) min((var_55), ((-(max((((((/* implicit */_Bool) arr_110 [i_30] [i_31] [2])) ? (var_15) : (var_1))), (((((/* implicit */_Bool) (signed char)7)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_113 [2] [1]))))))))));
                    var_56 = ((/* implicit */signed char) min((var_56), ((signed char)118)));
                    var_57 = ((/* implicit */unsigned long long int) min((var_57), (var_3)));
                }
            } 
        } 
        var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((5616994908088351273ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_110 [i_30] [i_30] [i_30])) && (((/* implicit */_Bool) arr_111 [3ULL] [i_30] [9])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (1779543987942144357ULL) : (7487186644685081593ULL))))))))))));
    }
    var_59 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : ((((~(((/* implicit */int) var_2)))) & (((357249762) << (((((/* implicit */int) (signed char)127)) - (127)))))))));
}
