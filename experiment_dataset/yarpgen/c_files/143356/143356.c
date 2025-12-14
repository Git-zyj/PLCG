/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((-2147483647 - 1) || var_7))))));
    var_18 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = (((max(-830692080, var_6))) ^ (((arr_5 [i_0] [i_0] [3]) << (((arr_1 [i_1] [i_2 + 1]) - 3877016628)))));
                    var_19 = (-347925476 / ((4294967286 ? 830692070 : 1892072077)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, 1461785268));
                                arr_15 [i_2] [i_3] [i_2] [i_2] [i_2] = ((-((var_0 ^ (~var_10)))));
                                var_21 = (4294967280 == var_8);
                                var_22 = (~-830692070);
                            }
                        }
                    }
                    arr_16 [i_2] = (~(var_6 < var_2));
                    var_23 = (min(var_9, -1259774445));
                }
            }
        }
    }
    #pragma endscop
}
