/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (arr_2 [i_3] [15]);
                                arr_12 [i_2] [i_1] [i_2] = (((35116 - (arr_7 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4] [i_4 - 1] [i_4]))));
                            }
                        }
                    }
                    arr_13 [i_2] = ((!(((246 ? (arr_5 [i_0]) : (arr_7 [i_0] [6] [i_2] [i_1] [i_0] [5]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_13 = ((!(-618913802 || 7)));
                                var_14 = var_0;
                                var_15 = (14 >= -19);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_3 & (((((min(-11, var_10))) || 2147483647)))));
    var_17 = (!247);
    #pragma endscop
}
