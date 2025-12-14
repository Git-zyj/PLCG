/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_7 ? 1 : var_2))) ? (max(var_9, var_9)) : (min(0, var_1))));
    var_11 -= 16352;
    var_12 = (min((min(var_7, (((var_4 ? var_8 : 1))))), var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_13 = (((~var_7) ? (((var_5 ? var_5 : 1))) : (arr_1 [i_0])));
            arr_4 [i_0] [i_0] = ((arr_1 [i_0]) ? (arr_1 [1]) : 1);
            arr_5 [i_0] = (((arr_1 [8]) ? var_0 : ((((arr_0 [i_0]) ? var_5 : (arr_3 [i_0]))))));
            arr_6 [i_0] [i_1] [i_0] = (!((1 || (arr_0 [i_0]))));
        }
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] = (((arr_2 [i_0] [i_2 + 2] [i_2 - 2]) ? ((1 ? 1 : 1)) : (arr_0 [i_0])));
            var_14 = (~var_4);
            var_15 = -0;
            var_16 = (((arr_2 [i_0] [i_2] [i_0]) ? (arr_2 [i_0] [1] [i_0]) : 2179885408));
            var_17 += (!(arr_2 [4] [i_2 + 1] [i_2]));
        }
        arr_10 [i_0] = var_5;
        var_18 = (arr_8 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
