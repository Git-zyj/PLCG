/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 -= ((var_4 ? (arr_1 [i_0]) : var_5));
        var_12 ^= 18446744073709551615;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = var_0;
        var_14 = (18446744073709551590 ? (arr_4 [i_1]) : 18446744073709551599);
    }
    var_15 = var_4;

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = (arr_1 [i_2]);
        arr_8 [i_2] = ((var_6 ? ((18446744073709551615 ? 15 : 1561790965)) : (arr_3 [i_2])));
    }
    var_16 = var_7;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_11 [i_3] = 1;
        var_17 = ((((var_6 ? (arr_10 [i_3]) : 18446744073709551610))) ? var_2 : var_9);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            var_18 = ((var_4 ? var_4 : (arr_9 [i_5 - 3])));
            var_19 ^= 14288924714517914354;
            var_20 ^= (arr_3 [i_4]);
            var_21 = (((arr_9 [i_5]) ? (((arr_9 [i_5]) ? var_8 : 18446744073709551615)) : (arr_17 [i_5 + 1] [i_5 - 2] [i_5 - 3])));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_26 [i_6] [i_5] [i_8 + 1] [i_7] [i_8 + 1] |= (((((var_4 ? var_0 : (arr_4 [i_6])))) ? var_2 : (((var_7 ? var_10 : 63583)))));
                            arr_27 [i_4] [i_5] [i_6] [i_5] [i_8 + 1] = var_4;
                            var_22 = ((18446744073709551615 ? 1 : 5));
                            var_23 = (arr_10 [i_6]);
                        }
                    }
                }
            }
        }
        arr_28 [i_4] [i_4] &= var_2;
        var_24 = (((((arr_20 [i_4] [i_4] [1] [i_4]) ? var_3 : (arr_20 [i_4] [0] [0] [i_4])))) ? ((3002419166278668366 ? 18446744073709551602 : 18446744073709551611)) : var_9);
        arr_29 [i_4] [i_4] = 1;
    }
    #pragma endscop
}
