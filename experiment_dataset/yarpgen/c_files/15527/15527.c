/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = 0;
                var_10 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [14] [i_3] = (((9223372036854775807 ? -3724055119154029341 : 4611686018427387904)) / (max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0]), (min(-46103335117800691, -1682262543970436433)))));
                            var_11 = min(35046933135360, -9223372036854775793);
                        }
                    }
                }
            }
        }
    }
    var_12 ^= var_5;
    var_13 = (min((min(2859832163801745623, var_5)), (min(var_8, var_7))));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = var_5;
        arr_14 [9] = var_2;
        arr_15 [4] = (arr_12 [i_4] [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_26 [i_4] [i_4] [7] [5] [i_5] = (arr_22 [i_5 - 2]);
                        var_14 = (max(var_14, ((((((-1682262543970436433 ? var_9 : (arr_22 [11])))) && (arr_11 [i_5 - 1] [3]))))));
                        arr_27 [i_5] [i_5] [i_7] = ((!(arr_16 [i_4] [i_4] [i_5])));
                    }
                }
            }
        }
        arr_28 [i_4] = ((!((((-9223372036854775807 - 1) ? 1682262543970436409 : -1734677966912879943)))));
    }
    #pragma endscop
}
