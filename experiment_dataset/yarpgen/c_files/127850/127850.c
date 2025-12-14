/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = var_3;
        var_11 = (max(var_11, (arr_2 [i_0])));
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                var_12 -= var_4;
                var_13 = (max(var_13, (((-(((-26371 == (793260112 != 8191)))))))));
            }
        }
    }
    var_14 = (min((-127 - 1), ((max(var_5, (!4220597748659964403))))));
    #pragma endscop
}
