/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156384
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_4)), (-1461001001))))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (7LL))), (((/* implicit */long long int) max((arr_0 [i_0]), (var_8)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_19 = arr_3 [1] [i_0];
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_17)))), (((int) arr_11 [i_1] [i_2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 1]))));
                        var_21 *= ((/* implicit */signed char) (~(-8LL)));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_2 [i_0])) : (7LL));
                        var_23 = ((/* implicit */long long int) (~(var_7)));
                        var_24 = ((/* implicit */int) arr_13 [i_1] [i_0] [i_2 - 2] [i_2 - 2]);
                        arr_14 [i_0] [0] [i_2] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (var_3) : (((/* implicit */int) var_15))));
                        var_25 += ((/* implicit */unsigned char) 7LL);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]);
    }
    for (signed char i_5 = 1; i_5 < 7; i_5 += 3) /* same iter space */
    {
        arr_17 [i_5 + 2] = ((/* implicit */signed char) max((arr_3 [14LL] [14LL]), (((/* implicit */long long int) ((unsigned char) var_4)))));
        var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_14)), (arr_3 [(unsigned char)4] [12LL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (var_1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [10U])) ? (((/* implicit */int) arr_15 [(signed char)2])) : (((/* implicit */int) arr_8 [(signed char)12] [i_5] [(signed char)12]))))) != (7LL))))) : (max((var_2), (((/* implicit */long long int) -1355100701))))))));
        arr_18 [6LL] [6LL] &= ((/* implicit */unsigned int) (((+(arr_16 [i_5 + 3]))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_19 [0LL] [i_5 + 1] = ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)118))))) / ((+(arr_2 [10LL]))));
    }
    for (signed char i_6 = 1; i_6 < 7; i_6 += 3) /* same iter space */
    {
        var_28 ^= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_6 + 3] [(signed char)10] [i_6 + 1] [(unsigned char)14])))))));
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 8; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned char i_9 = 3; i_9 < 9; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) max((1355100701), (arr_9 [i_7])))), (max((arr_16 [i_6]), (arr_20 [i_6])))))));
                        arr_28 [i_6] [i_7] [i_8] [i_8] [i_6] = ((/* implicit */signed char) arr_26 [i_9 - 2] [i_9 - 2] [(unsigned char)6]);
                        arr_29 [i_6] [i_8] [i_8] [i_7 - 1] [i_6] = ((/* implicit */unsigned int) var_13);
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */long long int) var_15);
        /* LoopNest 2 */
        for (unsigned int i_10 = 2; i_10 < 7; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (int i_13 = 1; i_13 < 9; i_13 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) arr_10 [i_6 + 3] [i_10 + 1] [i_6] [i_13]);
                                arr_44 [i_13 - 1] [i_6] [1] [i_6] [(unsigned char)4] = ((/* implicit */unsigned char) max((arr_26 [i_6] [i_6] [i_6]), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(8798134603331665745LL)))) ? (max((var_1), (((/* implicit */unsigned int) var_17)))) : (((unsigned int) var_3)))))));
                                arr_45 [i_6] [4LL] [i_6] [i_6] = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned char) var_14)), (arr_5 [10U] [i_6 + 2] [i_10 + 1]))));
                                arr_46 [7U] [i_6] [(unsigned char)0] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_13 - 1]), (arr_0 [i_13 - 1])))) ? ((~(((/* implicit */int) arr_0 [i_13 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_13 - 1])) ? (arr_9 [i_6 + 2]) : (((/* implicit */int) arr_0 [i_13 - 1]))))));
                            }
                        } 
                    } 
                    arr_47 [i_6 + 1] [i_10 + 1] [i_11] [i_6] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_37 [i_6] [i_6] [i_11] [i_11])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_15 [i_6]), (var_11))))))) : (var_0)));
                    arr_48 [i_6] [7U] [i_11] = ((/* implicit */long long int) var_10);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_14 = 1; i_14 < 7; i_14 += 3) /* same iter space */
                    {
                        arr_52 [i_6] [(signed char)5] [i_11] [i_11] = ((/* implicit */long long int) arr_39 [i_6] [i_10] [i_11] [i_6]);
                        var_32 = ((var_3) ^ (((((/* implicit */int) var_17)) * (((/* implicit */int) var_16)))));
                        arr_53 [i_6] [i_10] [i_11] [5U] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6] [12] [(unsigned char)4]))));
                        var_33 = ((/* implicit */long long int) min((var_33), (arr_3 [i_6] [(unsigned char)4])));
                    }
                    for (signed char i_15 = 1; i_15 < 7; i_15 += 3) /* same iter space */
                    {
                        arr_58 [i_11] [i_6] [i_6] [(unsigned char)1] = ((/* implicit */unsigned char) min(((~(-1LL))), (((/* implicit */long long int) arr_1 [i_6] [(unsigned char)5]))));
                        arr_59 [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 66585615)) ? (((/* implicit */int) arr_51 [i_6 - 1] [i_15 - 1])) : (((/* implicit */int) arr_37 [i_15 + 1] [i_10 + 1] [i_6 + 2] [i_6 + 2])))), (((((/* implicit */_Bool) arr_24 [i_6] [i_15 + 2] [i_15] [i_15 + 2])) ? (((/* implicit */int) arr_37 [i_15 + 3] [i_10 - 1] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) arr_37 [i_15 + 2] [i_10 + 3] [i_6 + 1] [i_6 + 3]))))));
                        var_34 = ((/* implicit */unsigned int) arr_37 [i_6] [i_10] [0LL] [i_15]);
                        arr_60 [i_6] [6LL] [i_10] [i_11] [i_15] [i_15] &= ((/* implicit */signed char) -66585616);
                        var_35 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_51 [i_10] [i_11])) && (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) arr_3 [i_6 + 1] [i_6])) ? (arr_20 [i_11]) : (arr_3 [i_11] [i_6]))) : (arr_3 [i_6 - 1] [i_6])));
                    }
                    for (int i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        arr_64 [i_6] [i_6] [i_11] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_43 [i_6 - 1] [i_10 - 2] [8] [i_10] [i_6 - 1]))) ? (((int) arr_43 [i_10 + 3] [i_10 - 2] [i_11] [i_11] [i_16])) : (-1355100731)));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) var_16))) ? (var_6) : (((/* implicit */long long int) (+((+(((/* implicit */int) var_8)))))))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_6] [i_6 + 2] [i_6]))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_6 + 2]))))))))) ? (((long long int) arr_20 [i_6 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_10 + 3])) ? (arr_21 [6LL]) : (((/* implicit */unsigned int) (-2147483647 - 1))))))));
                        var_38 = arr_2 [i_6];
                        /* LoopSeq 2 */
                        for (long long int i_17 = 1; i_17 < 8; i_17 += 1) /* same iter space */
                        {
                            arr_67 [i_6] [i_10 - 2] [i_6] [8] [i_10] [i_10] [(signed char)5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6] [i_6])) ? (arr_1 [i_6] [i_6]) : (arr_1 [i_6] [i_6])))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) > (arr_1 [i_6] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                            arr_68 [i_6] [(unsigned char)5] [i_10] [i_16] [i_17] [i_16] = ((/* implicit */long long int) var_8);
                        }
                        for (long long int i_18 = 1; i_18 < 8; i_18 += 1) /* same iter space */
                        {
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_33 [i_16] [i_16] [i_6]))));
                            var_40 = ((/* implicit */signed char) max((max((arr_72 [i_6] [i_6] [i_18 - 1] [i_16] [5U]), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_16)))))));
                        }
                    }
                    for (int i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
                    {
                        arr_75 [i_6] [0U] [3] [0] [i_11] [i_11] = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_6 + 1] [i_6]))))), (min((arr_3 [i_10] [i_6]), (arr_3 [i_6] [i_6])))));
                        var_41 = ((int) max((((/* implicit */long long int) var_12)), (min((-8798134603331665769LL), (((/* implicit */long long int) (-2147483647 - 1)))))));
                        var_42 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) min((arr_73 [2LL] [2LL] [i_6] [i_6] [3]), (((/* implicit */unsigned int) 1355100692))))), (arr_33 [i_6] [i_6] [9]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (arr_33 [i_6] [i_6] [i_11])))) || (((/* implicit */_Bool) arr_24 [i_6] [i_10 + 1] [i_10] [i_10])))))));
                        var_43 *= ((/* implicit */signed char) arr_12 [(signed char)6] [i_19] [i_19] [12U]);
                        var_44 = ((/* implicit */int) var_0);
                    }
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((signed char) arr_15 [i_10])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            arr_79 [i_6] [i_20] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_6] [i_20] [i_6 + 3] [i_6] [i_6] [i_20])) ? (arr_62 [i_6] [i_6] [i_6 + 1] [i_20] [i_6] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((arr_62 [i_6] [i_20] [i_6 + 1] [i_20] [8LL] [i_6]), (arr_62 [i_6] [i_20] [i_6 - 1] [i_6 + 3] [(unsigned char)2] [i_20]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1149662231U)) ? (2448498483U) : (((/* implicit */unsigned int) -1355100701)))))));
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_6 - 1] [i_6] [i_6] [8LL] [i_6])) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) var_16))))) ? (var_9) : (arr_61 [i_6 - 1]))) : (((/* implicit */long long int) ((int) arr_62 [i_6] [i_20] [i_20] [i_20] [i_20] [i_6 + 2])))));
            arr_80 [i_6] [i_6] = ((/* implicit */int) var_11);
        }
        for (signed char i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            var_47 = ((max((arr_69 [i_21] [i_21]), (arr_69 [i_21] [i_6]))) ^ (((/* implicit */long long int) max((arr_65 [i_21]), (arr_65 [i_21])))));
            arr_84 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_9 [i_6 - 1])) > (min((var_6), (((/* implicit */long long int) arr_9 [i_21]))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 15; i_22 += 4) 
    {
        for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) 
        {
            {
                var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_22]))))) && (((/* implicit */_Bool) arr_86 [i_23])))))));
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    for (unsigned int i_25 = 3; i_25 < 12; i_25 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */long long int) var_11);
                            /* LoopSeq 2 */
                            for (long long int i_26 = 0; i_26 < 15; i_26 += 3) /* same iter space */
                            {
                                arr_100 [i_22] [(unsigned char)8] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_96 [i_23] [i_26])) ? (arr_91 [(signed char)11] [i_25 + 3]) : (arr_10 [i_25] [i_25] [i_23] [i_25]))))));
                                arr_101 [8LL] [i_23] [i_24] [i_25] [(signed char)3] [11LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(22LL)))) ? (arr_10 [4U] [i_25] [i_22] [i_25]) : (-1167597962)));
                            }
                            /* vectorizable */
                            for (long long int i_27 = 0; i_27 < 15; i_27 += 3) /* same iter space */
                            {
                                arr_104 [(unsigned char)4] [0] [1] = ((/* implicit */unsigned char) arr_98 [i_27] [i_27] [i_27] [i_27] [i_27]);
                                arr_105 [i_23] [(unsigned char)5] [i_23] [(signed char)5] [(unsigned char)9] = ((/* implicit */unsigned char) arr_2 [i_22]);
                            }
                            var_50 = ((/* implicit */int) var_13);
                            var_51 = min((max((((/* implicit */long long int) -1355100701)), ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((int) (signed char)-102))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_28 = 0; i_28 < 10; i_28 += 1) 
    {
        for (long long int i_29 = 0; i_29 < 10; i_29 += 1) 
        {
            {
                var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? ((+(0U))) : (((/* implicit */unsigned int) arr_82 [i_28] [i_29])))))));
                /* LoopSeq 1 */
                for (signed char i_30 = 2; i_30 < 8; i_30 += 4) 
                {
                    arr_115 [i_28] = ((/* implicit */long long int) (+((~((~(((/* implicit */int) (signed char)(-127 - 1)))))))));
                    var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) 66585613)) ? (3928264903U) : (arr_95 [i_28] [i_29] [i_30] [i_28]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_31 = 2; i_31 < 21; i_31 += 2) 
    {
        for (unsigned int i_32 = 0; i_32 < 24; i_32 += 4) 
        {
            {
                var_54 = ((/* implicit */signed char) min(((~(min((arr_121 [i_31 - 1] [i_31] [i_31]), (((/* implicit */unsigned int) arr_120 [i_32] [i_31])))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_121 [14U] [i_31 - 2] [i_31])))))));
                var_55 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : ((+(arr_118 [i_31] [i_31 - 2]))));
                var_56 = ((/* implicit */unsigned int) -8110196508754471775LL);
            }
        } 
    } 
}
