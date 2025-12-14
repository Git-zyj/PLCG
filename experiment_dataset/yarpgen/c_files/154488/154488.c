/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [11] [i_2] = ((1 ? 1 : -27834));
                    var_12 = (min((min((1 || 47305), (((arr_2 [i_2] [i_0] [i_2]) ? var_9 : 7522974665727237662)))), (arr_8 [i_0] [i_0])));
                    arr_10 [18] [i_1] [i_0] = -69;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_4] = (min((((!(((22918 ? -16047 : 7522974665727237661)))))), (max((((arr_0 [i_3] [18]) ? -1539095845 : var_10)), (arr_0 [16] [i_3])))));
                var_13 += (min(((min((arr_2 [i_3 + 2] [1] [i_4]), 1))), (((arr_2 [i_3] [8] [i_3]) ? 144 : (arr_0 [i_4] [i_3 + 1])))));
            }
        }
    }
    #pragma endscop
}
