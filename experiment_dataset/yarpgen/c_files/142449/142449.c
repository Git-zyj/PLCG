/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (min((~var_10), var_10));
    var_12 = (max(var_0, var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = ((!(arr_6 [i_0] [i_0 - 1] [i_0 + 1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 + 3] [i_1] [i_1] [i_2] [i_1] [i_3 + 1] = var_1;
                            var_14 = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
