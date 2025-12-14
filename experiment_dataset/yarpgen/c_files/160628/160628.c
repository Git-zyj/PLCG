/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_4 / var_7) ? var_6 : var_11));
    var_15 = (min(var_15, ((((2985839976 ^ (max(1073739776, 1237903138))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = ((((min(9054691901610587853, var_9))) ? 15804978875249181907 : var_8));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_16 ^= (arr_12 [i_3] [i_3] [i_3] [i_3]);
                        var_17 = (+-1697098969);
                        var_18 = (arr_1 [i_2] [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((15 ? var_1 : 9392052172098963777));
                        var_19 = (arr_0 [i_0] [i_0]);
                    }
                    var_20 = 29146;
                    var_21 = (max(var_21, ((((!var_3) ? (60 > 6) : (arr_4 [i_2] [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
