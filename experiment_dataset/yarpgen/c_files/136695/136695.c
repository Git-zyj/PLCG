/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 30720));
    var_13 = (max(var_3, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_1 [i_1] [i_0]);
                arr_7 [18] [i_0] = ((((((arr_2 [i_0]) ? (arr_5 [i_0] [i_0] [i_1]) : var_8))) || (arr_5 [i_0] [i_1] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (arr_5 [i_1] [i_2] [i_3])));
                            arr_13 [1] [15] [4] = (((min(-4537426693906288551, (arr_0 [i_3] [i_2]))) % ((((((var_9 ? -6318 : -6318)) != (arr_12 [i_3] [i_2] [i_1] [i_0])))))));
                        }
                    }
                }
                arr_14 [i_0] = var_2;
                arr_15 [i_0] [i_0] [i_0] &= (arr_1 [17] [0]);
            }
        }
    }
    var_15 = ((var_10 ? (((max(var_1, (max(var_6, 6317)))))) : var_9));
    var_16 = (min(4537426693906288558, ((((-561 - var_5) ? -6315 : var_1)))));
    #pragma endscop
}
