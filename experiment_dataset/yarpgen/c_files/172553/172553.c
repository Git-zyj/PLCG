/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_13 += (arr_3 [i_0 - 2]);
        arr_4 [i_0] = (3685694380 ? 1048560 : 1);
    }
    var_14 = var_9;
    var_15 = (((~18502) ? ((min(0, (min(1, var_10))))) : ((((4294967267 >= 35224) > (max(59583, 17)))))));
    #pragma endscop
}
