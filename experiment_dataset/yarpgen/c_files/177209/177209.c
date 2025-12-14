/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_1]);
                var_13 = (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_11 [i_3] [19] = ((((min((arr_5 [i_2] [i_3]), 3739183971))) ? var_9 : (arr_5 [i_2] [i_3])));
                    var_14 = var_6;
                    arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] = (arr_5 [1] [i_4]);
                    arr_13 [i_4] [i_3] [i_2] [i_2] = -var_9;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_15 = (var_11 ? var_2 : ((((!(((555783324 ? 555783325 : 0))))))));
                                arr_19 [24] [24] [i_4] [i_5 - 1] [i_6] [10] [24] = (((arr_15 [i_2 - 1] [i_2 - 1] [8] [i_4] [8] [i_6]) ? (arr_7 [i_6]) : var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
