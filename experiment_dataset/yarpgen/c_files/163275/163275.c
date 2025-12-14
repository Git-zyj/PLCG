/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((1751050860 ? (max(1751050860, 2543916435)) : (!1751050873))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            var_21 = 33;
            arr_5 [i_0] [i_0] = (1751050854 < 255);
        }
        arr_6 [13] [i_0] = 3;
        var_22 -= (((arr_2 [i_0] [i_0] [i_0]) && var_7));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_23 = (max((max((arr_7 [i_2] [i_2]), ((min(0, 1))))), (((((676129842 ? 2543916435 : -1))) ? var_10 : (max(1751050860, 63077))))));
        var_24 = ((((1514614475 - (arr_8 [i_2]))) - -32764));
    }
    #pragma endscop
}
