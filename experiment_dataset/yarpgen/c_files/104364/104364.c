/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] [i_0] [i_0] = var_4;
                    var_10 = (arr_6 [i_0]);
                    arr_10 [i_0] [i_1] [i_0] [4] = (((arr_2 [i_0]) ? var_2 : (-2147483647 - 1)));
                    arr_11 [3] [i_1 + 1] [i_0] = (max(((~(!0))), (arr_4 [i_0] [i_1 - 1] [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4 - 2] [i_4] [13] = 1848029713;
                    arr_21 [i_3] [i_5] = ((25 ? (((max(var_4, (arr_5 [i_5]))))) : ((1848029720 ? (arr_7 [i_5] [i_5] [i_5] [i_3]) : var_0))));
                }
            }
        }
    }
    var_11 = (((var_8 ? 1616356873 : 4121595446)));
    #pragma endscop
}
