/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = (arr_3 [i_0] [i_1] [i_1]);
                            arr_11 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = min(((~(arr_5 [i_3] [i_3 - 1] [i_2 + 2] [i_0 + 1]))), (arr_5 [i_3] [i_3 - 1] [i_2 + 2] [i_0 - 1]));
                            arr_12 [6] [i_1] [i_1] [i_1] [i_1] [i_1] &= (min((min((min(var_16, var_12)), var_10)), (min(((((arr_5 [i_0] [i_1] [i_0] [i_3]) + 171))), var_10))));
                            arr_13 [i_1] [i_1] [i_2] [i_3] = 3424154079;
                        }
                    }
                }
                arr_14 [i_1] [i_1] = var_13;
                var_18 *= 3424154079;
            }
        }
    }
    var_19 = (max(3424154079, 84));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 3; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_20 *= var_7;
                        var_21 = (((arr_22 [i_4] [i_7 - 3] [i_7] [i_7]) ? 52356 : (arr_22 [i_4] [i_7 - 2] [i_7] [i_7])));
                        arr_25 [i_7] [i_4] [i_4] [i_4] = ((~(arr_20 [i_7] [i_7] [i_7 - 3] [i_7])));
                    }
                    for (int i_8 = 3; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        var_22 = (((arr_24 [i_6 - 2] [i_6] [i_8 + 1] [i_8]) ? (arr_27 [i_6 - 2] [i_8] [i_8 + 1] [i_8]) : 162));
                        arr_28 [i_4] [i_5] [i_6] [i_8] = 1583558920;
                        var_23 = (~(arr_22 [i_4] [i_6 - 2] [i_8 - 1] [i_8 - 2]));
                    }
                    arr_29 [i_4] = arr_26 [i_4] [i_5] [i_4] [i_4];
                    arr_30 [i_4] [i_4] = arr_26 [i_4] [i_5] [i_6] [i_6];
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_24 = ((var_15 ? var_10 : (((var_3 ? (arr_32 [i_4] [i_5] [i_4] [i_4]) : (arr_21 [i_4] [i_4]))))));
                    var_25 = ((((min(var_10, (arr_27 [i_4] [i_4] [i_5] [i_9])))) ? ((min((((~(arr_20 [i_4] [i_4] [i_5] [i_9])))), (arr_22 [i_4] [i_5] [i_5] [i_4])))) : ((-(((arr_16 [i_4]) ? (arr_21 [i_4] [i_4]) : var_17))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_26 = (max((((var_17 ? (arr_33 [i_5]) : (arr_38 [i_4] [i_4] [i_4] [i_4] [i_4])))), (min((4294967293 % var_1), (arr_17 [i_4])))));
                                var_27 = -54;
                                var_28 = (((-(arr_37 [i_4] [i_4] [i_9] [i_10] [i_9]))));
                            }
                        }
                    }
                    var_29 = ((~((((((arr_33 [i_5]) ? var_11 : var_9))) ? ((171 << (89 - 66))) : (arr_31 [i_9])))));
                    var_30 = ((min(var_15, 7113819419159836722)));
                }
                var_31 = var_7;
                var_32 = (arr_20 [i_4] [i_4] [i_5] [i_4]);
            }
        }
    }
    var_33 = var_16;
    #pragma endscop
}
