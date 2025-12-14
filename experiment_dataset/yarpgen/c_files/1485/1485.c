/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_9, var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_9;
                var_11 = (max(var_11, ((min((arr_3 [i_1 + 1] [i_0]), var_6)))));
                arr_6 [i_1] [i_1] = (min((min((arr_1 [i_1 + 3] [i_1 + 2]), (arr_1 [i_1 + 2] [i_1 + 2]))), var_5));
            }
        }
    }
    var_12 = var_9;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_13 = (min(var_13, (((var_9 & (arr_3 [i_2] [i_2]))))));
        arr_9 [1] = (arr_3 [i_2] [i_2]);
        var_14 = (max(var_14, ((-(arr_1 [i_2] [i_2])))));
        var_15 ^= (arr_7 [i_2]);
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_20 [i_3] = (min((~var_5), var_9));
                        var_16 = (arr_3 [i_3] [i_3]);
                    }
                }
            }
            arr_21 [0] [i_4] = (arr_13 [i_3] [i_3]);
            arr_22 [i_3] [i_3] = var_9;
            var_17 |= (min((((arr_18 [i_3] [i_3] [i_3 - 1]) ? (arr_8 [i_3]) : var_7)), var_3));
            var_18 = (min(var_18, (~var_9)));
        }
        var_19 = (((((1 ? (~0) : var_9))) ? ((-(arr_2 [i_3 - 1] [i_3 - 1]))) : (arr_8 [4])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_25 [i_7] = (min(51, 0));
        var_20 = ((((((~0) ? var_7 : var_4))) ? (arr_1 [i_7] [i_7]) : ((-(arr_7 [i_7])))));
    }
    #pragma endscop
}
