/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (~var_10);
        var_12 = (max((!var_0), (((max(var_8, var_7)) == var_3))));
        arr_5 [i_0] [i_0] = ((((var_2 ? var_1 : var_0)) | (var_7 ^ var_11)));
        var_13 &= (max(var_3, (var_11 / var_1)));
    }
    var_14 = ((((((var_6 == var_11) + var_11))) > (((var_5 >= var_0) ? var_9 : ((var_8 ? var_8 : var_6))))));
    #pragma endscop
}
