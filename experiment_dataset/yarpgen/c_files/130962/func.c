/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130962
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((_Bool) arr_0 [i_0 - 1]);
            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(arr_4 [i_1] [(_Bool)1]))))));
            arr_5 [(_Bool)1] = (_Bool)1;
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_7 [i_0] [(_Bool)1]))) / (((/* implicit */int) arr_4 [i_2] [(_Bool)1]))));
            arr_10 [(_Bool)1] = ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                var_20 = ((/* implicit */_Bool) ((((_Bool) arr_6 [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_15 [i_4 + 1] [i_4])) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
                var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3] [(_Bool)1] [i_3]))));
            }
            var_22 = arr_1 [i_0] [(_Bool)1];
            arr_16 [i_3] = ((arr_0 [i_0]) || (((_Bool) arr_6 [i_0] [i_3] [i_3])));
            /* LoopNest 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
                            var_23 = (_Bool)1;
                            var_24 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                            arr_28 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)1] [i_6])) + (((((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1])) - (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [i_8] [(_Bool)0]))))) ? (((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 1])) : ((~(((/* implicit */int) (_Bool)1))))));
                        arr_33 [i_8] [i_0] [i_3] = ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_12 [i_3]))))));
                    }
                } 
            } 
        }
        var_26 ^= ((_Bool) var_15);
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_40 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0 - 1])) >> (((/* implicit */int) (_Bool)0))));
                    arr_41 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((arr_7 [i_11] [i_0 - 1]) ? (((/* implicit */int) arr_26 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])) : (((/* implicit */int) arr_7 [i_11] [i_10]))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), ((_Bool)1)));
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_51 [i_12] [(_Bool)1] [(_Bool)1] [i_12] [(_Bool)1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_47 [i_12] [i_13] [i_12]))))));
                        arr_52 [(_Bool)1] [i_13] [i_12] [i_13] [(_Bool)1] = (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_45 [i_12] [i_13]))))));
                        arr_53 [(_Bool)1] [i_13] [i_13] [(_Bool)1] [i_12] = arr_45 [i_12] [i_13];
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_58 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_28 = var_5;
                            var_29 -= ((/* implicit */_Bool) ((arr_49 [i_12] [i_13] [i_14] [i_15] [i_15] [i_14]) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) (_Bool)1))));
                            var_30 = arr_43 [i_14] [i_14 - 1];
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_31 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */_Bool) ((arr_45 [i_15] [i_13]) ? ((((_Bool)1) ? (((/* implicit */int) arr_47 [(_Bool)1] [(_Bool)1] [i_12])) : (((/* implicit */int) arr_46 [i_12] [i_12] [i_12])))) : (((arr_42 [(_Bool)1]) ? (((/* implicit */int) arr_62 [i_12] [i_13])) : (((/* implicit */int) arr_62 [i_12] [(_Bool)1]))))));
                        }
                        var_33 &= ((/* implicit */_Bool) ((arr_60 [i_12] [i_12] [i_14] [(_Bool)1] [i_15] [(_Bool)1] [i_15]) ? (((/* implicit */int) arr_60 [i_12] [i_13] [i_12] [(_Bool)0] [i_13] [i_15] [i_12])) : (((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
        } 
        arr_63 [i_12] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_12] [i_12] [i_12] [i_12]))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_43 [i_12] [i_12])) : (((/* implicit */int) arr_56 [i_12] [i_12] [(_Bool)1] [i_12] [i_12] [i_12] [i_12]))));
        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_60 [i_12] [(_Bool)0] [i_12] [(_Bool)1] [i_12] [i_12] [(_Bool)1])))) - (((arr_44 [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        arr_66 [i_18] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_46 [i_18] [(_Bool)1] [(_Bool)1]))));
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_36 = ((/* implicit */_Bool) ((arr_30 [i_18] [i_19] [(_Bool)1]) ? (((/* implicit */int) arr_19 [i_18] [i_19] [i_20])) : (((/* implicit */int) arr_4 [i_18] [i_19]))));
                    arr_73 [i_19] [i_19] [(_Bool)1] [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_67 [i_18]))))) ? (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) arr_39 [(_Bool)1] [i_19] [(_Bool)1]))))));
                    var_37 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_18] [i_18] [i_18] [(_Bool)1]))))) || (arr_3 [i_19] [i_19]));
                    var_38 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_43 [i_20] [i_19])) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [(_Bool)1] [(_Bool)1]))))));
                }
            } 
        } 
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        arr_76 [i_21] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
        arr_77 [i_21] = (((_Bool)0) || ((_Bool)1));
    }
    var_39 -= var_3;
    /* LoopSeq 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_40 -= ((((/* implicit */int) arr_1 [(_Bool)1] [i_22])) == ((+(((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) max((((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) >> (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            {
                                var_42 = arr_14 [(_Bool)1] [i_26] [i_26];
                                var_43 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((arr_24 [i_22] [i_23] [i_24] [i_25] [i_26] [i_23] [i_25]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_16))))));
                                var_44 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)0))));
                                var_45 += var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
        var_46 ^= (_Bool)1;
        arr_91 [(_Bool)1] = ((/* implicit */_Bool) max((max(((-(((/* implicit */int) arr_62 [i_22] [i_22])))), (((arr_88 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22] [(_Bool)1]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_54 [i_22] [i_22] [i_22] [(_Bool)1] [(_Bool)0])))))), (((/* implicit */int) arr_39 [i_22] [i_22] [i_22]))));
        var_47 = (!(((/* implicit */_Bool) (~(((/* implicit */int) min(((_Bool)1), (arr_61 [i_22] [i_22] [i_22] [i_22] [(_Bool)1] [i_22]))))))));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_48 &= ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_34 [i_27] [(_Bool)1])) == (((arr_39 [i_27] [i_27] [i_27]) ? (((/* implicit */int) arr_42 [(_Bool)1])) : (((/* implicit */int) arr_47 [(_Bool)1] [i_27] [(_Bool)1]))))))), (((((/* implicit */int) ((_Bool) var_14))) >> (((/* implicit */int) max(((_Bool)1), (arr_15 [i_27] [i_27]))))))));
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_49 -= ((_Bool) max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_39 [i_27] [i_28] [i_29])) ^ (((/* implicit */int) arr_19 [i_28] [i_28] [i_28]))))));
                        arr_105 [i_30] [(_Bool)1] [i_28] [i_30] = max((arr_2 [i_28]), (max(((_Bool)1), ((_Bool)1))));
                        var_50 = ((/* implicit */_Bool) min((((/* implicit */int) arr_59 [i_30] [(_Bool)1] [i_28] [i_28] [i_27])), (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_96 [i_27] [i_28] [(_Bool)0])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)0)))))));
                    }
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_27] [i_31] [(_Bool)1] [i_31] [i_28] [i_31] [i_27])) | (((/* implicit */int) arr_26 [i_27] [i_28] [i_29] [i_29] [i_31] [i_31] [i_31])))) % (((/* implicit */int) arr_23 [i_27] [i_27] [i_29] [(_Bool)1])))))));
                        var_52 = ((/* implicit */_Bool) max(((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (_Bool)1))))))), ((+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                    var_53 = arr_35 [i_28] [(_Bool)1];
                    arr_108 [i_29] [i_28] [i_27] = ((/* implicit */_Bool) ((max((max(((_Bool)1), (var_0))), ((_Bool)1))) ? ((+(((/* implicit */int) arr_99 [i_27] [i_28] [i_29])))) : (((((/* implicit */int) max((arr_19 [i_27] [i_27] [i_27]), ((_Bool)1)))) * (((/* implicit */int) (((_Bool)1) && ((_Bool)0))))))));
                    var_54 = (!(arr_56 [i_28] [(_Bool)1] [i_28] [(_Bool)1] [i_28] [i_27] [i_27]));
                }
            } 
        } 
        var_55 = ((/* implicit */_Bool) (+(min((((arr_14 [(_Bool)1] [i_27] [i_27]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_5), ((_Bool)1))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            {
                arr_113 [(_Bool)1] = var_7;
                arr_114 [(_Bool)1] = arr_109 [i_33];
                /* LoopNest 2 */
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                {
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        {
                            var_56 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_112 [i_33]), (var_5))))));
                            /* LoopSeq 3 */
                            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                            {
                                arr_122 [i_35] [i_35] = ((/* implicit */_Bool) ((max((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_46 [i_32] [(_Bool)1] [i_32])) + (((/* implicit */int) (_Bool)0)))))) + (((/* implicit */int) arr_119 [i_36] [i_35] [i_32] [i_32]))));
                                var_57 = (!((_Bool)0));
                                var_58 *= (!(((_Bool) arr_55 [i_32] [i_34] [i_35] [i_36])));
                            }
                            /* vectorizable */
                            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                            {
                                var_59 = (!((_Bool)1));
                                var_60 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_61 += arr_60 [i_32] [i_33] [i_34] [(_Bool)1] [i_35] [(_Bool)1] [(_Bool)1];
                            }
                            /* vectorizable */
                            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                            {
                                var_62 += ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                                var_63 |= ((/* implicit */_Bool) ((arr_50 [i_38] [i_38] [i_38] [i_38] [i_38] [(_Bool)1]) ? (((/* implicit */int) ((_Bool) arr_57 [i_32] [i_32] [i_32]))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_9))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
