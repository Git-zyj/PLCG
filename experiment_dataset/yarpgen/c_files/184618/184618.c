/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = (arr_2 [i_0] [i_0]);
        var_12 += (arr_2 [i_0 + 1] [i_0 + 2]);
        var_13 = (max(0, (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2])))));
    }
    var_14 &= ((+(max((120 * 4294967295), ((var_2 ? var_8 : 219))))));
    #pragma endscop
}
