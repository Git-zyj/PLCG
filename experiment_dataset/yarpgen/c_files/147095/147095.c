/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((var_0 ^ (((var_13 ? var_11 : (((-8 ? 12 : 13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [1] [4] &= var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = -14;
                            arr_12 [i_0] = (var_13 ? -2 : -2502633481);
                            var_18 = (((arr_3 [i_0] [i_1] [i_3]) ? (((arr_3 [i_1] [i_2] [i_3]) - var_3)) : (min((arr_3 [i_0] [i_1] [i_2]), 1))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_19 = (((arr_18 [4] [i_0] [i_4] [i_4] [i_4] [i_4]) * -var_13));
                            var_20 = (min(var_20, -var_10));
                            arr_20 [i_0] = ((((((arr_0 [i_0]) ? 7 : var_2))) ? ((max((arr_0 [i_0]), (arr_0 [i_5])))) : ((max(var_3, (arr_0 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 |= (992175887 | 15131);
    var_22 |= var_1;
    #pragma endscop
}
