/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151478
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
    var_17 &= ((/* implicit */_Bool) 4U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((4294967278U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_9 [(signed char)17] [i_1] [i_3] [(signed char)2]) & (var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))))));
                                var_19 = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_20 += ((((((/* implicit */_Bool) min((4294967292U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) arr_17 [6U])) : (((/* implicit */int) max((var_0), (var_14)))))) <= ((-(((/* implicit */int) arr_5 [(_Bool)1])))));
                            arr_24 [i_6] [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_25 [i_1] [i_5] [i_5] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_17 [i_0]);
                        }
                    } 
                } 
                arr_26 [i_1] = ((/* implicit */unsigned int) (signed char)-12);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_21 = ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((signed char) ((var_11) << (((arr_28 [i_7]) - (266695497U))))))));
                    var_22 -= ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (min((2347242426U), (((/* implicit */unsigned int) arr_27 [6U]))))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) 2347242421U);
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1947724875U)))) ? (((((/* implicit */int) arr_3 [i_7] [(signed char)10] [i_11])) / (((var_13) ? (((/* implicit */int) arr_32 [i_7] [i_8] [i_9])) : (((/* implicit */int) var_14)))))) : (((/* implicit */int) var_14))));
                                var_25 -= 8U;
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_6)))) ? (var_7) : (min((((/* implicit */unsigned int) (signed char)24)), (4294967295U))))) != (min((arr_21 [i_7 + 1] [i_8] [i_8] [i_10]), (((/* implicit */unsigned int) (signed char)-115)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_40 [i_8] |= ((/* implicit */signed char) var_13);
                        arr_41 [i_7 - 1] [10U] [i_12] [i_9] [(_Bool)0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [22U] [i_8] [21U] [(_Bool)1] [i_8])) : (((/* implicit */int) arr_3 [i_7] [i_8] [i_9]))));
                        arr_42 [i_12] [(_Bool)1] [i_12] = ((/* implicit */_Bool) arr_22 [(_Bool)1]);
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        var_27 += ((/* implicit */signed char) 4294967291U);
                        var_28 += ((/* implicit */signed char) (((_Bool)1) || (arr_7 [i_7] [i_8] [i_9] [i_9])));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_30 [i_7] [i_7 + 2] [(_Bool)1]))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_7 + 1])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_12))))) != (min((arr_0 [i_15] [i_7]), (((/* implicit */unsigned int) var_2)))))))));
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(((/* implicit */int) ((1947724876U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_32 ^= ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) 1947724899U)) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_14])) : (((/* implicit */int) var_14)))) ^ (((/* implicit */int) (!(var_15))))))));
                }
            } 
        } 
        arr_52 [i_7] = (signed char)-3;
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            for (unsigned int i_17 = 2; i_17 < 13; i_17 += 2) 
            {
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_17] [i_16] [i_16] [i_17])) ? (((var_7) >> (((/* implicit */int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))));
                    var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_56 [i_7 + 1] [i_16] [2U]) ? (((/* implicit */int) arr_7 [i_7 - 1] [i_16] [(signed char)18] [i_17])) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_7]))))) : ((-(((/* implicit */int) arr_16 [i_17])))))), ((~(((/* implicit */int) arr_55 [i_16] [12U]))))));
                    var_35 += ((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7])) >> (((((/* implicit */int) arr_17 [i_7 - 1])) & (((/* implicit */int) arr_43 [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7] [i_7 + 1] [i_7 - 1]))))));
                }
            } 
        } 
    }
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_19 = 1; i_19 < 11; i_19 += 3) 
        {
            arr_64 [i_18] [i_18 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_27 [i_18 - 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (arr_48 [i_19]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (var_4)))))))))));
            /* LoopNest 2 */
            for (signed char i_20 = 3; i_20 < 12; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_36 |= ((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((_Bool) (signed char)-28))))))));
                        var_37 &= var_16;
                        var_38 = ((/* implicit */_Bool) min(((~(min((((/* implicit */unsigned int) var_2)), (12U))))), (arr_49 [i_18 - 1] [i_20] [i_21])));
                        var_39 = var_6;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 13; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_40 ^= ((/* implicit */_Bool) 4294967289U);
                        /* LoopSeq 1 */
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                        {
                            arr_81 [i_24] [i_24] [i_24] [i_18 - 1] = ((/* implicit */unsigned int) arr_3 [i_18] [i_19 + 2] [i_24]);
                            arr_82 [i_18] [i_19 + 1] [i_22] [4U] [(signed char)4] [(_Bool)1] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (149182987U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_25 = 3; i_25 < 10; i_25 += 1) 
        {
            arr_85 [i_18 - 1] [i_25 - 1] [6U] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((unsigned int) arr_60 [i_25])))))));
            arr_86 [i_25] = ((/* implicit */_Bool) arr_67 [i_18] [i_25]);
            var_41 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */int) arr_11 [(signed char)14] [i_25] [i_18 - 1] [i_18] [(_Bool)1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), ((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (149183009U))))))));
            var_42 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (((arr_9 [i_18] [i_18] [i_25] [i_25]) << (((/* implicit */int) arr_60 [i_25 - 1])))));
            arr_87 [i_18 - 1] = ((/* implicit */unsigned int) min((((((((/* implicit */int) arr_77 [i_18 - 1] [0U] [i_25])) - (((/* implicit */int) arr_74 [i_18] [i_25 + 2])))) + (((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) arr_20 [14U])) : (((/* implicit */int) arr_70 [i_25 - 2] [i_25 + 3] [(_Bool)1] [i_18] [i_18])))))), (((((((/* implicit */int) min((arr_55 [i_18] [(_Bool)1]), (arr_10 [i_18 - 1] [i_25 + 3])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 1947724854U)) || (((/* implicit */_Bool) var_7)))))))));
        }
        /* vectorizable */
        for (signed char i_26 = 3; i_26 < 11; i_26 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_27 = 0; i_27 < 13; i_27 += 4) 
            {
                for (signed char i_28 = 1; i_28 < 10; i_28 += 1) 
                {
                    {
                        arr_95 [(_Bool)1] [i_26] [i_27] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((arr_22 [i_18 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_18] [i_26 - 3] [i_27] [i_28 + 1])))))));
                        arr_96 [i_18] [i_26] [i_27] [i_28] [i_28 + 2] [(signed char)9] = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)80))))) != (((/* implicit */int) var_1)));
                        arr_97 [i_18 - 1] [i_18] [i_18] [i_18] |= ((/* implicit */unsigned int) arr_61 [i_18 - 1] [i_26 - 1]);
                    }
                } 
            } 
            arr_98 [i_18] [i_18] [i_26] = ((/* implicit */unsigned int) arr_63 [i_18 - 1] [i_26 + 2] [i_26]);
            var_43 = ((/* implicit */unsigned int) var_5);
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            var_44 += ((/* implicit */signed char) min((var_10), (((1662753810U) - (2347242423U)))));
            /* LoopNest 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        arr_108 [i_29] [i_29] [i_29] [i_29] = ((/* implicit */unsigned int) var_5);
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) var_7))));
                        var_46 = (i_29 % 2 == 0) ? (((/* implicit */_Bool) (((((-(((/* implicit */int) arr_18 [i_18 - 1] [i_29])))) + (2147483647))) << (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_18]))) / (var_7))))))) - (1)))))) : (((/* implicit */_Bool) (((((((-(((/* implicit */int) arr_18 [i_18 - 1] [i_29])))) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_18]))) / (var_7))))))) - (1))))));
                        /* LoopSeq 2 */
                        for (signed char i_32 = 4; i_32 < 12; i_32 += 3) 
                        {
                            var_47 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_92 [i_18 - 1] [i_29] [i_31] [i_32])) != (((/* implicit */int) arr_19 [18U] [i_29] [i_30] [(_Bool)1]))))) << (((/* implicit */int) arr_90 [9U] [i_18] [i_18 - 1]))))) == (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_30 [i_18] [i_18 - 1] [i_18])) - (45)))))), (arr_93 [i_29] [(signed char)5] [i_31] [i_32])))));
                            arr_111 [i_18 - 1] [i_29] [i_29] [i_29] [(signed char)12] = (+(var_11));
                        }
                        for (signed char i_33 = 2; i_33 < 12; i_33 += 1) 
                        {
                            var_48 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_18 - 1])) ^ (((/* implicit */int) arr_83 [i_18 - 1] [i_29] [i_30])))) - ((-(((/* implicit */int) var_2))))))) != (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))), (((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)-6), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_12)))))))) * (((/* implicit */int) max((((/* implicit */signed char) var_15)), (var_8)))))))));
                        }
                    }
                } 
            } 
        }
        arr_115 [i_18] [i_18 - 1] = 1947724907U;
    }
    /* vectorizable */
    for (signed char i_34 = 2; i_34 < 13; i_34 += 4) 
    {
        var_50 -= ((/* implicit */signed char) (-(arr_58 [i_34] [i_34 - 1] [i_34 + 2] [(_Bool)0])));
        /* LoopNest 2 */
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
            {
                {
                    var_51 = ((/* implicit */unsigned int) max((var_51), (0U)));
                    /* LoopNest 2 */
                    for (signed char i_37 = 0; i_37 < 15; i_37 += 4) 
                    {
                        for (unsigned int i_38 = 3; i_38 < 14; i_38 += 2) 
                        {
                            {
                                arr_126 [i_34 - 2] [(signed char)7] [i_36] [i_36] [i_38] = ((/* implicit */signed char) var_14);
                                arr_127 [i_38] [i_36] [i_36] [i_36] [i_34 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_36]))) <= (((4294967279U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                                var_52 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_36] [i_38]))) / (4294967290U))) != (((unsigned int) var_10))));
                            }
                        } 
                    } 
                    var_53 = (+(arr_6 [i_36]));
                    var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) 2455118362U))));
                }
            } 
        } 
        arr_128 [i_34] [i_34] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_34 + 2] [i_34])))))) == (((/* implicit */int) arr_5 [i_34 + 2]))));
    }
    var_55 = var_11;
    var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (~(6U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1947724896U)) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) var_13))))) : (var_11)))));
}
