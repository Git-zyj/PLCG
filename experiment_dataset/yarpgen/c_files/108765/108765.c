/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((0 & -32760) ? (!32750) : var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = (~162);
        arr_2 [i_0] = (~var_9);
        var_14 = (((var_2 ? var_5 : var_6)));
        arr_3 [i_0] = (((((arr_0 [i_0] [i_0]) && var_8))) % var_2);
    }
    var_15 = var_10;
    #pragma endscop
}
