/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_3));
    var_19 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((min(var_5, 84)))) | var_0));
        var_21 ^= min((max((min(633046999, var_6)), 76766591)), (((min(var_11, -1903743336620339262)))));
        arr_3 [i_0] = (!-10053);
        var_22 = var_16;
        arr_4 [i_0] = (max(((max(0, (-32767 - 1)))), (((min(var_16, var_11)) - (((max(var_10, 0))))))));
    }
    var_23 &= (!13716);
    #pragma endscop
}
