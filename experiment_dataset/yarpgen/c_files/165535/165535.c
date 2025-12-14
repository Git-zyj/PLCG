/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_15 = 32884;
        var_16 = ((102 ? (((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 1]))) : var_13));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 *= ((((((37648 < var_12) ? var_5 : (max(var_12, 1624680699449405354))))) ? (max(var_11, -1612036517)) : (arr_7 [i_0] [i_1] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_18 = (min((((arr_10 [i_2 - 1] [i_1] [i_2] [i_2] [i_0 + 2] [i_0]) ? 1 : (arr_8 [i_2]))), ((13 ? (arr_13 [i_4] [i_4] [i_4 - 1] [i_4 + 2] [i_4 - 1]) : (arr_10 [i_2 - 1] [i_0 - 1] [i_2] [i_2] [i_0] [i_0])))));
                                var_19 *= -124;
                            }
                        }
                    }
                    var_20 = ((~((var_5 ? 3267491057 : var_2))));
                }
            }
        }
        var_21 = (max((arr_8 [10]), (min(1014140941, -0))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                {
                    var_22 = ((((((arr_8 [4]) - 22123))) ? var_11 : (((arr_18 [i_0] [i_0] [i_0 - 2]) ? var_10 : var_10))));
                    var_23 |= 65520;
                }
            }
        }
    }
    #pragma endscop
}
