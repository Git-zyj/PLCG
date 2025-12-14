/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 &= ((3 & -22018) << (4277161148 - 4277161134));
                    var_20 = ((~((~(max((arr_1 [i_0]), -3))))));
                    arr_8 [i_0] [i_1] [1] = ((-((-(var_8 & 6737383447515089198)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = (((arr_12 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]) ? (arr_3 [i_4] [i_2]) : var_18));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~30);
                                var_21 = (arr_3 [10] [i_1]);
                                var_22 = (min((max((max((arr_1 [i_0]), 78)), 1033746304275290932)), ((max((!1680854097859692713), (arr_10 [i_4] [i_3 - 1] [i_3] [i_2] [i_1] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_13));
    #pragma endscop
}
