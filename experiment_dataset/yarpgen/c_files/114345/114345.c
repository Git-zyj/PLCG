/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 195;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((~((((var_9 ? var_2 : 71))))));
                arr_6 [i_0] [i_1] = min(((min(var_8, var_9))), ((-799568148976157325 ? var_0 : 0)));
                arr_7 [i_1] [i_0] = var_1;
                var_20 = (min(var_20, (((var_15 << (((((min(var_10, var_16)))) + 18)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 = (max(255, (var_11 + var_3)));
                            arr_15 [i_0] [i_1] [i_0] [i_0] = (((~184) * 23));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
