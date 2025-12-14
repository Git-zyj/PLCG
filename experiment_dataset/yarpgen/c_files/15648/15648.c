/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 2147483647;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (max((max((((arr_0 [1]) & var_11)), ((min(-50, var_0))))), (min(var_5, var_11))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1 - 2] [13] [i_0] [i_3] = ((0 ? var_5 : (((((((arr_1 [i_0]) ? (arr_8 [1]) : var_0))) || ((min(34785, var_12))))))));
                            var_14 = (max(var_14, (arr_9 [i_1] [10] [4] [i_3] [i_1 - 1] [i_3])));
                            var_15 = (min(var_15, ((max(((max(var_3, (!124)))), (arr_9 [i_1] [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_1 - 1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_16 ^= var_6;
    #pragma endscop
}
