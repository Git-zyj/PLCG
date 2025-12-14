/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~((var_16 ? (var_11 - var_14) : var_2)));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_21 = ((-var_3 / (arr_1 [i_0 + 1])));
        var_22 -= (((~(((arr_2 [i_0 + 1]) ? var_8 : (arr_0 [i_0 - 1] [i_0 - 2]))))) * ((((arr_2 [i_0 - 2]) ? var_9 : ((min(var_14, var_15)))))));
        arr_3 [i_0] = (((((-((var_12 ? 7453470396571939229 : (arr_0 [i_0] [i_0])))))) ? ((max((arr_1 [i_0]), ((var_9 ? var_13 : (arr_1 [i_0])))))) : (255 | 12130845681649891961)));
    }
    var_23 *= var_16;
    var_24 = (min(((var_12 ? (var_19 * 73) : -var_9)), var_16));
    #pragma endscop
}
