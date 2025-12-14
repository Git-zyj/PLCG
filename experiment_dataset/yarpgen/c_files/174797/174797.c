/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 = (arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((140 ? -1312916212172810815 : 1312916212172810809));
        arr_5 [i_0] = var_0;
        var_19 = var_12;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_20 -= (((arr_9 [i_1] [i_1]) - (min(var_11, var_6))));
                arr_11 [i_2] = (max(var_12, ((-(((arr_9 [i_1] [i_2]) << (var_4 - 11619829938226276590)))))));
            }
        }
    }
    #pragma endscop
}
