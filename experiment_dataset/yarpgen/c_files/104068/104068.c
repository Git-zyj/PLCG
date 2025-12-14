/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [7] = (max((((((var_4 ? var_10 : 0)) >> (~18446744073709551615)))), (var_0 & 0)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_12 += ((var_5 ? var_0 : (((((-127 - 1) != 120)) ? (!var_10) : ((var_9 ? 18446744073709551593 : (arr_8 [8] [i_1] [9] [i_3] [i_1] [i_2])))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 *= (arr_5 [1] [i_3] [i_3]);
                            var_14 = (((((max(50, -96))) ? (223 >= 19) : (max(-3420, var_11)))));
                        }
                    }
                }
            }
        }
        var_15 = (((((~(arr_9 [i_0])))) ? (((((arr_5 [8] [i_0] [14]) ? 15560014860434249663 : (arr_6 [5] [i_0] [i_0] [i_0]))) >> (4806400622311381156 - 4806400622311381104))) : -330612572752360566));
        arr_12 [i_0] [4] = (arr_3 [i_0] [i_0]);
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_16 = (((((var_0 - var_1) ? ((~(arr_14 [i_5] [i_5]))) : 91))) ? (arr_14 [i_5] [i_5]) : (max(((var_4 ? (arr_14 [i_5] [i_5]) : (arr_14 [i_5] [i_5]))), ((0 ? var_6 : var_5)))));
        var_17 = -7;
    }
    var_18 = var_2;
    #pragma endscop
}
