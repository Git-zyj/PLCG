/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(87, 1605105992))) ? var_4 : ((var_11 ? var_8 : var_5)))));
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_2] = var_8;
                            var_16 = (min(-87, 68));
                        }
                    }
                }
                var_17 = (max(var_17, (((min(16, 43))))));
            }
        }
    }
    var_18 = var_9;
    var_19 += var_8;
    #pragma endscop
}
