/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((5384 >= -5385) ? (~var_12) : var_0)));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = min((!-18), (arr_1 [i_0]));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_17 = (1278449084733243044 & 0);
        arr_8 [8] = var_1;
        var_18 = (min(var_18, ((max((arr_7 [i_1]), 1)))));
    }
    #pragma endscop
}
