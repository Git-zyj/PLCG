/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(((((max(var_1, 192445300744211980))) ? var_0 : 29090)), ((max(var_14, (~46708)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 |= ((28 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_22 |= ((192445300744211980 % (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2 + 4] [i_3] [i_1] = (36463 * 533912468);

                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (((-(arr_7 [i_1] [16] [i_3 - 1]))))));
                        arr_16 [i_1] [i_1] [i_3] = (14882069938861488537 && 3238845541);
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_2] [i_3] [i_1] = (~1065508195);
                        arr_20 [i_1] [i_2] [6] [i_5] |= (!-28173);
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_24 = 29090;
                        var_25 = (arr_1 [i_1] [i_2]);
                        var_26 = (((arr_8 [i_2 + 2] [i_1]) << (131 - 125)));
                    }
                    arr_24 [i_1] [i_2] [i_1] [4] &= (56558 ? 8246168712721797459 : (arr_2 [2]));
                }
            }
        }
    }
    #pragma endscop
}
