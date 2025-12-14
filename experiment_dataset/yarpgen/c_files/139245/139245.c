/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (((((-(max(var_6, (arr_0 [i_3])))))) || (-3432 * 163)));
                                var_22 = arr_10 [i_2 - 1] [i_2 - 1] [0];
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_6] [i_5] [i_1] [i_0] [i_1] [i_0] [i_0] = var_15;
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((max((arr_15 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 + 1]), (arr_9 [i_1] [i_6] [i_6] [i_6 + 1] [i_6 + 1]))));
                                arr_21 [i_1] [i_1] [i_2] [i_1] [i_1] = ((arr_5 [i_1] [i_1] [i_2]) ? (arr_12 [i_5] [i_1] [i_2] [i_5] [i_1] [i_1 - 1]) : 1596375788);
                            }
                        }
                    }
                    var_23 = (!2698591487);
                }
            }
        }
    }
    var_24 = var_8;
    #pragma endscop
}
