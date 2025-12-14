/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (max(1, (16708899640268797350 / 18387921890473593528)));
        arr_3 [i_0] [i_0] |= ((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_17 = (((((((arr_5 [i_1] [i_1]) || var_11)))) < 16708899640268797341));
        var_18 += (arr_5 [10] [10]);
        var_19 -= (((arr_6 [10]) + var_14));
        var_20 = (((-127 - 1) % (arr_4 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_21 &= (((arr_11 [i_2] [i_2] [i_2]) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_8 [i_2])));
                    arr_13 [i_1] [3] [3] = 8307;
                }
            }
        }
    }
    var_22 *= (max((!253), 16708899640268797341));
    #pragma endscop
}
