/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_8, var_5));
    var_11 *= (!var_3);
    var_12 -= var_6;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (((((((arr_0 [i_0]) ? var_9 : (arr_1 [i_0 + 2] [16]))) & var_5)) ^ (((arr_1 [i_0 + 3] [i_0 - 2]) ? (arr_1 [i_0 + 3] [i_0 - 2]) : var_4))));
        var_14 |= (arr_0 [i_0]);
        var_15 = (((((var_7 ? (arr_1 [i_0 - 1] [i_0 - 2]) : (arr_1 [i_0 - 2] [i_0])))) ? ((var_5 ? (arr_1 [i_0 - 2] [i_0]) : (arr_1 [i_0 + 3] [i_0]))) : (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0]) : (arr_1 [i_0 - 1] [i_0])))));
        arr_2 [i_0] [17] = (((var_7 % var_2) ? -var_1 : ((-(min(var_7, var_6))))));
        var_16 = ((4273498862 ? -6169608545886359866 : 6169608545886359845));
    }
    var_17 *= var_0;
    #pragma endscop
}
