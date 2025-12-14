/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = min(((((arr_1 [i_0] [i_2]) <= (arr_8 [i_0] [i_1])))), (arr_1 [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] = var_2;
                                var_12 ^= (min((min(var_3, (arr_15 [i_3] [i_1] [i_2] [i_3] [i_0]))), (min((arr_11 [i_0] [i_0] [i_3] [i_3 - 1]), ((min(115, (arr_12 [i_0] [8] [i_2] [i_3 + 2] [i_3] [i_4]))))))));
                                var_13 |= (arr_5 [i_3] [i_2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, var_4));
    #pragma endscop
}
