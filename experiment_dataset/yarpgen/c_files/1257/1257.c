/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = (min(((max(26435, var_11))), (max(var_4, var_14))));
        arr_5 [i_0] [i_0] = ((!((((!-19958) & -408451556)))));
        var_16 = ((((((!(arr_2 [i_0]))))) % ((-(681410128 ^ var_5)))));
        arr_6 [i_0] = ((~(min(var_11, (arr_1 [i_0])))));
    }
    #pragma endscop
}
