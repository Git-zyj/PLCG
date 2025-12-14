/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = 65535;
        var_14 = ((!(((155 | (arr_0 [i_0] [i_0]))))));
        var_15 *= ((7 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_16 = 31972;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_17 = (max(7, (max((arr_9 [i_1] [i_2] [i_1] [i_3]), (arr_10 [i_3])))));
                    var_18 = ((((arr_7 [i_1] [i_3 - 2] [i_3 - 2]) ? var_2 : (arr_7 [i_1] [0] [i_3 - 2]))));
                }
            }
        }
    }
    var_19 ^= var_7;
    #pragma endscop
}
