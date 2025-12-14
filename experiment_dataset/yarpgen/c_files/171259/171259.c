/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [11] [i_0] = var_14;
        var_18 = (-((-(max(2279694148500983491, 1)))));
        var_19 = (arr_0 [0] [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = ((~((~((var_10 ? var_8 : var_10))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 &= ((~(((max(1, 8707151187714264992))))));
            arr_9 [i_1] [i_1] = (!64096);
            var_21 = (!var_2);
            arr_10 [i_1] = var_17;
        }
        var_22 ^= (64096 * 0);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (((((!(arr_1 [20]))) ? (arr_11 [2] [i_3]) : (((!(arr_14 [4])))))));
        var_23 = (((-11737 ? var_15 : (~var_2))));
        var_24 = ((-948503364 ? -17218 : 1));
        var_25 = (arr_11 [i_3] [18]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_26 &= ((-(arr_11 [14] [i_4])));
        arr_18 [i_4] = var_16;
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_27 *= ((var_7 ? (arr_16 [i_5]) : var_16));
        var_28 *= var_7;
    }
    #pragma endscop
}
