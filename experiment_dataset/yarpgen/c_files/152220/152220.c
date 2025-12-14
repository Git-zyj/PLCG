/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_16 <= 1) ? var_3 : (((((min(var_11, 3))) || 0)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((((min(1, var_4)))) * 1))));
        arr_3 [i_0] [3] = (min((((var_16 + 2147483647) >> ((((max((arr_0 [i_0] [i_0]), 1))) - 10927)))), (((max(1, var_15))))));
    }
    #pragma endscop
}
