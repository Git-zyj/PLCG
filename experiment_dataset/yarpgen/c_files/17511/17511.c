/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [5] = (max(((~(arr_0 [i_0 + 1]))), ((((arr_0 [i_0 + 2]) <= (arr_0 [i_0 - 1]))))));
        var_10 = (arr_0 [14]);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_11 *= var_2;
        var_12 = (!1616459739658969441);
        var_13 &= ((-((16150 >> (!var_8)))));
    }
    var_14 = var_6;
    var_15 = (min(var_15, ((min(var_2, (!12308316619371389199))))));
    #pragma endscop
}
