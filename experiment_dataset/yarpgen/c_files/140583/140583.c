/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((max(0, 0)))) | (-7384298759597725719 - -1)));
    var_12 ^= ((((((((109 ? 0 : 18119366725301711187))) ? 1113657678952224460 : -var_1))) && ((min(((var_4 ? 1113657678952224452 : var_9)), (~8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((((53561404471219744 ? 65535 : 2147483645))) % 8573751078613699443);
        arr_3 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_14 = ((~(arr_4 [i_1] [i_1])));
        var_15 = (min(var_15, var_10));
    }
    var_16 = var_1;
    var_17 = var_7;
    #pragma endscop
}
