/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_4 [i_0 - 1] = ((var_14 ? var_5 : var_5));
            var_16 = (--40);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (max(var_17, (((~((var_7 ? (arr_1 [i_0] [i_0]) : -10)))))));
            var_18 = (max(var_18, (((255 ? -53 : (2507614940210436048 > -17))))));
            var_19 = 96;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 = (((((var_3 ? (arr_6 [i_0 + 3] [1]) : 1))) ? var_3 : ((var_8 ? var_0 : 41))));
            var_21 -= var_8;
            var_22 = var_14;
        }
        var_23 = (arr_2 [i_0 + 1] [i_0 - 1]);
    }
    var_24 -= 1;
    var_25 ^= var_9;
    #pragma endscop
}
