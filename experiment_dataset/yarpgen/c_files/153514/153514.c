/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 = (min(var_14, var_10));
            var_15 = ((arr_2 [i_0]) ? 1 : var_12);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_6 [i_2] [i_2] [i_2] = ((+(((arr_5 [i_2]) ? -1620024265475552076 : var_10))));
            arr_7 [i_0] [i_0] [i_0] = var_10;
            var_16 = ((!(((var_0 ? var_0 : var_2)))));
        }
        var_17 = 117;
    }
    #pragma endscop
}
