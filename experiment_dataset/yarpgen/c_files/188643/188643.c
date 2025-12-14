/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = 2555034858657558751;
            var_21 += ((40 >> (9055 - 9032)));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [19] = (max(var_15, -206));
                            arr_14 [i_5] [i_4] [7] [i_2] [14] = ((var_2 ? ((((((-121 ? -9056 : 1040187392))) ? (var_9 | var_9) : var_13))) : (max(var_4, ((1040187388 ? var_6 : 231845151))))));
                        }
                    }
                }
            }
            var_22 *= ((2914116183 ? 1 : 9045));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_23 = (min(var_23, (~var_0)));
            arr_18 [i_0 - 1] [i_6 + 1] [1] &= ((1 == (!var_6)));
        }
        var_24 = -22;
        var_25 -= var_11;
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1)
    {
        var_26 -= (~(((40 ? var_2 : 1))));
        arr_23 [i_7] = ((-(!-9056)));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_27 = var_9;
                        var_28 ^= ((((8 ? (var_4 <= var_9) : ((var_19 ? var_2 : 9056)))) == ((((0 ? var_4 : 23723)) >> 1))));
                        var_29 += (-(max(var_4, ((3864735586 ? 9055 : -111)))));
                        var_30 = (((var_2 ? ((var_0 ? var_4 : -11935) : (10042 + var_3)))));
                        arr_31 [i_8] [i_8] [i_8] [i_9] [i_10] &= (((168 ? 1 : 1)));
                    }
                }
            }
        }
    }
    var_31 -= ((2147483647 << (17 - 17)));
    #pragma endscop
}
