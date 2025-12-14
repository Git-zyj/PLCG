/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~3535) < ((-28983 ? -5796139520132811142 : 25418))));
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_22 -= (arr_3 [i_0] [i_1]);

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_23 = (min(var_23, (((~(((((var_17 ? (arr_0 [i_2]) : (arr_6 [i_0])))) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_2]))))))));
                    arr_8 [i_2] [i_1] [i_2] [19] = (!12);
                    arr_9 [i_2] [i_2] [1] = ((~(arr_5 [i_2] [i_2] [18])));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_3] = ((0 ? 2974866433222648008 : 15928063199248709607));
                    arr_13 [i_0] [i_3] [2] = (~(((((arr_3 [i_1] [i_3]) && (arr_10 [i_1] [i_1] [0]))))));

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_24 += (((((((var_1 ? var_17 : (arr_16 [i_1 - 2] [i_3] [i_4])))) ? (((arr_7 [i_3] [15]) & (arr_11 [i_0] [i_1] [i_3] [i_0]))) : (arr_0 [i_1 + 2]))) - ((((((arr_1 [i_0] [i_1]) - var_6)))))));
                        var_25 = (max(var_25, (((((((max(var_5, var_0))) || var_12)) ? ((-((2518680874460842009 ? 2518680874460842009 : 11498719075453024316)))) : (((-((~(arr_3 [i_0] [i_0])))))))))));
                        var_26 = (min(var_26, (((((((arr_2 [i_1 + 4] [12]) ? (arr_2 [i_1 + 4] [i_1]) : (arr_2 [i_1 + 3] [i_3])))) ? ((-(((arr_14 [i_4] [i_3] [7] [i_0]) ? var_1 : (arr_4 [i_0] [7] [i_0]))))) : (!var_13))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_21 [10] [i_3] [i_3] = (((((-25390 ? -54 : (arr_6 [i_3])))) && (0 - 0)));
                            arr_22 [i_0] [i_1] [14] [i_3] [i_0] [i_0] |= arr_3 [i_4 - 1] [i_1 + 1];
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_27 = ((+(((arr_3 [16] [i_1 + 4]) ? (arr_16 [i_6] [i_1] [i_1]) : var_18))));
                        var_28 = (min(var_28, (((~(arr_10 [i_0 - 1] [i_1 - 2] [i_3]))))));
                        var_29 += (~((-(arr_7 [i_0] [i_3]))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_30 = (arr_15 [i_1 - 1] [i_1 + 3] [i_0 - 1]);
                        var_31 = ((((var_13 ? (arr_27 [4] [4] [i_3] [i_3]) : (arr_16 [1] [1] [i_3])))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_3] = (arr_27 [i_1 + 2] [i_1 + 3] [i_1] [i_3]);
                        var_32 -= arr_4 [i_0] [i_1] [17];
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8] &= ((!(arr_1 [18] [17])));
                    }
                }
            }
        }
    }
    var_33 = var_6;
    #pragma endscop
}
