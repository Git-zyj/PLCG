/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = var_6;
    var_14 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 -= (((((var_7 ? -935596981 : -28408))) ? ((0 ? var_2 : 1862)) : (((~(arr_11 [i_2 - 1]))))));
                                arr_13 [i_2] [i_0] = (max((max(((max(var_1, (arr_0 [i_0])))), (max(1, 0)))), (((!(96 < 101))))));
                                arr_14 [9] [i_0] [i_0] [i_3] [i_4] = (arr_5 [i_3]);
                            }
                        }
                    }
                    var_16 = (max(221902230, var_7));
                }
                arr_15 [i_0] [i_0 - 3] [i_0] = 935596986;
            }
        }
    }
    #pragma endscop
}
