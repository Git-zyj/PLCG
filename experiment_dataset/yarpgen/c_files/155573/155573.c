/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(max((var_2 != var_8), var_0))));
    var_15 = var_8;
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (((((-1591713331 ? 18446744073709551610 : (-32767 - 1)))) ? 18446744073709551610 : ((((max(var_1, (arr_5 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))))))));
                        var_18 = var_12;
                        var_19 = (max(var_19, ((((((!var_1) ? (arr_7 [i_0]) : (!var_11)))) ? ((var_7 ? ((((arr_7 [i_3]) <= var_0))) : var_7)) : var_4))));
                        var_20 = ((((min((((arr_3 [i_3]) ? 18446744073709551598 : var_2)), (!var_6)))) ? -18446744073709551603 : var_6));
                    }
                }
            }
        }
        arr_11 [12] |= (((((max(var_10, var_3)))) % ((var_7 ? (((arr_5 [i_0] [12] [i_0] [i_0]) ? -32752 : 1)) : (-32767 - 1)))));
        var_21 |= var_13;
        var_22 = ((((50331648 ? 61158 : 58207))) ? var_5 : var_11);
    }
    var_23 = (!var_7);
    #pragma endscop
}
