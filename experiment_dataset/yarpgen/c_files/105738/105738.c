/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 1;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((max((arr_0 [i_0 - 2]), var_11))) ? 4534203917156811715 : (!var_16))));
        arr_3 [i_0 + 1] = var_12;
        arr_4 [i_0] [i_0] = (((((var_11 < (arr_1 [i_0 + 1])))) >> (((((((arr_0 [i_0 - 1]) | (arr_1 [i_0]))) - 6322369978429336456)) - 6345224409412704074))));
        arr_5 [i_0] = ((((min((((arr_1 [i_0]) ? var_11 : -1487668878)), (!var_11)))) ? ((((arr_0 [9]) || (arr_1 [i_0])))) : ((((var_16 > var_16) ? 1 : var_10)))));
        var_18 = (min(var_18, (((~(((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (arr_6 [i_1]);
        var_19 += (((max((arr_6 [i_1]), ((!(arr_6 [i_1]))))) ? (((!(arr_6 [i_1])))) : (((67 <= (arr_7 [2] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_20 = (!-68);
                                arr_18 [i_1] [i_4] [i_3] [i_1] [i_5] [i_2] &= (arr_16 [i_1] [i_2 - 3] [i_2] [i_3] [i_2 - 3] [i_5]);
                                var_21 = (max(var_21, (!-9)));
                            }
                        }
                    }
                    var_22 = (((!var_15) && ((!(arr_11 [i_2 - 3] [i_2 + 2] [i_2 - 2])))));
                }
            }
        }
    }
    var_23 = (max(var_23, 17310619314192214476));
    #pragma endscop
}
