/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!((max(var_3, var_8)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0]);
        var_11 = ((((arr_0 [i_0]) | (arr_1 [i_0] [19]))));
        arr_5 [i_0] [8] = 243;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 |= (max((~21), 235));
            var_13 ^= (44557 || 28);
            arr_8 [i_1] [i_0] [i_0] = var_4;
            arr_9 [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_1] [i_1]);
        }
        arr_10 [i_0] = (min(237, ((max(var_6, var_9)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_14 = (((((arr_12 [i_2]) ? 17 : var_9)) >= (var_9 || 242)));
        var_15 = (max(var_15, ((((!var_2) ? (arr_12 [i_2]) : (arr_7 [i_2] [i_2] [i_2]))))));
        arr_13 [i_2] [i_2] = (((arr_3 [i_2] [i_2]) ? (arr_0 [i_2]) : 186));
    }
    var_16 = ((52 ? var_4 : (~-14218)));
    #pragma endscop
}
