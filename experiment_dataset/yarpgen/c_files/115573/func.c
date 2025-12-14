/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115573
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) (((_Bool)1) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])));
        var_12 ^= ((/* implicit */long long int) (-(arr_0 [i_0 + 1])));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (+(((int) 1372175279))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) ((arr_5 [i_1 + 1] [i_1 + 1]) ^ (((/* implicit */long long int) arr_0 [i_1 + 1]))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            var_14 = var_0;
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) arr_12 [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 + 1])) : (((/* implicit */int) arr_9 [i_4])));
                        var_16 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))) | (((long long int) arr_15 [i_3] [i_3] [i_4]))));
                        arr_16 [(_Bool)1] [i_3] [i_4] [(_Bool)1] [i_1 + 1] = ((((/* implicit */int) arr_8 [i_1 + 1])) << ((((-(var_9))) - (592268488))));
                    }
                } 
            } 
            arr_17 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) >> (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((int) arr_0 [i_1 + 1]))) : (((long long int) -1LL))));
        }
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_24 [i_1] [i_5] [i_6] [i_6 - 1] = ((/* implicit */int) ((arr_0 [i_1 + 1]) < (var_6)));
                    var_17 = ((/* implicit */long long int) ((var_10) ? (arr_23 [i_1 + 1] [i_1 + 1]) : (arr_23 [i_1 + 1] [i_1 + 1])));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_28 [i_7 + 1] [i_7 + 1]))))) ? (((var_3) - (-1LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_7] [i_7 + 1])) + (((/* implicit */int) var_1))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_19 = ((/* implicit */_Bool) arr_12 [i_7]);
            var_20 = ((/* implicit */_Bool) arr_15 [18] [i_8] [i_8]);
            var_21 = ((/* implicit */long long int) (+(arr_18 [i_8] [i_7] [i_7 + 1])));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_36 [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_6))) + (var_7)));
            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_7 + 1]))));
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_31 [i_9] [i_7])) ? (((/* implicit */long long int) 512330576)) : (-1LL))) << ((((+(arr_0 [i_7 + 1]))) + (1478642683)))));
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 18; i_10 += 3) 
            {
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_24 = (!(((/* implicit */_Bool) -4030651874847841298LL)));
                        arr_43 [i_7 + 1] [i_10] [i_7 + 1] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */long long int) (~(2060553525)))) : (arr_5 [i_7] [17])));
                        arr_44 [i_10] [10] [i_7] [i_10] = ((/* implicit */_Bool) ((arr_1 [i_7 + 1]) ? (((/* implicit */int) arr_9 [i_7 + 1])) : (((/* implicit */int) arr_9 [i_10 - 3]))));
                        var_25 = (+(((arr_4 [i_7] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7]))) : (var_4))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_32 [i_7])) ? (((/* implicit */long long int) var_5)) : (var_3))), (var_3))) > (((long long int) arr_34 [i_7] [i_7]))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 19; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) var_3);
                    var_28 = ((/* implicit */long long int) min((((arr_22 [i_12 - 2]) ? (((/* implicit */int) arr_22 [i_12 - 2])) : (((/* implicit */int) var_10)))), (((arr_12 [i_7 + 1]) >> (((var_3) - (5944551437054440179LL)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        var_29 = arr_42 [i_14 + 1] [10LL];
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((((860086336) - (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) -24870268)))))) ? (((/* implicit */long long int) -1691096415)) : (2181639096601195101LL)));
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
    {
        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9LL)) ? (-271621082) : (((/* implicit */int) (_Bool)1))))) : (7LL)));
        var_33 = (((((-(var_3))) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_3 [i_17])) * (arr_42 [i_17] [14]))) - (1569148394))));
        /* LoopSeq 3 */
        for (long long int i_18 = 1; i_18 < 15; i_18 += 1) 
        {
            arr_67 [i_18 - 1] [i_18 + 1] [i_18] = -1;
            var_34 = (!(((/* implicit */_Bool) -2145119077)));
        }
        for (int i_19 = 1; i_19 < 15; i_19 += 1) 
        {
            arr_70 [i_17] = arr_19 [i_19];
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                arr_73 [i_17] [i_17] [i_19 - 1] [i_17] = ((/* implicit */_Bool) var_0);
                /* LoopNest 2 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_35 -= ((/* implicit */long long int) ((218186618) / (((int) var_8))));
                            var_36 = ((/* implicit */_Bool) var_2);
                            var_37 = ((((/* implicit */int) arr_33 [i_21 - 1] [i_22])) <= (((/* implicit */int) arr_62 [i_17])));
                        }
                    } 
                } 
            }
        }
        for (int i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 16; i_25 += 1) 
                {
                    for (long long int i_26 = 1; i_26 < 15; i_26 += 4) 
                    {
                        {
                            var_38 = (!((!(var_1))));
                            var_39 ^= ((/* implicit */long long int) (_Bool)1);
                            var_40 = ((((int) var_2)) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
                        }
                    } 
                } 
                var_41 = arr_79 [i_17] [(_Bool)1];
            }
            for (long long int i_27 = 2; i_27 < 14; i_27 += 2) /* same iter space */
            {
                arr_90 [i_17] [i_27 - 2] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_72 [i_27] [i_27 - 2] [i_27] [i_17])) <= (((long long int) var_1))));
                arr_91 [i_17] [i_17] [15LL] [i_27] = ((/* implicit */long long int) (-(((10) ^ (arr_14 [i_17] [i_23] [i_27] [i_27])))));
            }
            for (long long int i_28 = 2; i_28 < 14; i_28 += 2) /* same iter space */
            {
                arr_95 [i_17] [5] [i_17] = ((/* implicit */long long int) arr_19 [i_28 + 1]);
                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)0)))))))));
                /* LoopSeq 3 */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_43 = ((/* implicit */long long int) arr_29 [i_17] [i_17]);
                    var_44 = (_Bool)1;
                }
                for (int i_30 = 0; i_30 < 16; i_30 += 3) 
                {
                    var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_17] [i_17] [i_17] [13]))));
                    /* LoopSeq 1 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_46 = var_8;
                        arr_104 [i_30] [i_30] [i_30] [i_30] [i_30] [i_31] [i_30] = (~(var_9));
                        arr_105 [i_30] [i_23] [i_23] [i_30] [i_30] = ((/* implicit */int) (((_Bool)1) ? (((arr_37 [12LL] [i_17]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) arr_71 [i_28 - 2]))));
                    }
                }
                for (int i_32 = 0; i_32 < 16; i_32 += 2) 
                {
                    var_47 ^= ((((/* implicit */_Bool) arr_58 [i_17] [i_23] [i_28])) ? (arr_7 [i_17] [i_32]) : (((/* implicit */long long int) ((/* implicit */int) ((-1754942708744022467LL) > (((/* implicit */long long int) arr_72 [i_17] [i_23] [i_23] [i_32])))))));
                    var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (34359738367LL))))));
                }
                arr_110 [i_28] [i_28] [i_23] [i_17] = ((/* implicit */int) var_0);
            }
            var_49 = ((/* implicit */long long int) var_6);
        }
        var_50 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_17] [i_17])) ? (arr_49 [i_17] [i_17]) : (arr_37 [i_17] [i_17])));
    }
    var_51 = ((/* implicit */int) ((_Bool) max((var_3), (((/* implicit */long long int) var_10)))));
}
