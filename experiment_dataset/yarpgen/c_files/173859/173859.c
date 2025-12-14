/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((var_13 ? (((((arr_0 [i_0]) / (arr_1 [i_0]))) / (arr_0 [i_0]))) : (((arr_1 [i_0]) * (1 % var_12)))));
        var_16 = (((((((0 ? 1073725440 : (-32767 - 1))) - (((max((arr_0 [i_0]), var_10))))))) ? (arr_1 [i_0]) : var_1));
        var_17 = (min(var_17, ((((!(arr_0 [i_0]))) ? (~1) : (((arr_1 [2]) ? ((1 ? 193 : var_0)) : (max(0, var_7))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, -46));
                    arr_6 [i_0] [1] [0] = ((+((max((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0] [i_2]))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 ^= (((arr_7 [i_3] [i_3]) ? var_8 : (((arr_7 [i_3] [i_3]) ^ (arr_8 [3])))));
        var_20 = ((-(arr_7 [i_3] [i_3])));
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_21 = (((((var_10 ? (arr_10 [i_4] [i_4]) : (arr_11 [i_4])))) / (arr_9 [i_4] [i_4])));
        var_22 &= (arr_11 [i_4]);
        arr_12 [i_4] = (((arr_10 [i_4] [i_4]) <= (arr_10 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] = ((((((arr_9 [i_5] [i_5]) ^ (arr_11 [i_5]))) & var_4)));
        var_23 -= (arr_13 [i_5] [i_5]);
        var_24 = (max(var_24, ((max((((-1017342381 * 1) ? (((!(arr_7 [12] [i_5])))) : (arr_11 [i_5]))), (((arr_11 [i_5]) << 0)))))));
        var_25 &= ((var_6 ? (arr_7 [i_5] [i_5]) : var_9));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_26 = var_9;
        var_27 = ((24 ? 21169 : var_8));
    }
    var_28 = (var_3 ? 1 : (110 << var_2));
    #pragma endscop
}
