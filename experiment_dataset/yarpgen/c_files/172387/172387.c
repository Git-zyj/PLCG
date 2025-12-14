/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= min(((max(140, var_8))), (var_9 && var_7));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_16 = (~var_2);
        arr_2 [i_0] = (((((var_3 ? (arr_0 [i_0 - 3] [i_0 - 3]) : 53))) ? 129 : 140));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 = (arr_1 [i_1]);
        var_18 = (min(var_18, (arr_0 [0] [15])));
        arr_7 [i_1] = -39181;
        var_19 = (max(var_19, (((((((max(var_6, -1))) ? var_8 : (((min(var_5, var_2)))))) != var_4)))));
    }
    var_20 -= ((var_14 != ((min(16368, (max(39181, var_11)))))));
    var_21 = (((var_11 - var_5) >> (var_3 + 13736)));
    #pragma endscop
}
