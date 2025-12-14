/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((2708196598 ? ((~((var_14 ? var_13 : var_9)))) : ((var_8 ? -var_10 : ((471346023001178679 ? var_14 : var_10))))));
    var_16 = min(189697807, 41);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((~(arr_0 [i_0])));
        var_18 = ((-(-127 - 1)));
        arr_2 [i_0] &= ((((arr_0 [i_0]) - 2147483647)));
        arr_3 [i_0] &= (((arr_0 [i_0]) ? (arr_0 [i_0]) : 71));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = ((-2147483647 - 1) == 168488529397184923);
        arr_6 [i_1] = 899654052;
        var_20 = -7714364396368087674;
    }
    #pragma endscop
}
