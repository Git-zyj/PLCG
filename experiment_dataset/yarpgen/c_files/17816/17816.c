/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, var_9));
        var_18 = (min(var_18, ((((((4294967295 ? 125 : 2))) ? -var_9 : (arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (arr_0 [i_1] [i_1]);
        var_19 = (arr_0 [i_1] [i_1]);
        var_20 &= (arr_3 [i_1]);
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_21 = (((-20110 ? 4 : (((arr_6 [i_2]) ? var_6 : var_14)))));
        var_22 = (min(-90, 3221225472));
    }
    var_23 = ((((max(var_0, var_2))) ? (((var_0 * var_15) ? (((-32767 - 1) ? var_2 : var_10)) : var_5)) : var_9));
    var_24 = (~var_6);
    var_25 |= var_16;
    #pragma endscop
}
