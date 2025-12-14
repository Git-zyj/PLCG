/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_1 [i_0] [i_0 - 1]) - (arr_1 [i_0] [i_0]));
        var_18 = (min(var_18, 15586789218637092641));
        var_19 = (max(var_19, (arr_1 [i_0 - 1] [i_0 + 3])));
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) & (arr_0 [i_0 + 2])));
        var_20 = (min(var_20, (~var_5)));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_21 += 3233505989260528215;
        var_22 = (max(var_22, ((((((arr_5 [i_1] [4]) ^ (-2147483647 - 1))) ^ var_14)))));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_23 = var_10;
        var_24 = (arr_9 [i_2] [i_2]);
        var_25 = var_9;
    }
    var_26 = (max(var_26, (((118 ? var_16 : ((((var_6 ? var_12 : 17)) & 17)))))));
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_27 = (max(var_27, (arr_15 [i_3] [i_4] [i_5] [i_5])));
                    var_28 = (((max((arr_7 [i_4]), ((21155 ? 1 : (arr_12 [i_3] [i_5] [i_3]))))) < (arr_9 [i_3 + 1] [i_3 + 3])));
                }
            }
        }
    }
    #pragma endscop
}
