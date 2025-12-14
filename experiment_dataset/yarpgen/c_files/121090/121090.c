/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (arr_4 [1]);
                arr_5 [i_0] [i_1] [i_0] = (min((((arr_4 [i_0]) ? var_6 : -199)), ((65497 ? var_7 : (arr_4 [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (arr_10 [i_4 - 1] [i_4 + 1]);
                                var_21 = (((arr_9 [i_0] [i_1] [7] [7] [i_4 - 2]) > 5459));
                            }
                        }
                    }
                    var_22 = 65486;
                    arr_13 [i_0] = (arr_12 [i_0]);

                    for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_23 = (var_8 + 65501);
                        var_24 = (1848121080 ? (arr_6 [i_0] [i_1] [8] [i_5 - 1]) : var_5);
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_0] = ((~(~12960057879805582080)));
                        arr_20 [i_0] [9] [i_0] [3] = 124;
                    }
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    var_25 = var_7;
                    var_26 = ((-(arr_0 [i_0] [i_0])));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((1903745383 ? 547322364 : 248));
                    var_27 = (!50);
                    var_28 ^= (((arr_17 [i_1 - 1] [i_1 + 1] [10] [i_7 + 1] [i_7 - 1]) * -547322381));
                }
                for (int i_8 = 3; i_8 < 8;i_8 += 1)
                {
                    var_29 += var_11;
                    var_30 = (max(var_30, var_1));
                    arr_28 [i_0] = (~-65486);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [5] [i_8] [i_0] [i_0] = var_3;
                                var_31 ^= (min(65497, -26799));
                                var_32 = (min((((((547322364 ? (arr_30 [i_0]) : var_0))) ^ (-1553904011 ^ -8661159175888570104))), (arr_34 [1] [i_9] [1] [1] [i_0])));
                                arr_36 [i_0] [i_9] [3] [i_1 - 1] [3] [i_0] = ((1 ? (-2000234988 * -var_6) : -var_9));
                            }
                        }
                    }
                }
                for (int i_11 = 3; i_11 < 8;i_11 += 1)
                {
                    var_33 = var_17;
                    var_34 = (((((min(-7295, 50))) * -65494)));
                }
            }
        }
    }
    var_35 = (~var_13);
    #pragma endscop
}
