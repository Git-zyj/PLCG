/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((((var_12 ? 21099 : var_10) - var_10))));
    var_14 = ((var_2 ? var_3 : (-1561041122 + 1561041121)));
    var_15 = (((((252 ? (!20) : (var_4 || var_12)))) ? ((min(var_4, var_2))) : ((var_3 ? ((var_9 ? var_11 : 4294967295)) : var_4))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max(var_16, 1561041114));
        arr_3 [6] [i_0] = var_3;
        var_17 = (((arr_1 [i_0] [i_0]) ? ((~(((arr_0 [i_0] [i_0]) ? var_1 : (arr_1 [i_0] [i_0]))))) : ((((arr_1 [i_0] [i_0]) ? var_7 : (arr_2 [i_0]))))));
        var_18 = (min((8 / 1561041121), (~3677956776836756483)));
    }
    #pragma endscop
}
