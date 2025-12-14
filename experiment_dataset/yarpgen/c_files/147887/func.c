/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147887
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = (!((_Bool)1));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_3] = (!((!((!((_Bool)0))))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] = (!((!((!(var_5))))));
                                arr_18 [i_0] [i_3] [i_2] [i_3] [i_3] = (!((!((!(var_9))))));
                                var_13 = ((/* implicit */_Bool) min((var_13), ((!((_Bool)1)))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] &= (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))));
                    var_14 = ((/* implicit */_Bool) max((var_14), ((!((!((!((_Bool)1)))))))));
                    arr_20 [i_2] [i_2] [i_2] [i_2] = (!((!((!((_Bool)1))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_23 [i_0] = (!((!((!((_Bool)1))))));
                        var_15 = ((/* implicit */_Bool) max((var_15), ((!((_Bool)0)))));
                        arr_24 [i_5] [i_5] [i_2] [i_1] [i_0] = (!((!((!((_Bool)1))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_28 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_6] = (!((!((_Bool)1))));
                        var_16 = (!((!((!(var_2))))));
                        var_17 = (!((!((!(var_7))))));
                        var_18 = (!((!((_Bool)1))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_8] [i_7] [i_8] [i_9] = (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))));
                                arr_38 [i_8] [i_1] [i_1] [i_8] = (!((!((!(arr_15 [i_0] [(_Bool)1] [i_7] [i_8] [i_9]))))));
                                arr_39 [(_Bool)1] [i_8] [i_7] [i_8] [i_9] = (!((!((!((_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_46 [i_10] [i_10] [(_Bool)1] [i_1] [i_10] = (!((!((!(var_10))))));
                                var_19 = (!((!((!(var_1))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_49 [i_0] [i_1] [i_7] [i_12] = (!((!((!((_Bool)0))))));
                        var_20 = (!((!((!((_Bool)1))))));
                        var_21 = (!((!((_Bool)1))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            var_22 = (!((_Bool)1));
                            arr_56 [i_0] [i_0] [i_0] = (!((!((!(arr_33 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [i_14]))))));
                            arr_57 [i_14] [i_13] [i_7] [i_1] [i_0] = (!((_Bool)0));
                            var_23 = (!((!((!(arr_22 [i_0] [i_7]))))));
                        }
                        var_24 = (!((!((!(arr_42 [i_0] [i_1] [i_7] [(_Bool)1] [i_1]))))));
                        arr_58 [i_0] [i_0] [i_0] = (!((!((!(var_0))))));
                        arr_59 [i_0] [i_0] [i_0] [i_0] = (!((!((!(arr_43 [i_1] [i_0] [i_7] [i_1] [i_0]))))));
                        arr_60 [i_0] [(_Bool)1] [i_7] [i_0] = (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)0))))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_25 = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                        var_26 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_65 [i_0] = (!((!(var_8))));
                        var_27 = (!((!((_Bool)0))));
                    }
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_70 [i_17] [i_17] [i_17] [i_0] = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) arr_25 [i_0]))))))));
                    arr_71 [i_17] [i_17] [i_17] [i_0] = (!((!((!((_Bool)1))))));
                    arr_72 [i_0] [i_0] [i_17] = (!((!((!((_Bool)0))))));
                    arr_73 [i_0] [i_0] [i_0] [i_17] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_76 [i_17] [i_18] = (!((!((!((_Bool)1))))));
                        arr_77 [i_17] [i_17] [i_1] [i_1] [i_17] = (!((!((!((_Bool)0))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) (-((+((-(((/* implicit */int) (_Bool)1))))))));
                            arr_84 [i_0] [i_17] [i_1] [i_17] [i_19] [i_20] = (!((_Bool)0));
                        }
                        /* vectorizable */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_88 [i_0] [(_Bool)1] [i_17] [i_21] &= (!((!((_Bool)1))));
                            var_29 ^= (!((!(arr_3 [i_0]))));
                        }
                        var_30 = (!((!((!((_Bool)1))))));
                        arr_89 [i_19] [i_17] [i_17] [i_0] = (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                        {
                            arr_93 [i_17] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (!((!((!(arr_85 [i_0] [i_0] [i_0] [i_19] [i_22 - 1]))))));
                            arr_94 [i_0] [i_1] [i_17] [i_19] [(_Bool)1] = (!((!((!((_Bool)0))))));
                            arr_95 [i_17] [i_0] [i_17] [i_17] [i_19] [i_22] = (!((!((!(arr_45 [(_Bool)0] [i_1] [i_17] [i_19] [i_22]))))));
                            var_31 -= (!((!((_Bool)0))));
                        }
                        var_32 -= (!((!((!(var_8))))));
                    }
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            {
                                var_33 = (!((!((!(var_5))))));
                                var_34 = (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) max((var_35), ((!((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))))));
                }
                arr_107 [i_1] = (!((!((!((_Bool)1))))));
                arr_108 [i_0] [i_0] [i_0] = (!((!((!(arr_104 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            {
                arr_115 [i_26] [i_27] = ((/* implicit */_Bool) (~((~((~(((/* implicit */int) (_Bool)1))))))));
                var_36 = (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_37 = (!((!((_Bool)1))));
    var_38 = (!((!((!((_Bool)1))))));
}
