/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 *= (((((~(!30)))) ? (min(-1, ((var_3 ? var_11 : 207)))) : (((max((min(var_13, (arr_3 [i_2 - 1] [i_1] [i_0]))), (arr_6 [i_1] [i_3])))))));
                            var_21 += (min((max(var_18, (arr_9 [i_0 + 2]))), var_3));
                            arr_11 [i_3] = (var_15 / ((~(arr_9 [i_0 - 3]))));
                            arr_12 [i_0 + 2] [i_0 + 2] [i_0 + 2] = var_5;
                        }
                    }
                }
                var_22 &= ((!(!var_8)));
                var_23 = (arr_0 [i_0] [i_0 + 4]);
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
