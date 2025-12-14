/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4294967295;
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = 49930;
                var_20 = ((-(arr_1 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 = (max(17661331131679358348, ((min(((((arr_6 [i_0] [i_0]) > 1))), 1)))));
                            arr_13 [i_1] [i_1] [i_1] = 59622;
                            arr_14 [i_2] [i_0] [12] [i_3] [12] = 1;
                        }
                    }
                }
            }
        }
    }
    var_22 = 59622;
    #pragma endscop
}
