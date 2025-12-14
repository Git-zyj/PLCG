/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_3] [i_2] [i_1] [i_3] = (((max((arr_6 [i_2] [i_2] [i_0] [i_0]), (arr_6 [i_0] [i_0] [16] [i_0]))) ? (1 & -40) : (arr_6 [i_0] [i_0] [i_2] [i_3])));
                            var_15 = ((!(arr_6 [i_0] [i_1] [i_2] [i_3])));
                            arr_9 [i_0] [4] |= (arr_0 [i_1]);
                            arr_10 [i_0] &= ((!((((arr_5 [i_3] [i_3] [i_3] [i_3]) - (arr_1 [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_16 |= (arr_2 [10]);
                            arr_18 [i_0] [i_1] [i_5] [i_4] [i_5 + 1] = (((~((-77 | (arr_17 [9] [9] [i_5]))))) << ((((((((39 ? -41 : 32)) + 2147483647)) >> (var_12 - 17062961945940478340))) - 1012)));
                            arr_19 [i_5] = (min(var_8, (((arr_7 [i_0] [i_1] [i_5 + 1] [i_5 + 1]) ? (arr_7 [1] [i_5] [i_5 + 1] [i_5 + 1]) : (arr_7 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                            arr_20 [5] [i_1] [9] [i_5] = (!((min(-var_4, (arr_15 [i_0] [11] [i_4] [2] [i_4] [i_5 + 1])))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_0));
    #pragma endscop
}
