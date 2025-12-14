/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((~var_15) ^ var_5)), ((((min(var_13, var_13)) > ((var_3 ? var_9 : var_12)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [i_0] [i_1] [i_2]);
                    arr_6 [i_1] [i_1] [i_1] = var_2;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [i_3] [7] = -var_15;
                    arr_14 [i_0] [i_0] [i_4] = (arr_2 [i_0] [i_0] [2]);
                    var_19 = (min(var_19, (arr_1 [i_0])));
                }
            }
        }
        arr_15 [i_0] = var_13;
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = var_9;
        arr_20 [i_5] = var_10;
        arr_21 [i_5] [i_5] = var_15;
    }
    for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_20 ^= (min((arr_17 [3] [3]), (((arr_23 [i_6 - 1]) ? (arr_22 [i_6 + 3]) : (arr_23 [i_6 + 2])))));
        arr_24 [i_6] [i_6] = min((arr_23 [i_6 - 1]), ((~(arr_23 [i_6 - 2]))));
    }
    var_21 = 559845514;

    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_22 *= ((!(arr_9 [i_7 - 2])));
        arr_28 [i_7] = var_4;
    }
    var_23 = (102 + -432442587);
    #pragma endscop
}
