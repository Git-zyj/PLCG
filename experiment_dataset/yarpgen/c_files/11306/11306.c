/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_13 [i_2 - 1] &= (arr_10 [i_0 + 2] [i_0 + 2] [i_2] [16]);
                            arr_14 [i_0 - 1] [i_0] [17] [i_2] [i_3] = (arr_0 [i_0]);
                        }
                    }
                }
                var_11 = (max(var_11, (((var_3 ? 1 : (((min(31, 15)))))))));
                var_12 = (min(((~(-2147483647 - 1))), ((~(arr_0 [i_1 - 1])))));
            }
        }
    }
    var_13 = var_2;
    var_14 = var_6;
    #pragma endscop
}
