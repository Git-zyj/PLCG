/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(1, 36707));
        arr_3 [6] = 18269424912562880607;
        arr_4 [1] = arr_0 [i_0];
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (arr_6 [i_1 - 3]);
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                {
                    arr_13 [7] [i_3] [i_1 - 3] = (((((0 ? (arr_6 [i_1 - 2]) : 9030721428488632315))) ? (((~(arr_11 [14] [i_1 - 1] [i_3 + 1])))) : 0));
                    arr_14 [i_3] = 28857;
                }
            }
        }
        arr_15 [i_1] [i_1] = (((((((((arr_6 [1]) ? 0 : 36699))) ? (arr_5 [i_1 + 2]) : (arr_1 [i_1] [i_1 - 4])))) ? ((9223372036854775807 ? -1540881715 : (arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1]))) : (-9223372036854775807 - 1)));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = (((arr_19 [i_4 - 3]) ? (arr_1 [i_4 - 2] [i_4 - 3]) : 23));
        arr_21 [i_4 - 1] = ((!(((-(arr_11 [i_4] [i_4] [18]))))));
        arr_22 [i_4] = var_3;
        arr_23 [i_4] = ((!(arr_9 [i_4 + 2] [i_4 - 3] [i_4 - 1])));
    }
    var_20 = var_1;
    var_21 = (0 * 0);
    #pragma endscop
}
