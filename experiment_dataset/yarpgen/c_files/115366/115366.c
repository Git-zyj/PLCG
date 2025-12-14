/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (var_8 / -30012);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = ((-(((arr_6 [i_3 - 2]) ? 0 : (((93 == (arr_3 [i_2]))))))));
                                var_19 ^= 1428284592534648114;
                                var_20 *= min((min((((78 ? (arr_1 [i_4 - 1] [i_4]) : 78))), (arr_7 [i_1] [i_3] [i_4]))), (arr_7 [i_4 - 1] [i_4 + 1] [i_3 - 3]));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (arr_11 [i_0] [i_1])));
                arr_13 [i_1] [i_0] [i_0] = (min(var_1, (arr_2 [i_1])));
            }
        }
    }
    #pragma endscop
}
