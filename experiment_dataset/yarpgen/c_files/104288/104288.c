/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = ((!(arr_0 [i_0] [i_1])));
                arr_7 [i_0] [i_0] [i_0] = var_11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 *= (arr_5 [i_0] [i_0]);
                            arr_14 [i_2] &= var_3;
                            arr_15 [i_3] [i_3] [1] [i_1] [i_0] [i_0] = (max(((16102331887196978096 && (arr_4 [i_0] [i_1 - 1] [i_3]))), (arr_2 [i_0] [i_2])));
                            var_17 = var_13;
                            arr_16 [i_0] [i_1] [i_2] [i_3] = -1906817427;
                        }
                    }
                }
                var_18 = var_9;
            }
        }
    }
    var_19 = var_13;
    var_20 = var_3;
    #pragma endscop
}
