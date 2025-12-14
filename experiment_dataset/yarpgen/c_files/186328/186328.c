/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_11 == var_0) ^ var_6))) ^ 7400894380534213098));
    var_16 = (((17259 ? var_8 : (4294967295 / var_3))));
    var_17 += (((57305 / -30455) ? (((((max(0, var_1))) ? var_6 : var_0))) : var_5));
    var_18 &= ((((var_12 * (var_6 / var_7))) * ((((!(((var_8 ? var_12 : var_7)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_0 [i_0] [9])));
        var_20 = (min(var_20, (((((arr_2 [7]) ? var_3 : 3118438401)) >> (((-1073741824 - var_3) + 1073741941))))));
        arr_4 [12] [i_0] = (((arr_2 [12]) % (arr_1 [4])));
    }
    #pragma endscop
}
