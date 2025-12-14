/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((0 ? 1387828409109174828 : 1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = ((((((arr_1 [i_0]) <= (-29850 >= 0))))) * (((arr_2 [i_0]) ? 0 : 0)));
        var_14 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    {
                        var_15 = (~18446744073709551615);
                        var_16 = 0;
                        var_17 = (max(var_17, (((~(((!(arr_2 [i_4 + 2])))))))));
                        var_18 = -3228;
                    }
                }
            }
        }
        var_19 = ((((~(arr_10 [i_1] [i_1] [i_1]))) != (arr_10 [i_1] [i_1] [i_1])));
        var_20 = ((!(arr_7 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_21 = -3251;
        var_22 = (((((0 ? (arr_3 [23]) : 1536))) ? ((3228 ? var_8 : 18)) : (arr_7 [i_5] [i_5])));
    }
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        var_23 = -67;
        var_24 = (max(2, (!38)));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        var_25 = arr_13 [i_7] [i_7];
        var_26 = (arr_19 [i_7]);
    }
    #pragma endscop
}
