/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 |= var_9;
    var_13 = ((var_1 ? var_9 : ((((!((min(var_7, var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((((34292629504 ? (!0) : 19449))) ^ 18446744039416922112));
                                var_15 = max((min(((((arr_9 [i_0] [i_3] [i_2] [i_0]) + (arr_4 [i_0])))), 3545816597)), (((var_0 ? (arr_4 [i_0]) : (arr_1 [i_0])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] = 64;
                            arr_15 [i_6] [i_0] [i_6] [i_6] [i_6] = (((((~(arr_0 [i_6 - 3])))) || 196));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
