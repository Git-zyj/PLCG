/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185978
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = max((((_Bool) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_5))))), (((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])) >= (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    arr_8 [i_0] [i_0] [i_0] = ((_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_6 [i_1 - 1] [i_0] [i_0]))));
                }
            } 
        } 
        var_12 *= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_0 [i_0]))) / (((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_13 *= ((_Bool) (_Bool)1);
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_14 = (_Bool)0;
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_15 *= ((((/* implicit */int) arr_10 [i_5])) > (((/* implicit */int) (_Bool)1)));
                            arr_20 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_21 [(_Bool)1] [i_4] = ((_Bool) min(((!((_Bool)1))), ((_Bool)1)));
            arr_22 [i_3] [i_4] = ((_Bool) ((_Bool) (_Bool)1));
            var_16 *= ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) var_6)))));
        }
        arr_23 [i_3 + 1] [(_Bool)1] = (_Bool)1;
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] = var_6;
        var_17 = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_18 -= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_11))) << (((/* implicit */int) ((((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [i_11])) < (((/* implicit */int) var_4)))))));
                var_19 = ((arr_33 [i_10]) || (var_4));
                var_20 = ((_Bool) var_2);
            }
            var_21 = ((/* implicit */_Bool) max((var_21), (var_8)));
            var_22 = ((/* implicit */_Bool) min((var_22), (var_11)));
            var_23 = arr_29 [i_9 - 1] [i_9 - 1];
            arr_35 [i_9] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [(_Bool)1] [i_9 - 1] [i_9 - 1]))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_38 [i_9] = (!(arr_36 [i_9] [i_12]));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_5))) * ((-(((/* implicit */int) var_11)))))))));
            var_25 = var_5;
            var_26 *= ((((/* implicit */int) ((_Bool) var_0))) == (((arr_30 [i_9 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [(_Bool)1])))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            var_27 = ((/* implicit */_Bool) min((var_27), ((!(arr_41 [i_13 + 1] [i_13 + 1] [i_9 - 1])))));
            var_28 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((((/* implicit */int) arr_33 [i_13])) & (((/* implicit */int) var_10)))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) arr_32 [i_9 - 1]))))));
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_47 [i_9] [i_13 + 1] [i_14 - 1] [i_9] [i_15] = ((_Bool) ((((/* implicit */int) arr_45 [i_15] [i_15] [i_14] [i_13 + 1] [i_9 - 1])) > (((/* implicit */int) var_4))));
                        var_29 -= ((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) arr_42 [i_9 - 1] [(_Bool)1] [i_15]))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_29 [i_9 - 1] [i_9])))) * (((/* implicit */int) arr_32 [i_9 - 1])))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        arr_51 [i_16] [i_16] = arr_43 [(_Bool)1] [i_16] [i_16];
        var_31 = ((((/* implicit */int) ((_Bool) arr_42 [i_16] [i_16] [i_16]))) >= (((arr_42 [i_16] [i_16] [i_16]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_42 [i_16] [i_16] [i_16])))));
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            arr_55 [i_16] [i_17 + 1] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_29 [i_17 + 1] [i_17 + 1])))), (((/* implicit */int) arr_48 [i_17 + 1]))));
            var_32 *= arr_39 [i_16];
            var_33 = ((_Bool) (-(((/* implicit */int) arr_45 [i_16] [i_17] [i_16] [i_17 + 1] [i_16]))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_34 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_16] [i_17 + 1])) >> (((/* implicit */int) (_Bool)1))));
                        var_35 = arr_44 [i_16] [i_17 + 1] [i_16];
                    }
                } 
            } 
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_46 [(_Bool)1] [i_17 + 1] [i_17] [i_17 + 1]))), (((((/* implicit */int) var_5)) << (((/* implicit */int) var_0)))))))));
        }
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            arr_63 [i_16] [i_16] = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) >> ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1))));
            var_37 *= (_Bool)0;
        }
    }
    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
    {
        var_38 = ((/* implicit */_Bool) min((var_38), (arr_46 [(_Bool)1] [i_21 - 1] [i_21 - 1] [i_21 - 1])));
        /* LoopSeq 3 */
        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
        {
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((var_1) ? (((arr_45 [i_22 - 1] [i_21 - 1] [i_22 - 1] [i_22 - 1] [i_21 - 1]) ? (((/* implicit */int) arr_34 [i_22 - 1] [i_22 - 1] [i_22])) : (((/* implicit */int) arr_59 [(_Bool)1] [i_22] [i_21] [i_21])))) : ((((-(((/* implicit */int) var_10)))) * (((/* implicit */int) ((_Bool) arr_43 [i_21 - 1] [i_22] [(_Bool)1]))))))))));
            var_40 &= arr_31 [(_Bool)1] [(_Bool)1] [(_Bool)1];
            var_41 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) ((_Bool) min(((_Bool)1), ((_Bool)0)))))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                var_42 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_21] [i_23])) * (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_42 [i_23] [(_Bool)1] [i_23])) : (((/* implicit */int) min((arr_61 [i_23] [i_23]), (arr_46 [(_Bool)1] [i_23] [i_23] [(_Bool)1])))))), (min(((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_37 [i_21] [(_Bool)1]))))));
                arr_72 [i_21] [i_23] [i_24 + 1] [i_23] = arr_43 [(_Bool)1] [i_23] [(_Bool)1];
            }
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                arr_76 [i_23] = var_8;
                /* LoopNest 2 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */_Bool) min((var_43), (arr_56 [i_27] [(_Bool)1] [(_Bool)1] [i_23])));
                            var_44 *= ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            }
            /* LoopNest 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_88 [i_29] [i_28] [i_23] [i_21 - 1] = ((_Bool) ((_Bool) var_2));
                        var_46 = max((((_Bool) var_0)), (((_Bool) ((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                        var_47 = ((/* implicit */_Bool) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) (!(var_5)))) : (((((/* implicit */int) arr_84 [i_21 - 1])) / (((/* implicit */int) arr_50 [i_21 - 1]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            arr_91 [i_21 - 1] [i_21 - 1] [i_21] [i_28] [(_Bool)1] [i_29] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_49 [i_21 - 1])) : (((/* implicit */int) (_Bool)1))));
                            arr_92 [i_23] = var_10;
                            var_48 = var_5;
                            arr_93 [i_30] [i_21 - 1] [i_28] [i_21 - 1] [i_23] [i_21 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_71 [i_21] [i_23] [i_28] [i_23]))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (var_6)));
                        }
                        /* vectorizable */
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_5))));
                            var_51 = arr_53 [i_21 - 1];
                            var_52 = (((-(((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) arr_85 [i_21] [i_21 - 1] [i_23])));
                            var_53 *= (_Bool)1;
                            var_54 *= ((/* implicit */_Bool) (((!((_Bool)1))) ? ((-(((/* implicit */int) arr_59 [i_21] [(_Bool)1] [i_29] [i_31])))) : (((/* implicit */int) ((_Bool) var_4)))));
                        }
                    }
                } 
            } 
        }
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    {
                        var_55 = ((/* implicit */_Bool) (((~(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))) * (((/* implicit */int) min((var_2), (min((arr_84 [i_34 - 1]), ((_Bool)1))))))));
                        arr_104 [i_34 - 1] [i_34] [i_34] [i_21 - 1] = (_Bool)1;
                    }
                } 
            } 
            var_56 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) arr_64 [i_32] [i_21 - 1]))), (((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_64 [i_32] [i_21]))))));
        }
        var_57 = (_Bool)1;
        var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((((/* implicit */int) arr_79 [(_Bool)1] [(_Bool)1] [i_21] [i_21] [i_21 - 1])) * (((/* implicit */int) var_11)))))));
    }
    var_59 = ((((/* implicit */int) max((var_5), (var_8)))) >= (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_9)))));
    var_60 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) var_11)))) - (((((/* implicit */int) var_10)) * (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) var_2))))));
}
