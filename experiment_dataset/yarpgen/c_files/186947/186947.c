/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((max((1346098372113197041 / var_4), ((max(var_9, var_1))))) % (~var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = var_8;
        var_16 = (max(var_16, (((-((16649 ? -1346098372113197054 : (arr_0 [i_0]))))))));
    }
    var_17 = var_12;
    var_18 = var_6;
    var_19 |= max(var_4, (max(((var_5 ? 5 : var_6)), (min(var_6, 62691)))));
    #pragma endscop
}
