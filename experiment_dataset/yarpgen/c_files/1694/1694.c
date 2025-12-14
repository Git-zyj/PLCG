/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        arr_3 [i_0 + 4] [i_0 + 4] = ((((((arr_0 [i_0 - 2] [i_0 - 2]) - 9))) ? ((((arr_0 [i_0 + 3] [i_0]) / (arr_0 [i_0 + 1] [i_0])))) : (arr_1 [i_0 + 3])));
        arr_4 [i_0] [7] = (max(255, ((((63 ? -15122 : 4126869485))))));
    }
    var_18 = (max((((var_11 ? var_1 : 16777215))), var_13));
    #pragma endscop
}
