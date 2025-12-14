/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 != (min(var_0, (min(2147483645, var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 ^= (arr_1 [i_0] [i_0]);
                        var_18 &= ((-2147483638 ? 4314656851763790058 : (arr_4 [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] = ((var_9 ? (((arr_1 [i_1 + 1] [i_1 - 3]) ? (arr_0 [i_2]) : var_2)) : var_15));
                            var_19 = ((var_11 ? (arr_11 [i_0] [i_4] [i_4] [i_4] [i_3 + 1] [i_1 - 1] [i_0]) : var_7));
                            var_20 = (var_14 ? (arr_8 [i_0] [i_1 + 1] [i_2] [i_3 + 2] [i_0]) : (arr_4 [i_1] [i_1]));
                            var_21 = (arr_1 [i_1 - 1] [i_1 - 1]);
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        var_22 -= (!var_9);
        arr_16 [i_5 + 1] = (((((max((min(var_12, 100)), (max(204, var_11)))))) & 18446744073709551601));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_23 *= var_5;
        var_24 = (max((((((550505351 ? var_3 : var_1))) ? var_12 : ((var_2 ? var_1 : var_6)))), var_10));
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_23 [i_7] [i_7] |= (~(min((~var_10), ((-4 ? var_0 : var_2)))));
        arr_24 [i_7] = (arr_0 [i_7]);
    }
    #pragma endscop
}
