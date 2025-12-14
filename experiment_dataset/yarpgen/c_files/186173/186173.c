/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 47;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] |= (!(28456 > -1432187614));
        var_19 = (((arr_0 [i_0]) <= ((4406569665132997588 ? var_11 : (arr_1 [i_0] [i_0])))));
    }
    var_20 -= ((max((var_4 > -1), var_7)));
    #pragma endscop
}
