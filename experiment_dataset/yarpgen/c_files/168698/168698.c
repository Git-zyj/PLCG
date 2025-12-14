/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [0] [i_1] [i_1] [0] = ((max((arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 2]), (min((arr_6 [i_1] [i_1]), 17046)))));
                    arr_9 [i_1] [i_1] [20] = 4414;
                    arr_10 [i_1] [i_1] [i_1] = ((!((max((arr_5 [i_1] [i_1] [7] [i_2]), 61121)))));
                }
            }
        }
    }
    var_17 = var_10;
    var_18 = (((var_12 < var_5) ? ((max(var_11, var_15))) : var_0));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_17 [i_4] = -42;
                arr_18 [i_3] [i_4] = (min(-127, 19867));
                arr_19 [i_4 - 1] = (((max((((arr_7 [17] [20] [i_3]) & (arr_4 [13] [13]))), (((arr_13 [i_4 - 1]) ? (arr_5 [i_3] [i_4 - 1] [i_4] [i_4]) : (arr_2 [i_3] [i_3]))))) & (arr_6 [i_3] [i_4 - 1])));
                var_19 += (arr_3 [i_3] [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}
