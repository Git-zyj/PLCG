/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_8));
    var_15 = (var_2 ? 1312311919345260791 : ((var_2 ? var_4 : 13165804189421653171)));
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_2 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
        var_18 = (min(var_18, ((((!-31140) ? 13165804189421653182 : (((var_11 >> (((arr_3 [5]) + 6575706395028587930))))))))));
    }
    var_19 = var_9;
    #pragma endscop
}
