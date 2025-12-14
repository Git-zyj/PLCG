/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 2032520514;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_19 = (((((((max(var_8, (arr_2 [i_0])))) & var_5))) ? 385319353 : ((max((arr_0 [i_0 - 1]), (!-23392))))));
        var_20 = var_10;
        var_21 = (max(var_21, (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = (max(23416, (((((max(var_8, var_0))) <= var_11)))));
    }
    var_22 = (1 + 1);

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_23 ^= 6294855536803897072;
        var_24 |= (((arr_2 [i_1]) & var_3));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_25 = var_13;
        var_26 = -var_6;
    }
    #pragma endscop
}
