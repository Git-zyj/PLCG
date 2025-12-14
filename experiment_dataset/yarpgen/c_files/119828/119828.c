/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_10 = ((~(((((-121 ? (arr_1 [i_0 + 3] [i_0]) : (arr_1 [i_0] [i_0]))) > ((var_6 ? 101 : -101)))))));
        arr_2 [i_0] = (max((var_0 && var_4), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [7] = (((((max(101, -404)))) > ((((((-9223372036854775807 - 1) ? 0 : var_2))) ? var_2 : var_7))));
        arr_6 [i_1] = (((((-24692 & (var_8 | 108)))) ? ((18446744073709551609 / (arr_3 [i_1] [i_1]))) : (((max(var_4, var_7))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_14 [i_3] [i_3] [i_4] = (((var_6 ? var_4 : -121)));
                        arr_15 [i_3] [i_2] [4] [i_3] = ((-101 % (arr_8 [i_1] [i_3] [9])));
                        arr_16 [i_4] [i_3] [i_3] [i_1] = (((((arr_13 [i_3]) * var_2))));
                        arr_17 [i_2] [i_3] = ((var_5 <= (max(-111, var_2))));
                    }
                }
            }
        }
    }
    var_11 = ((((((min(111, 2934407544))) ? 101 : 103)) << (120 - 104)));
    var_12 = ((100 ? var_0 : (!var_2)));
    #pragma endscop
}
