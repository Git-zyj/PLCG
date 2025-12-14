/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_3;
    var_16 = (min(var_10, (~var_6)));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_4 [1] = ((-(((!(arr_3 [i_0 - 1] [i_0 - 3]))))));
        var_17 = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] = ((8 * (!24704)));
        var_18 |= (arr_2 [i_1]);
        var_19 = (arr_6 [i_1]);
        var_20 = (min(var_20, (((6970698368047318583 < (arr_5 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] = (arr_8 [i_2]);
        var_21 = (max((((20 ^ ((max(-27, 202)))))), var_8));
        var_22 -= -1054157970;
        var_23 = (max(var_23, 17146314752));
        var_24 = ((!(((-(arr_5 [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_16 [i_3] = (6540 == 1);
        arr_17 [0] [1] |= ((!(~var_9)));
    }
    #pragma endscop
}
