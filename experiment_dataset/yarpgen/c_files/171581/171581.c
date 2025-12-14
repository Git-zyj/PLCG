/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_8, (max((((-32767 - 1) ? 3272835704395682662 : 1)), -5222416774555654069))));
    var_13 = (max(((max(1, 31))), 14212413966874643119));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((var_2 || (arr_0 [i_0] [i_0]))) ? (~var_4) : ((-70405428914281646 ? 1 : 3272835704395682662))));
        var_15 = ((~(arr_0 [i_0] [i_0])));
    }
    var_16 = var_5;
    #pragma endscop
}
