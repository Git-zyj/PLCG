/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min((min(var_5, var_6)), -var_0));
    var_14 = min((((var_11 ? -var_3 : (-1 < var_5)))), (((((1 ? 59 : 165))) ? 0 : 11378505818955051641)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 2] [i_1] [i_3] |= (~34);
                                var_15 = ((~(((((var_6 ? (arr_7 [i_0] [i_0]) : var_11))) ? (arr_8 [i_0] [i_0 - 1] [10] [i_0 + 2]) : ((var_7 ? var_9 : var_1))))));
                                arr_12 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_4] [i_0] [i_0 - 1] = 18793;
                                var_16 -= (~1);
                                var_17 = ((min(((min(227, var_0))), (((arr_0 [i_0] [i_1]) ? var_10 : (arr_1 [i_0]))))));
                            }
                        }
                    }
                    arr_13 [i_0 + 1] [i_0] [5] = (max(var_2, ((min((arr_1 [i_2]), var_4)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_18 = -var_7;
                arr_20 [i_5] = (((arr_17 [i_6]) ? (min((arr_15 [i_5]), (arr_16 [i_5]))) : var_10));
            }
        }
    }
    #pragma endscop
}
