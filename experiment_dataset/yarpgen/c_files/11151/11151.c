/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = var_3;
        var_12 = (max(var_12, var_0));
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0] [i_0]) ? var_1 : 642841634))) ? ((13933916524585963697 ? 10 : 0)) : (var_7 > var_5)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (((((((var_3 ? 18446744073709551606 : 0))))) - 14));
        var_14 = (arr_5 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 = ((-(arr_8 [i_2] [i_2])));
        arr_9 [i_2] = ((65535 ? (-18 != 47126) : ((3486268733328920889 ? var_6 : 18410))));
    }
    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        var_16 -= (arr_1 [i_3]);
        var_17 = max((arr_3 [i_3]), (-17 % -16));
        var_18 ^= 1482444103;
        var_19 = (!var_4);
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_20 = ((var_10 > var_3) ? ((((min(60117, 1920))) ? (((arr_8 [i_4 - 1] [21]) ? 0 : var_9)) : var_2)) : ((((((-1 ? (arr_19 [i_4] [i_4] [i_4] [i_4] [i_8 - 2]) : var_6)) == 32767)))));
                                var_21 = 54098;
                            }
                        }
                    }
                    arr_23 [10] [i_4] = (!-31977);
                    var_22 = 0;
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
