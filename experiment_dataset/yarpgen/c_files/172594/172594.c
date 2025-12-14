/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_5;
    var_15 = (min((((max(var_9, var_6)))), 114262346));
    var_16 = (min(var_16, ((min(((max(0, (3754857557062915566 ^ var_4)))), (max(var_5, 18446744073709551615)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        var_17 += (((((~(arr_2 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (((~-2907287923229602996) ? 1245571003 : 6554))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] = ((min((arr_5 [i_1] [i_1]), (arr_4 [i_1] [i_1]))));
        var_18 = 1072132306;
    }
    #pragma endscop
}
