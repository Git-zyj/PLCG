/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = (!65535);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((-28919 ? 0 : -32758));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] = (!0);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [7] = ((!(arr_11 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])));
                        }
                    }
                }
                arr_16 [i_1] [i_0] = ((!(((103 ? -5854069655852237720 : (arr_3 [i_0 - 2]))))));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
