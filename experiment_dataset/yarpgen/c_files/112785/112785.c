/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_18 *= var_4;
                arr_7 [i_0] [19] [19] = 73;
                arr_8 [i_2] [1] [i_0] &= (((arr_3 [i_0 + 1] [i_1]) ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_2] [i_1] [i_0])));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] = var_9;
                            var_19 = 14625625879720259924;
                        }
                    }
                }
                var_20 -= (((!14) & 241));
                var_21 = ((arr_4 [i_0 - 2] [i_0 - 2]) ? (arr_10 [8] [i_1] [i_0]) : ((var_16 ? 22 : 14625625879720259944)));
                arr_17 [20] = 3503;
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_20 [i_0] [i_1] [i_6] [i_0] = ((10269994966432230261 > (arr_0 [1] [20])));
                var_22 |= ((~(arr_1 [17])));
            }
            arr_21 [i_0] = (((1 ? 18446744073709551611 : var_10)));
            arr_22 [20] [20] = -20928;
            arr_23 [i_0] [4] = (arr_13 [5] [8] [11]);
        }

        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_23 = (min(var_23, (arr_15 [11] [10])));
            var_24 = (min(var_24, var_1));
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            arr_29 [6] [6] [21] = (arr_13 [i_0] [i_8] [23]);
            var_25 = (max(var_25, ((((((0 ? 1 : 32756))) ? (((arr_24 [18] [i_8] [i_0]) ? var_3 : var_1)) : (arr_14 [23] [16] [16] [i_8] [17]))))));
            arr_30 [24] = (((((-20918 ? var_17 : var_2))) ? ((255 ? 1120004274222540920 : 12)) : (((arr_5 [6] [i_8] [i_0]) ? 5 : 20917))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 = (((6116183503142880720 + 27992) ^ (25689 % var_14)));
            arr_35 [20] [1] [i_9] = var_11;
            arr_36 [i_9] [i_9] = (~var_7);
        }
        var_27 = (arr_1 [24]);
        var_28 = (max(var_28, (((var_9 ? (arr_31 [i_0] [i_0] [3]) : var_11)))));
    }
    var_29 = ((((5624 ? (var_15 & 219) : 3280158725518349122)) % ((max(1, -20938)))));
    #pragma endscop
}
