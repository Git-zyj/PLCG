/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(214, 41));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [8] = var_2;
        var_12 = ((-((32 ? 42719 : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = (max(var_13, (arr_0 [i_1])));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_14 = ((arr_13 [i_2] [i_3 + 1] [i_4 - 1] [i_3 + 1] [i_4 - 1]) != 42);
                            var_15 = ((~(arr_14 [i_2] [i_1] [i_3 + 1] [i_3] [i_4 - 1])));
                        }
                    }
                }
                var_16 = -1237797107;
                var_17 = (min(var_17, (((6971621333606110761 ? (arr_4 [i_0] [i_0] [1]) : (arr_12 [i_2] [i_0] [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_18 = 59528;
                            var_19 = (arr_12 [i_0] [i_5] [i_2] [i_0] [i_0]);
                            var_20 = (max(var_20, ((((((1 && (arr_4 [12] [i_0] [i_2]))))) * (arr_16 [i_0] [i_5 - 1] [i_5 - 1] [i_6 - 1])))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [1] [i_1] [i_1] [i_7] = (~var_3);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = (!203);
                        var_22 = 11475122740103440866;
                    }
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_23 = (min(var_23, ((((!42) ? (~-18583) : var_7)))));
                    var_24 = ((214 ? 13995 : 166));
                    var_25 += ((1237797077 | (arr_16 [i_0] [i_1] [i_2] [i_9])));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    var_26 = (arr_26 [i_1]);
                    arr_31 [i_0] [i_1] [i_2] [i_1] = ((!((((arr_10 [i_1] [i_2] [15] [i_1]) ? (arr_16 [i_2] [i_2] [i_2] [i_2]) : 214)))));
                    arr_32 [14] [i_1] [i_1] [i_10] [i_0] [9] = ((~(arr_29 [i_0])));
                }
            }
            var_27 = (max(var_27, (arr_5 [i_1] [i_1])));
            var_28 = (min(var_28, (((((arr_29 [i_1]) ? 1 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            var_29 = arr_2 [i_0];
        }
        arr_33 [i_0] &= (!22);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_30 = 68719474688;
        arr_36 [i_11] = var_9;
    }
    var_31 += (min((((739331601 || 1) ? -9876 : 37643)), 0));
    var_32 *= ((!(!var_4)));
    #pragma endscop
}
