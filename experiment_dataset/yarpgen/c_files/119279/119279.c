/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((-var_7 + 2147483647) << ((((((max(var_4, 2463116867372692425)) >= 25789))) - 1)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 1] [16]);
        var_16 = (max(var_16, ((((var_0 >= (max(var_12, -2463116867372692425)))) ? ((max(((12860 ? var_12 : var_3)), (var_0 * 0)))) : ((((((arr_2 [i_0] [i_0]) ? 56 : var_3))) ? var_5 : ((max((arr_0 [i_0] [0]), 63)))))))));
        arr_4 [i_0] [i_0] = (max(1833475892, 63));
    }
    #pragma endscop
}
