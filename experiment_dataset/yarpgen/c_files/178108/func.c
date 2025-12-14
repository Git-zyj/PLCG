/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178108
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3LL)) ? (7349449484736986015LL) : (((/* implicit */long long int) -7))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) var_3)) : (var_18))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_11)) : (var_10)))) ? (((/* implicit */long long int) var_12)) : (var_2))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 3; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_9 [i_3] [i_3] [i_3] [0LL] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) -1039259688)) ? (((/* implicit */unsigned long long int) 1039259687)) : (0ULL)));
                        var_21 = ((/* implicit */long long int) ((((var_10) <= (((/* implicit */unsigned long long int) var_2)))) ? (arr_0 [i_1]) : (arr_2 [i_3 + 1])));
                    }
                } 
            } 
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [19ULL])) ? (11344190189299941121ULL) : (((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL)))));
        }
        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_13 [i_4 - 2] [i_5 - 1] [i_5 - 1] [i_6 - 1]))));
                            arr_20 [i_5] [i_4] [i_5] [1] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_3)) : (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_5])) ? (var_17) : (((/* implicit */long long int) arr_0 [i_4 - 1]))))) : (arr_18 [i_4 - 1] [i_5])));
                        }
                    } 
                } 
            } 
            var_23 += ((((/* implicit */_Bool) 2094351665)) ? (((/* implicit */unsigned long long int) 234776305)) : (5969086579595759614ULL));
        }
        arr_21 [i_0] [i_0] = ((((/* implicit */_Bool) ((int) 6743436928736010020LL))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_18 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0])) ? (var_11) : (arr_14 [i_0] [20ULL] [i_0] [6ULL])))));
        var_24 = ((/* implicit */long long int) ((((arr_5 [i_0]) != (var_7))) ? (arr_11 [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 234776305)) : (18446744073709551586ULL)))));
        /* LoopSeq 1 */
        for (int i_8 = 3; i_8 < 22; i_8 += 4) 
        {
            arr_24 [i_0] [i_8] [i_0] &= ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_12 [i_0])) - (arr_18 [i_0] [i_0])));
            var_25 -= ((/* implicit */unsigned long long int) ((int) arr_17 [i_8 - 3] [i_8 - 3] [i_8] [i_8 - 3] [i_8 - 1] [i_8]));
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    {
                        var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_9])) ? (arr_3 [i_0] [i_8] [i_10]) : (var_4)))) ? ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) -1039259703)))) : (((/* implicit */long long int) arr_3 [i_0] [i_9 + 1] [i_0]))));
                        var_27 = ((arr_16 [i_8] [i_8 - 1] [i_9 + 2] [i_9]) % (arr_15 [i_0] [i_8 - 1] [i_9 + 2] [i_10]));
                        var_28 = ((/* implicit */int) min((var_28), (arr_0 [i_8 + 1])));
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_8 - 2] [i_8 + 1]) / (arr_29 [i_8 - 1] [i_8 - 1] [i_8 - 2])));
        }
    }
    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        arr_33 [i_11] = ((unsigned long long int) -7LL);
        var_30 = ((/* implicit */long long int) arr_2 [i_11]);
    }
    for (long long int i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) arr_38 [i_12] [i_13] [i_13]))));
                        arr_43 [i_12] [11LL] [i_13] [i_13] [i_12] = min((arr_40 [23ULL] [19] [19]), (35180077121536LL));
                        var_32 = ((((/* implicit */_Bool) 234776305)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (18446744073709551577ULL));
                        arr_44 [i_12] [i_12] [i_12] [i_12 - 1] = ((((/* implicit */_Bool) 19LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (6743436928736010020LL));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((unsigned long long int) 1039259702)))));
    }
    var_34 -= ((/* implicit */long long int) max((18446744073709551604ULL), (15991955330787929696ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (int i_19 = 4; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_35 &= ((/* implicit */unsigned long long int) ((long long int) arr_25 [i_19 + 1] [i_19 - 2] [i_19 - 4]));
                            var_36 -= ((/* implicit */unsigned long long int) ((18446744073709551591ULL) < (((/* implicit */unsigned long long int) 1577246425))));
                            arr_55 [7ULL] [i_17] [i_17] [i_17] = ((((((((/* implicit */_Bool) 7854496718047401133LL)) ? (12ULL) : (((/* implicit */unsigned long long int) -2327463687857330445LL)))) >> (((((((/* implicit */_Bool) arr_4 [i_16] [i_17] [14])) ? (arr_52 [i_16] [i_18] [15LL]) : (((/* implicit */unsigned long long int) arr_1 [i_16] [i_16])))) - (5072269369972758453ULL))))) ^ (((/* implicit */unsigned long long int) arr_6 [i_18])));
                            var_37 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_16] [i_17])) ? (arr_51 [17ULL] [i_17] [i_18] [15LL]) : (arr_35 [i_16] [i_19])))) ? (((((/* implicit */_Bool) arr_23 [i_16] [i_17] [i_16])) ? (var_16) : (arr_50 [i_18] [i_18] [7LL] [i_18]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_26 [i_19] [i_18] [i_19 - 2] [i_19 - 2]))))))))) ? (((unsigned long long int) arr_28 [i_16] [i_17] [i_18] [i_16] [i_19] [i_19])) : (arr_26 [i_19] [i_17] [18] [i_17]));
                            arr_56 [12LL] [i_16] [i_17] [i_16] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (arr_27 [i_16] [i_18] [i_16] [i_19] [i_16] [i_16]) : (arr_15 [20] [i_16] [i_19 - 4] [i_19]))), (((/* implicit */long long int) ((((int) 8666252191556012802ULL)) != (((((/* implicit */_Bool) arr_16 [i_16] [19LL] [i_18] [i_19])) ? (arr_28 [i_18] [i_17] [i_18] [i_17] [4ULL] [4ULL]) : (arr_3 [16ULL] [0ULL] [i_17]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 1; i_20 < 20; i_20 += 4) 
                {
                    for (long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                    {
                        {
                            var_38 = ((((/* implicit */_Bool) ((long long int) -2147483637))) ? (arr_41 [9LL]) : (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) -503211754))))));
                            var_39 = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((((18446744073709551591ULL) << (((6549669514554144383ULL) - (6549669514554144327ULL))))) >= (((((/* implicit */_Bool) arr_34 [i_16])) ? (arr_38 [i_16] [0] [i_21]) : (var_19))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 4) 
                {
                    for (int i_23 = 2; i_23 < 22; i_23 += 4) 
                    {
                        for (int i_24 = 0; i_24 < 23; i_24 += 4) 
                        {
                            {
                                arr_70 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11897074559155407208ULL)) ? (6549669514554144384ULL) : (((/* implicit */unsigned long long int) -13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_47 [20LL] [3LL])) <= (arr_57 [i_16]))))) : (var_16)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_48 [22ULL]) : (arr_51 [i_16] [i_16] [i_23] [i_16])))), (min((((/* implicit */unsigned long long int) arr_58 [i_17] [i_22] [i_23])), (var_6))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_68 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (arr_59 [i_16] [i_16] [13ULL]) : (((/* implicit */unsigned long long int) arr_58 [i_23] [i_17] [i_16])))) : (((((/* implicit */unsigned long long int) arr_8 [i_16] [8] [i_16] [i_16] [i_16])) % (arr_11 [i_16] [i_22] [i_16])))))));
                                arr_71 [4LL] [i_23] [19ULL] [20ULL] [19ULL] [i_23] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_17] [i_23 - 1] [i_17] [i_17] [i_17] [i_16])), (arr_63 [i_16] [i_16])))) ? (arr_53 [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */long long int) arr_34 [i_24]))))) : (((((/* implicit */_Bool) 11344190189299941121ULL)) ? (((/* implicit */unsigned long long int) 70368744177663LL)) : (10ULL)))));
                                arr_72 [i_16] [i_17] [i_22] [i_23 + 1] [i_24] = ((/* implicit */long long int) ((unsigned long long int) ((1577246416) >> (((-1LL) + (16LL))))));
                                var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8349591270379750375LL)) ? (18446744073709551615ULL) : (17288742898225109966ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_54 [i_23 + 1]) == (arr_5 [i_23 - 1]))))) : (((arr_66 [i_16] [i_23 + 1] [i_23 - 1]) << (((arr_54 [i_23 - 2]) - (1048647987879016088ULL))))))))));
                            }
                        } 
                    } 
                } 
                arr_73 [i_16] [21LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_16] [i_16] [i_16] [15])) ? (var_15) : (var_14)))) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_16] [i_16] [i_16] [i_17] [i_17] [i_17])) ? (arr_8 [i_17] [i_17] [i_17] [i_17] [i_16]) : (arr_8 [0] [i_16] [i_16] [i_17] [i_17])))) : (((((/* implicit */_Bool) -2147483636)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) 8074494247679985176LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 12LL))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_25 = 0; i_25 < 18; i_25 += 4) 
    {
        /* LoopNest 2 */
        for (int i_26 = 0; i_26 < 18; i_26 += 4) 
        {
            for (int i_27 = 0; i_27 < 18; i_27 += 4) 
            {
                {
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((arr_23 [i_25] [i_26] [i_27]) != (arr_4 [i_25] [i_25] [i_27])))), (((((/* implicit */_Bool) 11897074559155407205ULL)) ? (((/* implicit */unsigned long long int) -1577246424)) : (18446744073709551613ULL))))) - (((((((/* implicit */_Bool) arr_61 [i_27] [i_26])) ? (18446744073709551604ULL) : (6549669514554144426ULL))) & (min((var_18), (((/* implicit */unsigned long long int) var_15)))))))))));
                    arr_82 [i_25] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_26] [i_26] [i_25] [i_26] [i_26] [i_26] [i_25])) ? (arr_61 [i_27] [i_26]) : (((/* implicit */long long int) arr_0 [i_25]))))) ? (arr_74 [i_25] [i_25]) : (((/* implicit */unsigned long long int) arr_58 [i_27] [i_26] [i_25]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((int) var_11))), (arr_67 [i_25] [i_26] [i_27] [i_27])))) : (((((/* implicit */_Bool) -267862455)) ? (17705095933620141799ULL) : (((/* implicit */unsigned long long int) 8349591270379750377LL))))));
                    var_42 = ((/* implicit */long long int) min((var_42), (max((((/* implicit */long long int) arr_64 [i_25] [i_26])), (((min((arr_40 [i_25] [i_26] [i_26]), (((/* implicit */long long int) arr_51 [i_26] [i_26] [13ULL] [i_25])))) + (((/* implicit */long long int) arr_14 [i_27] [4] [4ULL] [4ULL]))))))));
                }
            } 
        } 
        var_43 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_77 [i_25])) : (((((/* implicit */_Bool) arr_12 [5ULL])) ? (arr_38 [i_25] [i_25] [i_25]) : (arr_5 [i_25])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) var_0))) >= (((((/* implicit */_Bool) arr_36 [i_25] [i_25])) ? (arr_69 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]) : (var_8))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1422855402)), (-7135394321172023843LL)))) : (((((/* implicit */_Bool) arr_41 [i_25])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_11 [i_25] [i_25] [i_25])))))));
        var_44 = ((((/* implicit */_Bool) arr_48 [i_25])) ? (arr_12 [i_25]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_22 [i_25] [i_25]) <= (max((arr_17 [i_25] [6LL] [i_25] [i_25] [i_25] [i_25]), (((/* implicit */unsigned long long int) arr_77 [i_25])))))))));
    }
    for (int i_28 = 3; i_28 < 12; i_28 += 4) 
    {
        arr_85 [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */long long int) ((((((int) arr_67 [21ULL] [i_28] [i_28] [21ULL])) + (2147483647))) << (((var_10) - (14198314624746555005ULL))))))));
        arr_86 [i_28] [i_28 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_28] [9] [i_28] [i_28] [i_28] [i_28 + 1])) ? (((/* implicit */long long int) arr_28 [i_28] [i_28] [i_28] [i_28] [i_28 + 1] [i_28 + 1])) : (arr_30 [i_28 - 2] [i_28])))) ? (((((/* implicit */_Bool) arr_39 [i_28] [i_28] [i_28])) ? (((((/* implicit */_Bool) arr_6 [i_28])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_50 [i_28] [i_28] [i_28] [i_28]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [i_28] [i_28] [i_28 - 1])) ? (arr_30 [i_28] [i_28]) : (arr_16 [i_28] [i_28] [i_28 + 1] [i_28])))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_76 [i_28])) ? (var_14) : (arr_76 [i_28]))), (((((/* implicit */_Bool) 28LL)) ? (-10LL) : (-7135394321172023858LL))))))));
    }
}
