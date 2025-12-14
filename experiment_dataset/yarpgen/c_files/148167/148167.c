/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((var_6 ? 35751 : (min(65517, -2540337759756260808)))))));
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_2 [i_0 - 1]) / 19))) ? ((max(1, 1))) : ((((arr_2 [i_0 - 1]) && (arr_2 [i_0 + 1]))))));
        var_17 = (-1 ? (max(((((arr_1 [i_0] [i_0]) != 2100707061))), 1946620052)) : (((-550517794 ? (min(65517, 1821780290)) : 65533))));
        arr_4 [i_0] = ((!(arr_0 [i_0])));
    }
    #pragma endscop
}
