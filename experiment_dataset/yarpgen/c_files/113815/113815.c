/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((var_4 <= (min(var_6, var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 |= var_0;
        arr_2 [i_0] |= var_1;
        var_19 = (((0 ? var_16 : (arr_0 [i_0]))) & var_14);
        arr_3 [i_0] = ((arr_0 [i_0]) ? (arr_0 [i_0]) : -1370605909);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = (~8852401325397828149);
        arr_7 [i_1] = var_1;
    }
    var_21 = (+(((0 || var_8) << (63 - 57))));
    #pragma endscop
}
