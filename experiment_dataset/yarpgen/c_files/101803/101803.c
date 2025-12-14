/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (var_9 % var_6);

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_10 &= (((arr_6 [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])));
            var_11 = -var_9;

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                arr_10 [i_2] [9] [i_1] [i_2] = (arr_8 [i_2 + 2] [i_2] [i_2 - 1]);
                arr_11 [i_0] [5] [i_2] = (567221416 - 2277);
                arr_12 [i_2] = -6;
                var_12 -= ((var_2 ? 12445 : ((3727745885 ? 53091 : 2))));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_13 = ((2 ? var_5 : (~60)));
                var_14 = var_0;
                var_15 = (~3727745880);
            }
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_4] = ((11 ? var_1 : var_5));
            var_16 -= 53091;
            arr_19 [i_4] [i_0] = var_3;
            arr_20 [i_0] [i_4] [i_0] = ((3727745880 ? 1 : var_8));
        }
        arr_21 [i_0] = var_4;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] = ((11 * ((var_9 ? var_0 : var_3))));

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_17 = (max(var_17, var_5));
            var_18 = (min(var_18, var_5));
            var_19 = (min(var_19, (((var_7 ? var_4 : 567221432)))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_30 [i_5] [i_7] [i_5] = (0 + 15);
            arr_31 [i_5] = 1;
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_20 = (min(var_20, var_8));
        arr_34 [i_8] = var_5;
    }
    var_21 = var_6;
    #pragma endscop
}
