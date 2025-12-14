/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1712
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
    var_13 = var_12;
    var_14 = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) / (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))))) / (((/* implicit */int) (signed char)-19))));
    var_15 = var_3;
    var_16 = min((var_11), (var_11));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((arr_2 [i_0 + 1] [i_0]), (arr_2 [i_0 - 3] [i_0])))), (((((/* implicit */int) arr_2 [i_0 + 1] [i_0])) - (((/* implicit */int) var_1))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((signed char)-9), (arr_8 [i_0] [i_0 + 1])))) : (((/* implicit */int) min((var_1), (arr_8 [i_0] [i_0 + 1]))))));
            var_18 -= var_9;
            var_19 = arr_3 [i_1];
        }
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = arr_8 [i_2 + 1] [i_2 - 1];
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                for (signed char i_5 = 1; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_22 [i_2] [i_3] [(signed char)8] [(signed char)6] [i_6] = var_7;
                            var_20 = var_0;
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1]))));
        }
        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            var_22 = arr_19 [i_2] [i_2] [i_7] [i_7];
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = ((signed char) (signed char)115);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_8] [(signed char)14] [i_10])) - (((/* implicit */int) arr_10 [i_8] [i_7]))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) arr_17 [i_2])) + (((/* implicit */int) arr_25 [i_7] [i_2]))))));
                            arr_33 [i_10] [(signed char)0] [i_7] [i_9] [(signed char)10] &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)115)) - (((/* implicit */int) (signed char)57))));
                            var_25 = ((signed char) arr_25 [i_7] [i_2]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_11 = 2; i_11 < 16; i_11 += 3) 
                {
                    var_26 ^= var_6;
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        arr_38 [i_2] [i_2] [i_2] [i_11] [i_12] = ((signed char) var_4);
                        var_27 = var_0;
                    }
                    var_28 = arr_14 [i_11 - 2] [(signed char)8];
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)103)) && (((/* implicit */_Bool) var_7))));
                }
                for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_30 = ((signed char) (signed char)89);
                    arr_41 [i_2] [i_7] [i_7] [i_2] [i_13] [i_13] = arr_13 [i_2] [i_13] [i_2 + 2];
                }
                /* LoopNest 2 */
                for (signed char i_14 = 4; i_14 < 16; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_31 = arr_23 [i_2] [i_2];
                            arr_47 [i_14] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) arr_7 [i_2] [i_14] [i_15])))) + (((/* implicit */int) arr_44 [i_2 + 1] [i_14 - 2] [i_2 + 1] [i_15]))));
                        }
                    } 
                } 
            }
            arr_48 [i_2] = arr_43 [i_7] [(signed char)14] [i_2 + 3] [i_2 + 3];
            arr_49 [i_2] = ((signed char) arr_30 [i_2] [i_7] [i_7] [i_7] [i_2 + 1] [i_7] [i_2 - 1]);
        }
        for (signed char i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            var_32 += var_4;
            var_33 = arr_17 [i_2];
            arr_52 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-122)) ? (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) (signed char)43)))) : (((/* implicit */int) (signed char)-58))));
            arr_53 [(signed char)13] [(signed char)5] [i_2] = arr_17 [i_2];
        }
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_2] [i_2] [(signed char)3] [i_2] [i_2 - 1] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 3])) : (((/* implicit */int) ((signed char) var_1)))));
        /* LoopNest 3 */
        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            for (signed char i_18 = 1; i_18 < 15; i_18 += 3) 
            {
                for (signed char i_19 = 3; i_19 < 15; i_19 += 1) 
                {
                    {
                        arr_63 [i_19] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_3))));
                        var_35 = ((signed char) ((((/* implicit */int) (signed char)126)) - (((/* implicit */int) arr_3 [i_2]))));
                        arr_64 [(signed char)7] [i_17] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (signed char)93)) : (((/* implicit */int) (signed char)-4))));
                        arr_65 [i_2] [i_19] [i_2] [i_19] [i_2] = ((signed char) (signed char)-77);
                        var_36 = ((signed char) var_10);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_20 = 2; i_20 < 15; i_20 += 3) 
        {
            var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_2] [(signed char)6])) / (((/* implicit */int) arr_57 [i_2]))));
            var_38 = ((signed char) (signed char)-118);
            var_39 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) arr_43 [i_2] [i_2] [(signed char)3] [i_20 + 1]))));
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 17; i_21 += 2) 
            {
                for (signed char i_22 = 1; i_22 < 13; i_22 += 1) 
                {
                    for (signed char i_23 = 1; i_23 < 15; i_23 += 3) 
                    {
                        {
                            var_40 = arr_16 [i_2] [i_2];
                            arr_78 [i_2] [(signed char)14] [i_21] [i_22 + 2] [i_2] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_73 [i_2 + 2] [i_2 + 2] [i_21] [i_21] [i_21] [i_2 + 2]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
            arr_79 [i_2] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) (signed char)25))));
        }
    }
    for (signed char i_24 = 1; i_24 < 14; i_24 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_25 = 2; i_25 < 16; i_25 += 2) 
        {
            for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
            {
                for (signed char i_27 = 1; i_27 < 16; i_27 += 3) 
                {
                    {
                        arr_89 [(signed char)13] [(signed char)13] [i_24] [(signed char)16] [(signed char)16] = var_2;
                        arr_90 [i_24 - 1] [i_24] [i_24 - 1] [i_27] [i_24 + 2] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_25 [i_24 + 1] [i_24]), ((signed char)10)))), (((((/* implicit */int) arr_88 [i_24] [i_24 + 1] [i_24 + 1] [i_26] [i_24 + 1] [i_27 - 1])) * (((/* implicit */int) (signed char)-47))))));
                        var_41 += ((signed char) max((arr_45 [i_25] [i_25] [(signed char)6] [(signed char)8]), ((signed char)46)));
                        /* LoopSeq 4 */
                        for (signed char i_28 = 0; i_28 < 17; i_28 += 4) 
                        {
                            arr_95 [i_28] [i_27] [i_24] [i_24] [i_24 + 2] [i_24 + 2] = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) var_6)))) + (((/* implicit */int) ((signed char) arr_82 [i_25 + 1])))));
                            arr_96 [i_24] [i_24] [i_24] [i_27] [i_24] = ((/* implicit */signed char) min((((/* implicit */int) max((min(((signed char)-116), (arr_57 [(signed char)1]))), (max((arr_34 [i_24] [i_25] [i_26] [i_27] [i_26]), (var_3)))))), (((((/* implicit */int) (signed char)25)) & (((/* implicit */int) (signed char)(-127 - 1)))))));
                        }
                        for (signed char i_29 = 2; i_29 < 16; i_29 += 1) 
                        {
                            arr_99 [i_24] [i_26] [i_24] [(signed char)3] [i_25 + 1] = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */int) (signed char)96)) - (((/* implicit */int) arr_57 [i_27 + 1]))))));
                            arr_100 [i_24] [(signed char)13] [(signed char)13] [i_24] [i_29 - 1] = (signed char)-6;
                            arr_101 [i_24] = max((var_1), (min((var_12), (((signed char) (signed char)107)))));
                        }
                        for (signed char i_30 = 2; i_30 < 15; i_30 += 3) 
                        {
                            arr_104 [i_24] = var_3;
                            arr_105 [i_26] [i_26] [i_26] [i_26] [i_24] = (signed char)75;
                        }
                        for (signed char i_31 = 3; i_31 < 13; i_31 += 3) 
                        {
                            arr_108 [i_24] = min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-69)) && (((/* implicit */_Bool) arr_44 [i_24 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1]))))), (max(((signed char)-106), (arr_44 [i_24 + 1] [i_25 - 2] [i_25] [i_25 + 1]))));
                            arr_109 [i_24] [i_25] [i_24] [i_27] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_87 [i_27 - 1])) && (((/* implicit */_Bool) (signed char)92)))) || (((/* implicit */_Bool) arr_70 [i_24] [i_24]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_32 = 0; i_32 < 17; i_32 += 4) 
        {
            for (signed char i_33 = 2; i_33 < 14; i_33 += 4) 
            {
                {
                    var_42 = ((/* implicit */signed char) max((((((/* implicit */int) (signed char)-75)) + (((/* implicit */int) (signed char)3)))), (((/* implicit */int) max((arr_98 [i_24] [i_24] [i_24] [i_24 - 1] [(signed char)14]), ((signed char)-100))))));
                    /* LoopNest 2 */
                    for (signed char i_34 = 1; i_34 < 15; i_34 += 4) 
                    {
                        for (signed char i_35 = 3; i_35 < 15; i_35 += 3) 
                        {
                            {
                                var_43 = (signed char)124;
                                var_44 = ((/* implicit */signed char) ((((((/* implicit */int) arr_86 [(signed char)15] [i_32] [i_33] [i_24])) + (((/* implicit */int) max((var_10), (var_7)))))) - (((/* implicit */int) max((var_1), ((signed char)127))))));
                                var_45 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_13 [i_32] [i_33 + 3] [i_35 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
