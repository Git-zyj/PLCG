/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((-(((arr_1 [i_0]) ? var_4 : -30461))));
        var_14 = 0;
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_15 = max(1494956988, (arr_3 [i_1 + 2]));
        var_16 = (max(var_16, (((((((arr_2 [1] [i_1 - 2]) ? (arr_3 [i_1]) : 1))) ? 30489 : (((!((max(-56, 0)))))))))));
        var_17 = (max(var_17, ((max((arr_2 [i_1 - 1] [i_1 + 2]), ((var_7 ? (arr_2 [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 3] [i_1 - 2]))))))));
    }
    var_18 = ((var_6 + (~var_0)));
    #pragma endscop
}
