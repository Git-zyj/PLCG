/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (!-787039214);
    var_21 = ((max(1, var_12)));
    var_22 &= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_23 = ((((-29 > ((53415 ? var_15 : (arr_0 [i_2]))))) ? ((min(var_7, 125))) : 812916716));
                    var_24 = (max(var_24, ((max((!1), ((var_18 ? ((1588227703 ? 1102029784 : (arr_1 [i_2]))) : var_12)))))));
                    var_25 |= ((0 ? var_10 : (((arr_4 [i_0]) ? var_7 : var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_26 = var_16;
                                var_27 = (arr_12 [i_1] [i_1] [i_1] [12] [i_3 - 3]);
                                var_28 = ((((max((arr_6 [i_3 - 2] [i_1] [9] [i_3]), ((var_9 ? var_14 : var_17))))) * (max((var_13 / var_2), (max(3441917651, 6606))))));
                            }
                        }
                    }
                    var_29 -= (1705477526 ? ((min(853049645, var_0))) : 853049645);
                }
            }
        }
    }
    #pragma endscop
}
