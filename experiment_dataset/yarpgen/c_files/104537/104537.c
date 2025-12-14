/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [3] &= (min((arr_0 [i_0]), ((~(var_15 <= 0)))));
        var_18 = ((var_17 ? (min(((min(3791380076557179778, (arr_0 [i_0])))), (min(var_13, var_2)))) : ((min((~0), (3 <= 95))))));
    }
    var_19 &= (((var_7 < var_7) && (((((var_11 ? 11888428215526858490 : var_2)) - (var_14 * 1))))));
    #pragma endscop
}
