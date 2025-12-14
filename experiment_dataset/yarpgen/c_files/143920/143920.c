/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    var_14 = 1;
    var_15 = 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_10;
        arr_4 [i_0] = (~var_12);
        var_17 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = (((arr_2 [i_1]) - var_4));
        var_18 += arr_6 [i_1] [i_1];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_19 = arr_6 [i_1] [i_2];
                    arr_14 [i_2] [i_2] [i_2] [i_2] = (!(arr_10 [i_1] [i_2] [i_2] [i_3]));
                }
            }
        }
    }
    var_20 &= 0;
    #pragma endscop
}
