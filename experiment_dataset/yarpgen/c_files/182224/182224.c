/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;
    var_12 = var_6;
    var_13 &= ((80 ? var_9 : var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -6282781748444589995;
        var_14 = (max(var_14, ((-1647932255 ? ((var_9 ? var_4 : var_7)) : -1157268642))));
        var_15 = 2076273581672953924;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((2147483647 ? 1157268639 : var_8))) ? ((-8048963718958706254 ? 2076273581672953930 : 2076273581672953924)) : ((2076273581672953941 ? var_5 : 1447392798155411116))));
        arr_7 [i_1] = 2076273581672953924;
        arr_8 [i_1] = ((var_1 ? var_8 : ((var_7 ? var_0 : var_6))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = ((var_9 ? var_8 : ((var_10 ? var_2 : -901410072))));
            var_16 += 1157268668;
        }
    }
    var_17 = var_0;
    #pragma endscop
}
