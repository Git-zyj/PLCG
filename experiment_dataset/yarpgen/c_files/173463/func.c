/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173463
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
    var_19 -= var_4;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (_Bool)0);
        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) var_1))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) var_1))))) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 -= ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_4 [i_1] [i_2])) & (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned short) (_Bool)0)))));
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
            arr_11 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)17491)) + (((/* implicit */int) var_5)))));
        }
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_5] [i_4])) != (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_6)))))));
                    arr_19 [i_4] [i_4] = (_Bool)1;
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 2] [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_3] [i_4])) : (((/* implicit */int) var_8))));
                }
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4 + 1] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 2] [i_3])) : (((/* implicit */int) arr_9 [i_4 + 1] [(unsigned short)17]))));
                var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((/* implicit */int) (_Bool)1))));
                var_28 = var_6;
            }
            for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)2048))));
                            arr_28 [(unsigned short)4] [i_3] [i_1] = ((/* implicit */_Bool) (unsigned short)54880);
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3] [i_1]);
                /* LoopSeq 1 */
                for (unsigned short i_9 = 2; i_9 < 19; i_9 += 3) 
                {
                    arr_31 [i_1] [(unsigned short)3] [(unsigned short)3] [i_1] [(unsigned short)3] [(unsigned short)3] = ((_Bool) (!(((/* implicit */_Bool) var_11))));
                    arr_32 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40216)) ? (((/* implicit */int) arr_12 [i_9 - 1] [i_9 - 2])) : (((/* implicit */int) arr_12 [i_9 - 1] [i_9]))));
                    arr_33 [i_9] [i_6] [i_3] [(unsigned short)7] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40216)) > (((/* implicit */int) (_Bool)1))));
                }
                var_31 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)0)))));
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((unsigned short) arr_12 [i_6 + 2] [i_6 + 2]));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_1] [i_3] [i_6 - 1] [i_11 - 1])) - (((/* implicit */int) var_0))));
                            arr_40 [i_1] [(_Bool)1] [i_6 + 1] [i_10] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)63498))));
                        }
                    } 
                } 
            }
            for (unsigned short i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned short i_13 = 1; i_13 < 19; i_13 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                    var_35 -= ((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((/* implicit */int) arr_46 [i_13 + 2] [i_12 + 2] [i_1]))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) (_Bool)0);
                    arr_50 [i_1] [i_14] [i_12 + 2] [i_14] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_26 [i_12 + 2] [i_12 + 1] [i_12 + 2]))));
                    arr_51 [i_1] [(_Bool)1] [i_14] [i_1] = ((/* implicit */unsigned short) var_8);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        arr_57 [i_1] [i_3] [i_12 + 1] [i_15] [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1] [i_3]))));
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) (unsigned short)10055)) : (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)44178)))))))));
                        arr_58 [i_1] [i_1] [i_12] [i_16] = ((/* implicit */unsigned short) arr_39 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 + 2] [i_12] [i_12]);
                        var_38 = ((/* implicit */_Bool) ((unsigned short) arr_15 [i_1] [i_12 - 1] [i_1]));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) var_0)))))));
                        var_40 = ((/* implicit */_Bool) var_6);
                    }
                    for (unsigned short i_18 = 3; i_18 < 19; i_18 += 3) 
                    {
                        var_41 -= (!(((/* implicit */_Bool) arr_45 [i_18] [i_15] [i_12] [i_12 - 1] [i_3] [i_1])));
                        arr_65 [i_1] [i_3] [(unsigned short)0] [i_15] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((arr_41 [(unsigned short)12] [(unsigned short)12]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))));
                    }
                    var_42 = ((/* implicit */_Bool) max((var_42), ((_Bool)0)));
                    arr_66 [i_1] [i_3] [i_3] [i_15] [i_12] = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) arr_22 [i_12 - 1] [i_3])) : (((/* implicit */int) var_4))));
                    var_43 -= ((/* implicit */unsigned short) arr_21 [i_12 + 2]);
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_12 + 2])) ? (((((/* implicit */_Bool) (unsigned short)19349)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_25 [i_19] [i_12] [i_12 + 2] [i_3] [i_1] [i_1])))) : (((/* implicit */int) (!((_Bool)0))))));
                    var_45 = ((/* implicit */_Bool) var_10);
                    var_46 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))));
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 4; i_20 < 17; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_54 [i_12] [i_3] [i_1]))))) || (arr_70 [(unsigned short)3] [i_12] [i_12 + 2] [i_12 + 1] [i_12] [i_12])));
                            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) ((arr_18 [i_12 + 1] [i_12 + 1] [i_1] [(unsigned short)16]) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : ((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    for (unsigned short i_23 = 0; i_23 < 21; i_23 += 2) 
                    {
                        {
                            arr_78 [i_1] [i_1] [i_22] [i_22] [i_1] = ((/* implicit */unsigned short) ((arr_17 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 + 2] [i_22]) ? (((/* implicit */int) arr_17 [i_12 + 1] [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_22])) : (((/* implicit */int) (_Bool)1))));
                            var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_9 [i_12 - 1] [(_Bool)1]))));
                        }
                    } 
                } 
            }
            var_50 -= var_14;
            var_51 -= ((/* implicit */_Bool) (unsigned short)55195);
            var_52 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1] [i_3])) ? (((/* implicit */int) arr_77 [(unsigned short)8] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_3])) : (((/* implicit */int) arr_77 [i_1] [i_3] [i_1] [i_3] [i_3] [i_1] [i_1]))));
            var_53 = ((/* implicit */unsigned short) (!(var_8)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_24 = 3; i_24 < 19; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    {
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_24 + 1] [i_24 - 2])) ? (((/* implicit */int) arr_16 [i_24 - 3] [i_24 - 1])) : (((/* implicit */int) var_15))));
                        var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)44198)))))));
                        var_56 = ((/* implicit */unsigned short) ((var_15) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) var_15))))));
                        arr_86 [i_26] [i_25] [i_24] [i_24] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (!((_Bool)1)));
                    }
                } 
            } 
            var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_1])))))));
        }
    }
}
