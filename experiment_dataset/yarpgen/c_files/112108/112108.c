/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((16876292686360183136 ? -1140660596 : 25644))), ((var_5 ? var_8 : (((var_12 ? -1140660596 : var_7)))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 = ((-1140660580 ? -1140660580 : (-1140660585 > 1140660584)));
        var_15 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (max(var_16, (((0 ^ (arr_5 [i_1]))))));
        var_17 = ((!(-51 | -1140660580)));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_18 |= 1140660573;
                    var_19 = (arr_13 [i_4 + 1]);

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_20 = ((min(16669891435206398948, (((~(arr_9 [i_4])))))));
                        var_21 = (max(var_21, ((min((max(var_9, (~-1140660585))), (((min(-1140660593, var_7)))))))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        var_22 += var_12;
                        var_23 = ((((min((var_6 / 30426731), ((var_11 ? (arr_9 [i_2]) : -1140660585))))) ? (arr_17 [20] [i_4 + 2]) : ((((~var_11) < ((0 << (1140660605 - 1140660592))))))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_24 = 21884;
                        var_25 = (((arr_11 [i_2] [i_2] [i_2]) - 3931543185284168049));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_26 |= (arr_15 [i_2] [i_3] [i_3] [1] [i_3] [23]);
                                arr_26 [i_8] [i_8] = 49;
                                arr_27 [17] [i_3] [i_2] |= (~0);
                                arr_28 [i_2 - 1] [i_3] [i_4 + 2] [i_3] [i_9] = -1140660579;
                            }
                        }
                    }
                }
            }
        }
        var_27 |= (max((-1140660571 >= 42724), (((arr_8 [i_2 - 1]) & (arr_8 [i_2 + 3])))));
    }
    var_28 = (!var_2);
    #pragma endscop
}
