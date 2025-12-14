/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~-838677384);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 += (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((((-(arr_1 [i_0])))) ? -3404205841255953593 : ((min((arr_1 [i_0]), var_2))));
        var_18 = ((23949 << (6782 - 6775)));
        var_19 += (((((min(-199393312, var_3)) <= var_13)) ? -var_6 : (!var_2)));
    }
    #pragma endscop
}
