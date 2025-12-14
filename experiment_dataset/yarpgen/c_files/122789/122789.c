/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((((13677 ? ((var_0 ? 51858 : var_3)) : (51858 * 92)))) ? ((((min(51858, var_3))) % var_6)) : var_13)))));
    var_15 = (max((~-var_3), var_9));
    var_16 = (min(((var_3 ^ ((189 ? 51858 : 0)))), (((var_0 % var_8) ? (var_3 == 15) : (13677 > -3575939378330595541)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 -= (((((arr_3 [i_0]) ^ ((min(var_13, 51858))))) | 23971));
        arr_4 [i_0] = ((-(arr_2 [11] [i_0])));
    }
    #pragma endscop
}
