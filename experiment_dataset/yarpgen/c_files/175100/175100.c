/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_17, ((var_9 ? (min(2684048736, 13631263869152454639)) : var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = (30 != 15485);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = (max((min((arr_2 [i_0]), (var_4 % -15504))), (((((((arr_9 [i_0] [i_2] [i_1] [i_0]) ? -15504 : (arr_2 [3])))) ? ((((arr_4 [i_3]) != (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (arr_9 [2] [i_1] [2] [i_0]))))));
                            arr_12 [i_0] [i_1] [i_2] [1] [i_3] [i_3 + 3] = (arr_10 [i_0] [i_0] [i_2] [i_2] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_22 = (!var_18);
    var_23 = var_8;
    #pragma endscop
}
