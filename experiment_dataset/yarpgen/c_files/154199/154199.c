/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(!-1599911379)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 + 2]) * (min((!var_13), (arr_0 [i_0] [i_0 + 3])))));
        var_15 -= -1599911379;
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((-((~((1599911365 % (arr_0 [i_1] [i_1])))))));
        arr_8 [i_1] = ((((((arr_5 [i_1]) % 52))) ? -var_9 : -1599911379));
    }
    var_16 = 13;
    #pragma endscop
}
