/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((1195350873 ? 1977209241826974742 : 116)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_1] = (max((((arr_8 [i_0] [i_0] [i_0] [i_3] [i_0]) ? (arr_8 [i_3] [i_2] [i_1] [i_1] [1]) : (arr_8 [14] [i_0] [i_1] [i_2] [i_3]))), (((var_11 ? var_4 : 139)))));
                            var_13 = (max(var_13, (((((((~(arr_9 [i_0] [i_0] [0] [i_0]))) + 2147483647)) >> (var_10 - 2653017066217284519))))));
                        }
                    }
                }
                arr_11 [i_0] [6] &= (!var_1);
            }
        }
    }
    var_14 &= (((min((36020000925941760 * var_6), (var_4 % var_5))) << ((((118 ? 12763 : 1486911512948044844)) - 12732))));
    var_15 = var_9;
    #pragma endscop
}
