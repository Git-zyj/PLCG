/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150311
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
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((var_12) ? (((/* implicit */int) arr_0 [6] [i_1])) : (-1691029444)))), (var_4)))) | ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_4)) : (663879332627574133LL)))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                arr_13 [i_0] [i_3] |= ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (-(((((((/* implicit */int) arr_7 [16] [i_1] [15U] [i_4])) + (var_1))) - ((+(((/* implicit */int) var_3)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                            {
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-2147483647 - 1))) / (-663879332627574130LL)));
                                var_19 = ((/* implicit */long long int) max((max((var_8), (100458794U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                                arr_18 [i_3] [i_3] [i_2] &= ((/* implicit */short) ((arr_6 [i_0] [i_3] [i_0] [i_3]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((1254405564U) | (100458794U)))) ? (max((((/* implicit */long long int) var_8)), (arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((arr_17 [i_5] [i_1] [i_2] [1] [i_1]) ? (arr_8 [i_3] [i_2 - 1] [i_2] [i_3] [i_5] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))))));
                                arr_19 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                                var_20 = max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [7LL] [6] [i_3] [i_1]))) : (var_10))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                var_21 *= ((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)28780)));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28780))) > (1840258196U))))));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2 - 1] [i_3] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_6 [i_3] [i_0] [i_0] [i_3]))))) | ((~(var_2)))));
                                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2 + 1] [i_2] [i_0] [i_0] [i_2] [i_2 - 1]))) : (arr_15 [i_0] [i_0])));
                                var_25 *= ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2 - 1] [i_3] [i_2] [i_2 + 2] [i_3] [i_2])) <= (((/* implicit */int) arr_12 [i_2 - 2] [i_3] [i_2] [i_2 - 3] [i_3] [i_2]))));
                            }
                            var_26 = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                arr_25 [i_0] [(signed char)2] [i_0] = arr_2 [i_1];
                var_27 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_28 [i_8] = ((/* implicit */_Bool) var_5);
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned int i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (int i_12 = 3; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_38 [i_8] [i_9] [i_10] [i_11] [i_10] [i_12] = max((((/* implicit */long long int) (-(((/* implicit */int) arr_27 [i_10 + 1] [i_10 - 1]))))), (((((((/* implicit */_Bool) arr_15 [i_8] [i_9])) ? (-663879332627574133LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)2] [i_12 + 3] [i_12 - 3]))))));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (var_0))))))));
                            }
                        } 
                    } 
                    var_29 = arr_33 [i_10];
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) arr_40 [i_13] [i_8]);
            arr_41 [i_8] [i_13] = arr_33 [i_13];
        }
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_35 [i_8] [i_14] [i_8]))) ? (max((((/* implicit */unsigned int) var_15)), (1840258196U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_8] [i_8] [i_8]))))))));
            var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_13))));
            var_33 = ((/* implicit */short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_10)) ? (arr_24 [i_8] [i_8] [i_8] [i_14] [i_14] [i_14]) : (arr_24 [i_14] [i_14] [i_8] [i_8] [i_8] [i_14])))));
            arr_44 [i_8] = var_13;
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_8] [i_8] [(signed char)14] [(_Bool)1] [i_8] [0]), ((short)28780))))) : ((~(((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))))));
            var_35 -= ((/* implicit */signed char) arr_29 [i_8] [11] [i_15]);
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                for (long long int i_17 = 3; i_17 < 13; i_17 += 2) 
                {
                    {
                        arr_51 [i_8] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) var_11);
                        var_36 = (-(arr_11 [i_17 - 3] [i_17] [i_17 - 2] [i_17] [i_8]));
                        var_37 = arr_46 [i_8] [(short)5];
                    }
                } 
            } 
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (+(max((arr_48 [i_8]), (arr_48 [i_8]))))))));
        }
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-663879332627574153LL)))) % (((/* implicit */int) ((signed char) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
    {
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((arr_53 [(_Bool)1] [i_18]) >= (((/* implicit */long long int) arr_52 [2] [i_18])))))));
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((arr_53 [(short)14] [i_18]) <= (((/* implicit */long long int) arr_52 [(short)4] [i_18])))))));
        arr_54 [i_18] [i_18] = ((/* implicit */_Bool) (+(((var_15) ? (((/* implicit */long long int) var_8)) : (var_2)))));
    }
    for (int i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
    {
        var_42 = (-2147483647 - 1);
        arr_57 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(arr_53 [i_19] [i_19])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_19] [i_19])) || (((/* implicit */_Bool) (~(arr_53 [i_19] [i_19]))))))) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 24; i_20 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 24; i_21 += 3) 
        {
            var_43 = ((/* implicit */short) var_0);
            arr_65 [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_58 [i_20]))));
            arr_66 [i_20] = arr_61 [i_20];
        }
        var_44 = ((/* implicit */unsigned int) arr_55 [i_20] [17]);
    }
}
