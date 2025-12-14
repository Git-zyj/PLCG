/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 = ((~(~-3301608895409516935)));
        arr_3 [i_0] [i_0] = ((arr_0 [i_0 - 1] [i_0 + 2]) << ((var_14 ? (((((arr_2 [i_0] [i_0]) && var_0)))) : ((var_3 + (arr_2 [i_0] [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_6 [10] [i_1] = ((~(((arr_1 [i_1 - 1]) + (arr_1 [i_1 + 2])))));
        arr_7 [i_1] = ((((((!var_14) + ((min(1375, 244)))))) ? var_13 : ((max((!var_5), (var_0 + var_5))))));
    }
    var_18 = var_4;
    var_19 = var_14;
    #pragma endscop
}
