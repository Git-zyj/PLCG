/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-7273159184041685426 / 32);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [0] [i_0] = (((((min(var_8, (arr_0 [i_0]))))) > (max(var_6, (arr_1 [i_0] [i_0])))));
        var_13 = (max(var_13, -4850585732087253207));
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        var_14 = (max(var_14, var_6));
        arr_7 [i_1] = (arr_6 [i_1] [i_1]);
        var_15 = (min((((arr_4 [i_1]) | 27)), (!4850585732087253182)));
    }
    var_16 *= (~var_7);
    #pragma endscop
}
