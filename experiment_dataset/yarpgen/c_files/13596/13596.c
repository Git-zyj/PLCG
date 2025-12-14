/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((~(min(var_1, ((var_16 ? var_13 : 0))))));
    var_18 = (max(var_18, ((((((~79224202) && ((min(var_12, 1371026478))))) ? 8582872656656230823 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (((arr_5 [i_0] [i_0]) <= (arr_2 [i_0 - 2])));
                var_20 &= var_5;
            }
        }
    }

    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_10 [i_2] [3] = (min((((arr_6 [i_2 - 2]) ? (arr_8 [i_3] [i_2]) : (arr_7 [i_2]))), ((((arr_8 [i_2] [i_3]) == 1)))));
            arr_11 [i_2 - 1] = ((~((((var_2 - 2698026914) <= 222647496)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_16 [i_2] [i_3] [i_4] [4] &= ((((min((var_2 < 79224186), (max(var_7, 1876010107))))) ? var_7 : -79224210));
                        var_21 = var_1;
                    }
                }
            }
            arr_17 [i_2 + 1] = (-(((arr_15 [6] [i_2 - 4] [i_3] [i_2 - 3]) * var_8)));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_25 [i_2] [7] [i_7] [i_8 - 3] [i_2] = (((arr_19 [i_2] [i_2] [i_2]) ? (arr_13 [18] [i_6]) : (var_3 ^ var_8)));
                        var_22 = ((((79224186 ? (arr_6 [i_2 - 2]) : var_9))));
                    }
                }
            }
            arr_26 [i_6] [i_6] [i_2] = (arr_14 [i_6] [i_6] [i_6] [i_2 - 3] [i_6]);

            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_23 = ((((var_15 % (arr_22 [i_2] [i_2 - 3] [i_2])) << (((arr_28 [i_2 - 1] [i_6]) % var_1)))));
                arr_30 [i_2] [i_9] [i_9] = ((arr_22 [i_9] [i_6] [i_2]) ? (2813612556 > var_5) : 12795979435735332838);
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {
                var_24 = (min(var_24, (arr_22 [i_2 - 1] [i_6] [i_10])));
                arr_33 [i_10] = ((((((1 || (arr_21 [i_10] [i_6] [i_6] [i_2]))))) && (((-1149471631 ? (arr_9 [i_2] [i_6] [i_2 - 1]) : (arr_9 [i_2] [i_6] [i_2 - 2]))))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_41 [i_12] [i_10] [i_10] [i_10] [i_2] = var_0;
                            var_25 += (((((-(((arr_18 [i_2]) ? 2147483647 : (arr_35 [i_2 - 3] [4] [i_2 - 1] [i_2])))))) ? var_11 : (((!(((-1876010107 ? var_8 : 0))))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 16;i_13 += 1)
            {
                var_26 &= ((79224202 || (((var_9 ? (arr_35 [i_2] [i_2] [i_2] [i_2]) : 1826504721)))));
                arr_45 [i_13] [i_13 + 3] [17] [17] = (arr_6 [i_6]);
            }
            var_27 = (((((arr_42 [i_6]) ? (((arr_22 [i_2] [i_2 - 2] [i_2]) + 662551874)) : (var_14 > var_4))) >= (((79224188 ? -var_8 : -47582)))));
            var_28 = (max(var_28, 2957889934));
        }
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 16;i_16 += 1)
                {
                    {
                        var_29 = ((-6 ? ((-((var_13 ? var_10 : var_16)))) : ((((arr_12 [i_2] [i_2] [i_2 - 2]) % (arr_52 [i_2] [i_15] [i_14] [i_2]))))));
                        var_30 = (((var_14 / var_9) - (((-(arr_50 [i_2] [i_14 + 1] [i_15 + 1] [i_16] [i_16]))))));
                    }
                }
            }
        }
        var_31 = (max(var_31, (((((max(15028155989249159845, var_13))) || (arr_23 [i_2] [i_2] [i_2] [i_2]))))));
        var_32 = -12;
        arr_54 [i_2] = 7;
    }
    var_33 = ((!((max(var_14, (((var_5 ? var_4 : var_15))))))));
    #pragma endscop
}
