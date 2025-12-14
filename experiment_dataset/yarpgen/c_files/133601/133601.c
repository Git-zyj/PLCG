/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_9 % 17) ? 104 : var_9));
    var_15 = (max(var_2, (max(1668249706, 29117))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_16 = (arr_2 [i_0 - 3] [i_0]);
        arr_3 [i_0] [i_0] = (((((~(30 % 8898)))) ? ((((var_8 || ((61 > (arr_2 [i_0] [i_0]))))))) : (max((max((arr_0 [i_0] [i_0]), var_11)), (arr_0 [i_0] [i_0])))));
    }
    #pragma endscop
}
