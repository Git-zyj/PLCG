/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= ((((((128 <= -5799391415888620919) >= var_10))) >> (((min((max(var_10, var_10)), (min(20930, var_8)))) - 20928))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (((((min(var_6, var_3)))) << ((((25 - (max(var_8, var_11)))) - 3120042223531350840))));
                            var_14 = (~var_5);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((((arr_13 [3] [i_0] [i_1] [i_4] [i_4]) - (arr_10 [i_0] [i_1] [1]))), (((var_1 != (((var_5 || (arr_5 [1] [i_5] [i_4] [i_5 - 1])))))))));
                            arr_16 [i_5] [i_1 - 1] [i_5] [i_5] &= ((!(var_7 | var_6)));
                            arr_17 [i_5] [i_4] [i_1] [i_1] [i_0] = (((min(var_1, (var_5 + 1))) - var_0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
