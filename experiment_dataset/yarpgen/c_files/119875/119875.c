/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (min(var_12, (((~(arr_2 [10] [i_0]))))));
        var_13 &= var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_14 = (!var_1);
        var_15 &= 112;

        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_16 = (arr_4 [i_2 + 2]);
            var_17 = (112 && 112);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_18 = 113;
                        var_19 = (min(var_19, (((-113 ? var_9 : -88)))));
                    }
                }
            }
            var_20 = (min(var_20, -119));
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
        {
            var_21 = (min(var_21, 108));
            var_22 = 99;
            arr_17 [i_5] [i_5] = arr_13 [i_5] [i_5];
            var_23 = 123;
            arr_18 [i_5] = (arr_6 [i_5 + 4] [i_1] [i_1]);
        }
        arr_19 [i_1] [i_1] &= 112;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_24 = (((arr_1 [i_6]) ? (arr_11 [i_6] [i_6] [i_6] [i_6]) : (arr_1 [i_6])));
        arr_22 [2] = -112;
        var_25 = (max(var_25, 114));
    }
    var_26 = var_6;
    #pragma endscop
}
