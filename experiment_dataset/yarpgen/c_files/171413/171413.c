/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = (min((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))), ((min((arr_2 [i_0 + 2]), (arr_2 [i_0 - 1]))))));
        var_21 ^= (min(((53840 ? 53840 : 0)), ((min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 - 1]))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_22 = (max(var_22, (((0 <= (min((arr_3 [i_1 + 1]), (arr_3 [i_1 - 3]))))))));
        arr_6 [i_1] [i_1] = (max((max(-8, 138860346)), ((((((arr_2 [i_1 - 3]) + 2147483647)) >> (((arr_1 [i_1 + 3] [i_1]) - 53)))))));
    }
    var_23 = (0 - 1445940015);
    #pragma endscop
}
