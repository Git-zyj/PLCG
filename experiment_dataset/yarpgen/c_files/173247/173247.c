/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_8, 58315));
    var_18 = (min(((-4844263538233755575 / (max(-4844263538233755577, var_2)))), var_6));
    var_19 = var_1;
    var_20 &= 684124777;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_13;
        arr_4 [i_0] = (min((arr_2 [i_0 - 1]), (min(-4844263538233755563, 4844263538233755576))));
        arr_5 [i_0] [i_0] = var_8;
        arr_6 [4] [i_0] = 2047;
    }
    #pragma endscop
}
