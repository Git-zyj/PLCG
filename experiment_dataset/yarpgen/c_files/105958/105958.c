/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = ((var_10 ? var_2 : (min((max(var_2, var_14)), ((min(var_4, var_3)))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_20 = 237;
            arr_4 [i_0] [i_1] [9] = 0;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_13 [i_0] [i_2] [i_3] = -var_5;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_21 = var_1;
                            arr_18 [i_0] [i_2] [i_3] [i_3] [i_0] [i_0] [i_5] = (!0);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_3] [10] [8] [0] [2] [i_3] &= ((var_17 ? var_0 : var_4));
                            arr_22 [i_0] [i_2] [i_3] [i_4] [1] = var_1;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] = ((var_3 ? (~var_15) : ((var_6 ? var_9 : 127))));
                            arr_28 [i_0] [i_2] [8] [i_2] [i_7] = (((((var_10 ? 127 : 121))) ? ((6587856860850598713 ? 4294967164 : 1)) : (~var_10)));
                        }
                        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_8] [i_3] [14] [i_2] [i_3] [i_0] |= ((var_9 ? 1462 : -168));
                            var_22 = (min(var_22, (((6587856860850598685 ? (~-6587856860850598713) : 4294967163)))));
                        }
                        var_23 = var_15;
                        arr_32 [i_0 - 4] [i_0] [i_2] [i_3] [i_4] [i_4] = ((1 ? var_14 : -1975952525));
                        arr_33 [i_3] [i_2] [i_2] [i_3] &= var_7;
                    }
                }
            }

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_24 = var_12;
                arr_38 [i_0] [i_0] [1] [i_9] = var_1;
            }
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_42 [i_0] [4] [i_0] = var_16;
                arr_43 [i_0] [i_0] [15] = var_3;
                var_25 ^= -var_0;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_49 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_12] = var_13;
                            arr_50 [i_0] [i_2] [i_10] [i_11] [i_0] [i_11] [i_0] = ((var_4 ? var_14 : var_15));
                            var_26 = (((6587856860850598713 ? var_10 : var_9)));
                            var_27 = ((var_16 ? var_2 : var_9));
                            var_28 = ((var_17 ? var_12 : var_7));
                        }
                    }
                }
                arr_51 [i_0] [i_0] [i_10] = (((((4294967177 ? 100 : var_5))) ? (-2147483647 - 1) : 3912685403));
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_29 ^= ((var_14 ? 1167 : var_13));
                        arr_57 [6] [6] [i_0] = var_6;
                    }
                }
            }
        }
        for (int i_15 = 1; i_15 < 13;i_15 += 1)
        {
            arr_62 [i_0] [i_0] [i_0] = (((var_13 ? var_1 : var_8)));
            arr_63 [4] [4] &= ((var_10 ? var_14 : var_15));
            arr_64 [i_0] [i_0] [i_0] = ((var_11 ? 75 : var_2));
        }
        var_30 = (~-6587856860850598703);
    }
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        var_31 &= var_14;
        arr_67 [i_16] = var_17;
        arr_68 [i_16] = (min(((100 ? -6587856860850598714 : 6587856860850598726)), 127));
    }
    var_32 = min((((var_17 ? var_9 : (min(-30349, var_9))))), var_12);
    #pragma endscop
}
