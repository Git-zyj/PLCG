/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = (((((-2776984420755253522 ? (arr_5 [i_0] [i_1] [2] [i_2]) : var_9))) ? (arr_4 [6]) : 151));
                    var_11 = (arr_3 [2] [i_1]);
                    arr_7 [i_2] [i_2] [i_1] [i_2] = (((((arr_5 [i_0] [i_1] [i_1] [i_2]) ? (arr_4 [1]) : 46887))) ? ((var_1 ? var_3 : var_9)) : ((221 ? var_3 : var_1)));
                }
            }
        }
        var_12 &= 18628;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_13 = (max(var_13, var_6));
        arr_10 [5] = -var_9;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = var_6;
        var_14 = (((arr_4 [i_4]) ? (arr_8 [i_4] [2]) : (arr_4 [i_4])));
        var_15 *= (((((var_1 ? 230 : var_6) + var_6))));
    }
    var_16 = 0;
    var_17 = var_8;
    #pragma endscop
}
