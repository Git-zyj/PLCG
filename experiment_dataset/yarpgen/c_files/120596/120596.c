/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [1] = (arr_1 [i_0] [i_1]);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (((arr_4 [i_0 - 1] [i_0] [13]) ? -23 : (max((arr_12 [16] [i_1]), var_2))));
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_0] = (arr_4 [i_1 + 1] [i_1 - 1] [i_0 - 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                arr_21 [i_4] = (((arr_17 [i_4]) - (max(24999, (((17 ? (arr_19 [i_4] [i_5 + 1]) : 50596)))))));
                arr_22 [i_4] [i_5] = (arr_16 [i_5]);
            }
        }
    }
    var_15 = (((min(var_1, ((var_6 ? var_10 : var_6)))) ^ var_3));
    var_16 = ((max((max(var_14, var_4)), ((min(var_11, 25024))))) / var_2);
    #pragma endscop
}
