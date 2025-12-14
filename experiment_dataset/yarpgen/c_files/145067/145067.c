/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_17));
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_0] = 121;
                            arr_13 [7] [5] [5] [5] [5] [5] = (+-1);
                            arr_14 [i_3 + 1] [i_2 + 1] = ((((9223372036854775807 / (-9223372036854775807 - 1)))) ? 7522956041318464643 : ((((arr_3 [i_0]) ? (min((arr_0 [i_2]), -9223372036854775804)) : (((min((arr_6 [i_0] [i_0] [i_0] [i_2]), 3))))))));
                        }
                    }
                }
                arr_15 [1] [1] [i_1 + 1] = (arr_1 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
