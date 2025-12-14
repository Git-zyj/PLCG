/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(6291, ((1 ? var_10 : var_7)))) ^ (min(var_8, var_1))));
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [6]);
        arr_3 [1] [i_0] = ((max((arr_0 [i_0]), var_6)) - (arr_1 [i_0] [i_0]));
        var_13 = 518728748;
        var_14 = (1 ? -var_7 : (max(((1 & (arr_0 [i_0]))), (~var_0))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(((!(arr_6 [i_1]))))));
        arr_8 [i_1 + 1] = (arr_4 [i_1 + 2]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_2] = ((~(arr_0 [i_2])));
            var_15 *= var_4;
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_16 = var_3;
                        var_17 = 1;
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            arr_22 [i_2] [i_2] = (~1);
            arr_23 [i_2] [i_2] = ((arr_10 [i_2]) ? 1023 : var_7);
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_28 [i_2] [i_2] = (((1 ? var_6 : -648862189)) <= (arr_11 [i_7] [i_2] [i_2]));
            arr_29 [i_7] [i_7] [2] |= (arr_17 [1] [i_7] [i_7] [i_7]);
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    var_18 = ((2113169794 ? var_1 : 3815919554));
                    arr_37 [i_2] [i_9] [i_9 - 1] [7] = var_6;
                }
            }
        }
        var_19 = 1;
    }
    var_20 = var_9;
    #pragma endscop
}
