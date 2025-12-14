/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((var_0 != var_13), (~-var_15)));
    var_17 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (arr_6 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] = (min(0, (max(((min((arr_1 [i_0]), (arr_1 [i_0])))), (min(-20698, (arr_4 [i_0] [i_1])))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_18 = (~246);
        arr_12 [2] [i_3 + 1] |= (arr_7 [i_3] [i_3] [i_3]);
        arr_13 [i_3] [i_3] = (~-25);
        var_19 = arr_5 [i_3] [i_3] [i_3 - 1];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = 3868806215;
        var_20 = ((~(~12)));
        var_21 = (max(var_21, 60814));
    }
    #pragma endscop
}
