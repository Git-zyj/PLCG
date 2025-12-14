/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min((-7980089246323440052 | 1136192267610666243), (~15))), (((-(var_15 * var_6))))));
    var_17 = (max(var_17, var_7));
    var_18 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0 + 3] [i_0] = (arr_2 [i_0 + 3] [i_0 + 2]);
        arr_4 [i_0] = (arr_1 [i_0 + 1]);
        var_19 *= (((~15379339858529134) ? (~var_5) : -7980089246323440031));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_7 [8] [i_1 + 1] = (~960);
        arr_8 [10] [i_1 + 1] = (arr_5 [i_1 - 1] [i_1 + 1]);
    }
    var_20 = 8790219722339702681;
    #pragma endscop
}
