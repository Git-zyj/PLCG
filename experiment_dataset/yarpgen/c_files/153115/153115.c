/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -281474976710655;
    var_17 |= (~var_14);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = 24823;
        arr_4 [i_0] = ((min(var_12, -4458176219407540809)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = -24844;
        arr_8 [i_1] [i_1] = var_13;
        arr_9 [i_1] = (min((min(var_0, var_1)), var_1));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = var_5;
        arr_15 [i_2] [i_2] = 24802;
        arr_16 [i_2] [i_2] = (+-24847);
        arr_17 [i_2] = -8184;
    }
    var_18 = (max((max(2295966600731564415, var_5)), (((~((min(var_0, 24876))))))));
    #pragma endscop
}
