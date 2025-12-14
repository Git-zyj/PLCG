/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((var_4 != (((arr_1 [i_1]) ? (arr_3 [i_0] [i_1]) : var_5)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_10 -= ((+((min((arr_3 [i_0] [i_0]), 2)))));
                            arr_11 [i_2] [i_1] = (min((arr_9 [i_3] [i_2 + 1] [i_1] [3]), ((((((arr_2 [i_3]) & var_9))) ? var_2 : ((min(var_8, 64)))))));
                            arr_12 [i_0] [i_0] [i_0] [6] [i_0] [10] = (max(((((var_8 ? (arr_5 [i_3]) : var_6)) - var_9)), (min(var_1, ((115 ? 154 : -1370062818))))));
                        }
                    }
                }
            }
        }
    }
    var_11 -= ((var_4 ? var_4 : -32753));
    #pragma endscop
}
