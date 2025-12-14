/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_15 -= ((((11020891624942133924 % (max((arr_0 [i_0 - 1] [i_0 - 2]), var_7)))) << (((arr_0 [i_0] [i_0]) - 26346))));
        var_16 = var_11;
        var_17 = (arr_1 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [i_1] = (arr_5 [i_1]);
            arr_8 [i_2] = 7425852448767417691;
        }
        arr_9 [i_1] = -108999040525076777;
        var_18 = (max(var_18, ((((arr_3 [i_1]) >= (arr_2 [i_1] [i_1]))))));
        arr_10 [0] [i_1] = arr_4 [i_1];
    }
    var_19 = var_9;
    #pragma endscop
}
