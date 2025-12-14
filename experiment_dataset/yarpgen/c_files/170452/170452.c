/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = ((((var_6 << (((arr_3 [i_2] [i_1] [i_0]) - 45827)))) - 12492));
                    var_15 = (1 - var_13);
                    arr_7 [i_0] [i_1] [i_1] [i_1] = 21416;
                    var_16 = (230 ^ 0);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = var_9;
        var_18 = (max(var_18, var_5));
        var_19 = (var_8 <= 21416);
        arr_10 [i_3] [i_3] = (((-2147483647 - 1) <= var_1));
        var_20 = (max(var_20, var_10));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        arr_13 [i_4] = (arr_12 [i_4 + 1] [i_4 + 1]);
        arr_14 [i_4] = (((arr_9 [i_4 + 1]) > var_9));
    }
    var_21 = 0;
    var_22 = var_0;
    #pragma endscop
}
