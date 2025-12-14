/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 -= var_6;
        var_16 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((-((-(arr_7 [i_0] [0] [i_0 + 1])))));
                    var_18 = (var_3 ? (arr_2 [i_1] [i_2]) : (arr_1 [i_0 + 1]));
                    var_19 |= ((var_14 ? (arr_4 [i_0] [9]) : var_7));
                }
            }
        }
        var_20 = (arr_1 [i_0 - 1]);
    }
    var_21 = (min((((min(-1, var_14)))), ((2324174168 ? 144 : (-32767 - 1)))));
    #pragma endscop
}
