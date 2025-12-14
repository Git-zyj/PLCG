/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(var_14, var_12)));
    var_19 = var_0;
    var_20 = (((!((max(var_6, 82))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 - 1] [i_0]);
        var_22 ^= 82;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 *= (max((((-(arr_3 [i_1])))), ((-((1202468582 ? var_12 : 348154170))))));
        var_24 += (16 * 911811637);
        arr_4 [i_1] [i_1] = max((arr_3 [i_1]), var_10);
    }
    var_25 = ((var_1 ? -1202468598 : (((107 ? var_9 : var_6)))));
    #pragma endscop
}
