/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, -4281589263));
        var_21 = (2361924830 < 65433);
        var_22 -= ((((arr_0 [1]) == 1)));
    }
    var_23 = (((116 != var_1) * -116));
    var_24 |= (max((max((1 | 5340035759204306694), var_3)), ((max(((min(var_12, var_8))), -1070077269)))));
    #pragma endscop
}
