/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -95));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [1] [i_0] [6] = (-125 ^ 774602254031945799);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [3] [i_4] = (max((((max((arr_8 [13] [i_3] [i_3]), var_7)) / (((min((arr_1 [i_1]), var_4)))))), ((((18639 != 30) < var_3)))));
                                var_12 = (min(((((((arr_1 [i_0]) * var_3))) - (var_6 + var_8))), -3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
