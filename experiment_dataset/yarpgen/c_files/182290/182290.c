/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_0] = var_2;
                    var_11 &= (((((var_7 ? ((var_5 ? var_1 : var_0)) : var_3))) ? var_0 : ((var_1 ? var_1 : ((var_0 ? var_1 : var_2))))));
                    arr_9 [i_0 + 1] [i_0 + 1] [i_2] = ((((((((1473107991 ? 3380484129145579452 : 3380484129145579452))) ? 3380484129145579429 : ((3380484129145579435 ? 15066259944563972186 : 0))))) ? var_3 : ((var_7 ? var_0 : ((var_3 ? var_1 : var_3))))));
                    var_12 = var_2;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0 + 1] [i_3] [i_3] = min(((var_2 ? var_5 : var_6)), (max(var_5, var_9)));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_13 = ((var_3 ? ((var_6 ? var_8 : var_4)) : var_3));
                            var_14 = var_6;
                            var_15 -= ((var_4 ? var_3 : var_2));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_16 = ((((((((var_4 ? var_5 : var_5))) ? var_9 : var_3))) ? ((((min(var_7, var_4))) ? var_3 : var_2)) : var_1));
                            arr_21 [i_1] [i_3] [i_4] = (((((var_4 ? var_1 : var_0))) ? ((((max(var_8, var_8))) ? var_3 : (max(var_1, var_6)))) : ((min(var_8, var_0)))));
                            var_17 -= var_5;
                        }

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_18 = (((((((max(var_5, var_2))) ? var_6 : var_0))) ? var_9 : ((var_6 ? ((var_4 ? var_1 : var_6)) : var_7))));
                            arr_25 [i_7] [i_4] [i_3] [i_1] [i_7] |= (((var_8 ? var_6 : var_9)));
                            var_19 = var_8;
                        }
                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_3] [i_4 - 1] [i_8] = ((((((((var_4 ? var_7 : var_4))) ? ((var_0 ? var_9 : var_2)) : var_7))) ? var_3 : ((var_6 ? var_9 : (((min(var_2, var_6))))))));
                            arr_30 [i_3] = ((min(((var_7 ? var_2 : var_9), var_1))));
                        }
                        var_20 = (((((var_9 ? var_0 : var_1))) ? (((var_1 ? var_0 : var_3))) : ((var_0 ? var_5 : var_2))));
                        arr_31 [i_0 + 1] [i_1 - 2] [i_3] [i_4] = (((min(var_2, ((var_0 ? var_4 : var_5))))) ? (((((var_3 ? var_3 : var_2))) ? (max(var_5, var_5)) : var_2)) : var_5);
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_21 = var_3;

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_22 = ((((((((var_8 ? var_2 : var_8))) ? var_8 : var_0))) ? ((-var_3 ? var_8 : var_6)) : var_8));
                            var_23 |= ((((min(var_9, var_5))) ? ((var_3 ? var_8 : var_1)) : (((var_6 ? var_7 : var_3)))));
                            arr_38 [i_0] [i_0] [i_3] [i_9] [i_10] = ((((((max(var_7, var_3))) ? var_5 : ((min(var_7, var_6)))))) ? var_2 : var_0);
                        }
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_42 [i_11] [i_1] [i_1] [i_0] |= var_7;
                        arr_43 [i_3] [i_3] [i_3] [i_3] [i_0] = (max(var_6, ((var_6 ? var_6 : var_5))));
                        var_24 = ((var_3 ? var_7 : (max(var_5, ((min(var_0, var_0)))))));
                    }
                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        var_25 = var_4;

                        /* vectorizable */
                        for (int i_13 = 4; i_13 < 18;i_13 += 1)
                        {
                            var_26 -= ((var_8 ? var_9 : var_9));
                            var_27 = var_1;
                        }
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_28 = (min((min(((var_6 ? var_8 : var_4)), var_5)), (((((var_6 ? var_9 : var_4))) ? ((var_5 ? var_8 : var_3)) : (min(var_5, var_4))))));
                            var_29 = (min(var_5, (((((var_2 ? var_6 : var_6))) ? (((var_1 ? var_2 : var_6))) : ((var_7 ? var_8 : var_9))))));
                            var_30 -= ((var_3 ? (((var_8 ? var_6 : var_2))) : (max(var_0, var_7))));
                        }
                    }

                    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        var_31 = ((var_9 ? (((((var_3 ? var_4 : var_8))))) : ((var_5 ? (!var_5) : var_8))));

                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_32 |= var_0;
                            arr_59 [i_3] = (((((var_6 ? var_1 : var_4)) ? ((var_4 ? var_8 : var_5)) : (min(var_4, var_8)))));
                        }
                        var_33 = ((3380484129145579452 ? ((var_7 ? var_9 : var_9)) : var_0));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
                    {
                        arr_63 [i_17] [i_3] [i_3] [i_0 + 1] = var_6;

                        for (int i_18 = 2; i_18 < 18;i_18 += 1)
                        {
                            var_34 = var_1;
                            var_35 = var_7;
                        }
                        var_36 = ((var_5 ? var_5 : var_3));

                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            arr_69 [i_0] [i_3] = var_7;
                            var_37 = var_9;
                        }
                        for (int i_20 = 0; i_20 < 19;i_20 += 1)
                        {
                            var_38 *= var_0;
                            var_39 = ((((var_1 ? var_0 : var_2))) ? var_0 : var_3);
                            var_40 += ((var_0 ? var_5 : var_9));
                            var_41 = var_5;
                            var_42 = ((var_0 ? var_6 : -var_0));
                        }
                        var_43 = var_9;
                    }
                    for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
                    {
                        arr_75 [i_21] [i_21] [i_3] [i_3] [10] [i_0] = ((var_9 ? (((((var_7 ? var_1 : var_7))) ? var_2 : ((min(var_3, var_4))))) : ((var_3 ? ((var_7 ? var_1 : var_3)) : (max(var_5, var_8))))));
                        var_44 = var_6;
                        var_45 *= ((((max(var_5, var_4))) ? (((var_2 ? var_6 : var_2))) : (max(var_9, var_6))));
                    }
                }
                var_46 = (((((var_5 ? var_9 : var_1))) ? ((min(var_6, var_0))) : ((var_5 ? var_5 : var_3))));
                var_47 = (((((var_1 ? var_0 : var_7))) ? ((var_3 ? var_6 : var_3)) : var_2));
                var_48 = (max(((((var_7 ? var_2 : var_6)))), (min(var_3, ((var_0 ? var_9 : var_5))))));
                var_49 = ((var_5 ? ((var_4 ? var_1 : var_0) : var_1)));
            }
        }
    }
    #pragma endscop
}
