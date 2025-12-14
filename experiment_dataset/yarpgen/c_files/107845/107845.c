/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_14;
    var_16 = 0;
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = 60;
                                var_19 = -1;
                                var_20 = (~-1);
                            }
                        }
                    }
                    var_21 = (((arr_0 [i_2 - 1]) ? ((((arr_5 [i_2]) ? (arr_1 [i_0] [1]) : 1))) : (max((((arr_7 [i_0] [i_1] [i_2] [i_2 - 2] [i_2]) ? var_13 : 1)), (((var_13 ? var_4 : 205)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_22 &= (arr_4 [i_0] [i_0]);
                                var_23 = (max((((((((arr_15 [i_0] [i_0] [i_0] [4] [i_6 - 1]) ? var_5 : (arr_17 [i_0] [i_1] [i_1] [i_0])))) ? (arr_1 [i_1] [i_1]) : ((((arr_13 [i_5] [i_5] [1] [i_5] [i_5] [i_5]) || (arr_7 [6] [6] [i_2] [i_2] [i_2]))))))), (-2147483647 - 1)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
