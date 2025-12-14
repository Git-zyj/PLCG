/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (var_15 & var_14);
                    arr_6 [i_2] [i_1] [i_2] = (((var_10 & 25557) ? ((2120752772 | (var_12 <= -45))) : (((var_0 ? var_8 : ((2174214524 ? 0 : 96)))))));
                    var_18 = ((2120752782 / ((var_13 ? var_10 : (-28365 == 2174214490)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 *= ((-27760 ? 2174214525 : (var_9 / var_6)));
                                arr_12 [i_0] [5] [i_2] [i_3] = 2120752782;
                                arr_13 [i_0] [i_2] [i_0] [i_0] [i_0] = ((73 || (((var_4 ? var_12 : var_16)))));
                            }
                        }
                    }
                    var_20 = 2174214513;
                }
            }
        }
    }
    var_21 = -68;
    var_22 = var_1;
    #pragma endscop
}
