/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 = (min((arr_1 [i_0]), var_0));
        arr_2 [i_0] [i_0] = ((24292 ? 24292 : 59816));
        var_17 = ((~(min((1655962056378118361 & 16790782017331433240), (~526101276)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = ((16790782017331433255 == (arr_3 [i_1 - 1])));
        arr_6 [i_1] [i_1] = ((var_0 ? var_2 : var_7));
        arr_7 [i_1] = (((arr_0 [i_1 + 1]) ? 129024 : (arr_4 [i_1 - 1])));
        var_19 = ((var_10 >= (arr_5 [i_1 - 1] [i_1 + 1])));
        var_20 = ((!(((30 ? 8323072 : 595570460)))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        var_21 = ((((-24292 ? 1 : var_14))));
                        arr_19 [i_2] [i_2] [i_3] [i_5] [i_5] = 32;
                        var_22 = (((~((min(16784, var_4))))));
                    }
                }
            }
        }
        arr_20 [i_2] [i_2] = (((arr_14 [i_2 - 1]) + (min(2132048683, 1))));
        var_23 = ((!((min((-24292 != 1), (((arr_0 [i_2]) ? var_12 : (arr_4 [i_2]))))))));
    }
    #pragma endscop
}
