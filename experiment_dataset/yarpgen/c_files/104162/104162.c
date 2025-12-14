/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((~(var_15 % 236)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_19 *= ((~((-(min((arr_0 [i_0]), var_3))))));
        var_20 = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = (min(-2605, (~-3015199323578310616)));
        var_22 = ((((max(var_11, var_4))) ? var_6 : ((-(((arr_3 [i_1]) + var_7))))));
        var_23 = (min(108, 134217600));
    }
    #pragma endscop
}
