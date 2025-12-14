/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((-940392944 || (!var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [10] [i_2] [i_3] [i_0] [i_2] = max((min(((1858394043886295224 ? (arr_3 [i_0] [11] [i_0]) : var_1)), (((!(arr_9 [i_3] [13] [0] [0])))))), -446469434);
                            var_17 = ((((arr_9 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) ? var_1 : var_11)));
                        }
                    }
                }
                arr_12 [i_1] [i_0] = var_4;
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
