/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = -122634429204752564;
        var_17 = (max(var_17, 17482));
        arr_3 [i_0] = (((arr_1 [i_0]) ? 9223372036854775807 : 5721367655278407551));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = -4532541709150466650;
        arr_7 [i_1] = (((min(var_4, 7693695286955346109)) < var_16));
        arr_8 [i_1] = (max(((20656 ? (arr_5 [i_1]) : (arr_4 [i_1]))), ((66 ? (arr_0 [i_1]) : (arr_0 [i_1])))));
    }
    var_18 = (max((((~-5721367655278407552) ? (!5721367655278407551) : (min(var_5, var_16)))), var_11));
    var_19 = ((var_2 - ((~(var_16 - var_11)))));
    #pragma endscop
}
