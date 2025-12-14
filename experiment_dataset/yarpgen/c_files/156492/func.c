/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156492
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = 142187138;
        arr_3 [13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (142187137) : (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1713111271))))) : (min((arr_1 [i_0]), (-574928939))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (~(arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                {
                    var_16 = arr_5 [i_1];
                    var_17 = (-2147483647 - 1);
                    var_18 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3]))))));
                    arr_11 [20] [i_2] [i_2] = ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3])) ? (min((((/* implicit */int) ((((/* implicit */_Bool) 900969905)) && (((/* implicit */_Bool) arr_5 [i_2]))))), ((+(-1))))) : (arr_0 [i_3]));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_10 [i_1] [i_4] [i_5]) : (var_5)))) ? (arr_13 [i_1] [i_4] [i_5 + 3]) : (((-2147483647) + (142187137))))) <= (((int) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_5 - 1])) ? (arr_10 [i_5] [i_5] [i_5]) : (-1))))));
                    arr_18 [i_4] = min((((int) arr_17 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5])), (((int) var_10)));
                    var_20 = 306020911;
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
        {
            var_21 = (~(-868427691));
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 4 */
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) (-(arr_19 [i_7 - 1] [i_7 + 1] [i_7 + 1])))) ? (((((1556490823) > (460587795))) ? (((int) (-2147483647 - 1))) : (((((/* implicit */_Bool) arr_8 [i_1] [4] [i_1])) ? (-1499989683) : (278922278))))) : ((~(arr_19 [23] [i_6] [i_7 + 2])))))));
                    arr_25 [i_7] [i_6] [i_6] [21] = ((((int) ((int) arr_1 [i_1]))) ^ (min(((-(arr_6 [i_1]))), (arr_6 [i_1]))));
                    arr_26 [i_1] [i_7] [i_7] [i_8] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_6] [i_7] [i_8]))))) : (((-868427681) / (-1095620884)))))) ? (((((/* implicit */_Bool) -392010020)) ? (arr_15 [i_1] [i_6] [i_6] [i_8]) : (arr_15 [i_1] [i_1] [8] [i_1]))) : (var_0));
                    var_23 = ((/* implicit */int) min((var_23), ((-((+(1182072184)))))));
                }
                for (int i_9 = 2; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    arr_29 [i_7] = ((((/* implicit */_Bool) -315400703)) ? (((int) (~(16)))) : (((int) ((((/* implicit */_Bool) 836041382)) ? (arr_19 [i_6] [i_7 + 1] [i_9]) : (-306020906)))));
                    arr_30 [i_7] = ((/* implicit */int) ((max((var_6), (((((/* implicit */_Bool) arr_23 [i_1] [i_7] [i_7] [i_1])) ? (arr_9 [i_6] [i_7] [i_9]) : (arr_7 [i_1] [i_1]))))) >= (min(((-(arr_7 [i_7 + 1] [i_9]))), (((-1) - (16744448)))))));
                }
                for (int i_10 = 2; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    arr_33 [i_7] [i_6] [i_10] [i_10] [i_6] [i_7 + 2] = ((((/* implicit */_Bool) var_6)) ? (-1935444488) : (((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7 + 1] [i_7 - 1])) ? ((+(arr_20 [0]))) : ((~(arr_23 [i_1] [i_7] [i_1] [i_10 - 2]))))));
                    arr_34 [i_1] [19] [i_7] [i_7] = max((arr_22 [16] [i_7] [i_7 - 1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) -306020907))))));
                }
                for (int i_11 = 2; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_24 &= ((/* implicit */int) (((~(((arr_35 [i_1] [i_1] [1]) % (-2131872522))))) >= (((int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483636) : (-2147483646))))));
                    var_25 ^= max((max((arr_24 [i_11]), (arr_24 [i_11]))), (((((/* implicit */_Bool) arr_16 [i_7 - 1] [i_11 - 2] [i_11 + 2])) ? (1275780231) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_6]))))))));
                }
                var_26 = (-(1073725440));
            }
        }
        for (int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 25; i_13 += 4) 
            {
                var_27 = ((((int) 649103496)) ^ ((((!(((/* implicit */_Bool) var_0)))) ? (((arr_21 [i_1] [i_1] [8]) + (arr_36 [i_1] [i_1] [i_1] [i_1]))) : (arr_32 [i_12]))));
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (!(((/* implicit */_Bool) (+((-(arr_10 [i_13] [i_12] [i_1])))))))))));
            }
            arr_41 [9] = ((((/* implicit */_Bool) (-(arr_19 [i_1] [i_1] [i_12])))) ? (((int) arr_19 [i_1] [i_1] [12])) : (max((arr_7 [i_1] [11]), (arr_19 [i_1] [i_1] [i_1]))));
            var_29 = 909192007;
        }
        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            /* LoopSeq 3 */
            for (int i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                var_30 = ((int) var_4);
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    for (int i_17 = 4; i_17 < 21; i_17 += 2) 
                    {
                        {
                            var_31 = ((((/* implicit */_Bool) max((arr_36 [i_15] [2] [i_15] [i_17 - 3]), (1947843138)))) ? (arr_36 [i_14] [1] [i_16] [i_17 - 4]) : (((int) arr_36 [i_17 + 1] [i_17] [i_17] [i_17 + 1])));
                            var_32 = arr_50 [i_1] [i_1] [23] [23];
                        }
                    } 
                } 
            }
            for (int i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 24; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        {
                            arr_62 [i_19] = (+(max(((~(-1))), (((((/* implicit */_Bool) arr_16 [i_19] [i_18] [i_1])) ? (2147483584) : (arr_7 [i_14] [i_20]))))));
                            var_33 = ((((((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_19 - 1])) ? (var_10) : (arr_12 [i_18] [i_18] [i_19 - 1]))) / ((-(arr_15 [i_1] [i_19 - 1] [i_14] [i_19]))));
                        }
                    } 
                } 
                var_34 = ((/* implicit */int) max((var_34), ((-(arr_37 [i_1] [i_14])))));
            }
            for (int i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                var_35 = (-(min((((-1553061025) / (arr_32 [i_1]))), (var_11))));
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                {
                    for (int i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        {
                            var_36 = arr_51 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23];
                            arr_70 [i_1] [i_14] [i_23] [i_22] [24] [i_1] [18] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_35 [i_14] [i_22] [i_23]))))));
                            var_37 ^= ((2145386351) ^ (max((((int) -1)), ((+(449038324))))));
                        }
                    } 
                } 
                var_38 = ((max(((~(var_1))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (arr_67 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_55 [i_1] [i_14] [i_14] [i_21]))))) | ((-(min((-306020911), (arr_52 [i_14] [i_14] [16] [i_14] [i_14]))))));
                arr_71 [i_1] [i_14] [i_14] [i_1] = ((int) -868599166);
                /* LoopSeq 1 */
                for (int i_24 = 0; i_24 < 25; i_24 += 2) 
                {
                    var_39 *= ((((/* implicit */_Bool) min((306020918), (((int) var_3))))) ? (((int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) ((int) -909192008))) ? (((int) arr_14 [i_14] [i_24] [2])) : (((((-1722410121) + (2147483647))) >> (((arr_7 [i_1] [i_14]) + (1724200207))))))));
                    arr_74 [i_24] [i_21] [i_14] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_23 [i_1] [i_1] [i_21] [i_24]) / (arr_23 [0] [i_24] [i_21] [i_24]))))));
                }
            }
            arr_75 [i_1] = max((((((/* implicit */_Bool) arr_16 [i_1] [i_14] [i_1])) ? (arr_16 [i_1] [i_14] [i_14]) : ((-2147483647 - 1)))), (((602278129) % ((-2147483647 - 1)))));
        }
    }
    /* LoopSeq 2 */
    for (int i_25 = 4; i_25 < 23; i_25 += 4) /* same iter space */
    {
        var_40 = var_11;
        var_41 = ((/* implicit */int) max((var_41), ((~(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1578479791) : (306020891))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))));
        /* LoopSeq 2 */
        for (int i_26 = 0; i_26 < 25; i_26 += 4) /* same iter space */
        {
            arr_82 [1] [i_26] [13] = ((/* implicit */int) (((~(arr_51 [i_25] [i_25 + 1] [i_25 - 3] [i_25 - 1] [i_25 + 1] [i_25] [i_25 - 4]))) == (((/* implicit */int) ((arr_5 [i_25 - 4]) <= (1267223885))))));
            var_42 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_55 [i_25] [i_25 + 2] [i_25 - 2] [8]))))));
        }
        for (int i_27 = 0; i_27 < 25; i_27 += 4) /* same iter space */
        {
            arr_86 [20] [i_27] [i_25] = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 131071)) ? (-1599504188) : (arr_58 [22] [i_27] [20] [i_25] [i_27] [i_25]))))) ? (var_3) : (arr_15 [i_25 - 3] [i_25 - 4] [i_25 - 1] [i_25 - 4]));
            /* LoopNest 3 */
            for (int i_28 = 3; i_28 < 21; i_28 += 1) 
            {
                for (int i_29 = 3; i_29 < 24; i_29 += 2) 
                {
                    for (int i_30 = 2; i_30 < 24; i_30 += 2) 
                    {
                        {
                            var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 602278152)) ? (max((var_5), (821240585))) : ((-(var_11)))))) ? ((+(((112045831) & (var_13))))) : (((((/* implicit */_Bool) arr_48 [i_30] [19] [i_28 - 3] [i_29 - 2] [i_25 - 2] [i_29 - 1])) ? (arr_4 [i_29 - 1]) : (arr_68 [i_25 - 2] [i_29] [i_29] [i_29 - 3] [i_30 + 1]))));
                            var_44 = var_12;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_31 = 0; i_31 < 25; i_31 += 1) 
            {
                for (int i_32 = 0; i_32 < 25; i_32 += 2) 
                {
                    {
                        var_45 = ((int) ((((/* implicit */_Bool) min(((-2147483647 - 1)), (arr_79 [17])))) ? ((+(arr_57 [i_25 - 4] [i_27] [i_31] [i_25 - 4]))) : ((-(2147483647)))));
                        var_46 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) 449137382))))));
                        var_47 = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_59 [i_32] [i_25 + 1] [i_25 + 1])))), ((!(((/* implicit */_Bool) 1))))));
                    }
                } 
            } 
            var_48 = ((/* implicit */int) max((var_48), (((int) ((int) max((306020911), (var_7)))))));
        }
    }
    for (int i_33 = 4; i_33 < 23; i_33 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 25; i_34 += 2) 
        {
            for (int i_35 = 0; i_35 < 25; i_35 += 4) 
            {
                {
                    arr_110 [i_33] [i_33 - 3] = (~(min((arr_109 [i_33 - 3] [i_33 - 2] [i_33 + 1] [i_33 - 1]), (arr_109 [i_33 - 3] [i_33 - 1] [21] [i_33 + 1]))));
                    arr_111 [i_33] [i_33] [i_33] [i_33] = (+(arr_27 [i_33 + 1] [i_34] [i_35]));
                    arr_112 [i_33] [i_34] [i_35] [i_35] = min((((int) arr_67 [i_33] [i_34] [i_35] [i_34] [i_35] [i_35] [i_34])), ((~(arr_50 [i_33 - 4] [i_33 + 2] [i_33 - 4] [i_33 - 2]))));
                }
            } 
        } 
        arr_113 [i_33] [i_33 + 2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_51 [i_33 - 2] [i_33 + 2] [i_33 - 4] [i_33] [i_33] [i_33] [i_33 - 4]))))));
    }
}
