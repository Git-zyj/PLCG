/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(-839538489944549418, (((255 ? (~18545) : -var_17))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [7] [12] = -839538489944549426;
        arr_5 [i_0] [0] = -18545;
        arr_6 [i_0] = (~-1);
    }
    var_19 = (min(var_11, var_16));
    var_20 = (min(((max(var_3, 1))), (((var_15 - 19) ? ((var_8 ? -26683 : var_13)) : var_7))));
    var_21 = (min(((~((var_15 ? 1812466319 : 18555)))), var_13));
    #pragma endscop
}
