/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((((var_1 ? (var_8 | var_10) : (var_5 | var_11)))) ? var_13 : (139 | 2096031032870417518));
                        arr_10 [i_0] [i_2] [i_1] [0] = (((var_0 && var_2) | (var_3 | var_7)));
                        var_14 &= ((((((var_2 | var_4) ? (var_1 | var_8) : var_0))) ? var_5 : ((var_9 | (var_13 | var_7)))));
                        arr_11 [i_1] [i_2] [i_0] [i_3] = ((((((var_6 ^ var_3) | var_3))) ? (((var_11 ? var_2 : var_9))) : (((((var_1 ? var_3 : var_2))) | var_13))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = var_10;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_16 [i_0] [3] [i_1] = (((var_1 | var_4) | (((var_5 | var_13) ? (var_3 | var_13) : (var_10 | var_2)))));
                        var_15 ^= ((((((var_0 ? var_11 : var_13)) | var_10)) | var_9));
                        var_16 -= (((var_2 | var_0) ? (((var_8 ? ((var_3 ? var_10 : var_10)) : var_10))) : (var_4 | var_8)));
                    }

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_17 = (((((((var_13 ? var_1 : var_11))) ? (var_2 | var_9) : var_13)) | (((var_1 ? var_1 : var_6)))));
                        var_18 = (((((var_8 / var_8) * (var_8 / var_2))) * (var_2 * var_3)));
                    }
                    arr_20 [i_1] [i_1] = ((((((var_4 | var_3) | ((var_6 ? var_12 : var_0))))) ? ((var_13 ? var_9 : var_13)) : (((var_1 | (var_8 | var_4))))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_19 = ((7184829966933813164 && -83) | ((var_6 | (16350713040839134103 | 17))));
                            var_20 = var_0;
                            arr_27 [i_1] [i_1] [19] [i_6] [i_7] = (((var_6 | var_5) | (((((var_8 ? var_5 : var_3))) ? (var_11 | var_4) : (var_2 | var_7)))));
                            var_21 = (max(var_21, ((((((var_0 | var_8) | (var_7 | var_0))) | (var_4 | var_1))))));
                            var_22 = (min(var_22, (0 | var_10)));
                        }
                        var_23 = (31 | 30436);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_24 = (((var_7 | var_6) | ((var_4 ? (var_6 | var_11) : (var_6 | var_9)))));
                            arr_34 [i_1] [i_1] [i_2] [i_8] [17] [i_1] = ((var_1 ? ((((var_10 ? var_4 : var_7)) | var_6)) : var_2));
                            var_25 = var_1;
                            arr_35 [i_1] [i_1] [8] [12] [17] = ((((((var_1 ? var_1 : var_8)) | ((var_6 ? var_4 : var_8)))) | var_1));
                            arr_36 [i_0] [i_1] [i_2] [1] [i_9] = var_13;
                        }
                        var_26 = (((219 | 1056690229433417875) ? (var_0 | var_13) : (var_10 | var_3)));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_27 = ((1 ? -4260442391873330890 : 36));

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_28 = ((var_3 ? var_10 : var_3));
                            var_29 = (((var_1 | var_7) ? var_7 : (var_11 | var_3)));
                            arr_43 [i_1] [i_1] = ((var_13 | (var_7 | var_7)));
                        }
                        for (int i_12 = 2; i_12 < 19;i_12 += 1)
                        {
                            var_30 = (var_6 | var_5);
                            var_31 = (var_3 | var_13);
                            arr_46 [i_0] [i_1] [i_2] [i_10] [i_1] = ((((var_0 ? var_2 : var_2)) | ((var_12 ? var_12 : var_11))));
                            var_32 = ((var_4 ? var_6 : var_8));
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_33 ^= ((((var_2 ? var_5 : var_4)) | var_0));
                            arr_51 [i_0] [i_1] [i_1] [i_10] [i_13] = var_0;
                            var_34 |= (var_3 | var_1);
                        }
                        for (int i_14 = 2; i_14 < 19;i_14 += 1)
                        {
                            arr_54 [i_0] [i_1] [i_2] [i_2] [i_1] [i_10] [i_1] = (var_1 | var_7);
                            arr_55 [i_0] [i_0] [i_1] [i_2] [i_1] [i_0] = ((var_0 ? var_11 : (var_2 | var_2)));
                            var_35 = var_13;
                        }
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_58 [i_1] [i_2] = var_5;
                        arr_59 [i_0] [i_1] [i_1] = (((((var_6 ? var_11 : var_2))) ? (((var_8 ? var_3 : var_3))) : ((var_3 ? var_13 : var_9))));
                    }
                }
            }
        }
    }
    var_36 = (((((var_7 | ((var_4 ? var_5 : var_8))))) ? (((((var_8 ? var_4 : var_12))) | (var_13 | var_7))) : (((((var_11 ? var_1 : var_6)) / var_10)))));
    #pragma endscop
}
