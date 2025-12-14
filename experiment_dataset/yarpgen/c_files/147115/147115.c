/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((-((((!0) < 2)))));
                    arr_11 [i_0] [i_0 + 2] [i_0 + 2] = (1 >= 16048235917866119911);
                    var_18 = (max((max(1201524637, var_8)), ((max((((arr_7 [i_0] [i_0] [i_0]) ? var_4 : 24120)), (var_6 && var_3))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 |= (((min(9, (min(199972854, 18446744073709551613))))) ? (((((!(arr_16 [3] [3] [3] [14] [i_4] [i_2] [i_0])))) / (arr_6 [i_1] [i_0 + 4] [i_0 + 4]))) : (!-80));
                                arr_18 [i_0] [i_2] [i_2] [i_0] = (min(-var_13, (!var_11)));
                                var_20 -= 51139;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((var_6 ? var_5 : 234)) << (2 >= 222))) | var_5));
    var_22 = ((~(min(var_11, (var_15 * var_5)))));
    var_23 |= (max(-450068047, -3545114266654539271));
    #pragma endscop
}
