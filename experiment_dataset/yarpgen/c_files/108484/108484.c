/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 -= (min((max((arr_0 [19]), (arr_0 [i_0 - 2]))), (((arr_5 [14] [i_0 + 1] [i_4] [i_4]) && (arr_7 [i_0 + 1] [i_0])))));
                                var_16 = (var_6 & var_8);
                            }
                        }
                    }
                    var_17 = min((max((((arr_9 [i_0] [i_1] [i_2] [i_2]) ? 0 : (arr_2 [i_0] [i_1] [i_2]))), (0 >= var_4))), var_3);
                    arr_14 [i_2] [17] [i_2] = ((-(((((-(arr_5 [i_2] [i_2] [9] [i_2])))) ? -7223316325255281037 : var_7))));
                    var_18 = (((max((1 * 0), ((min(0, 1))))) == (var_11 < var_13)));
                }
            }
        }
    }
    var_19 = (min((((1 * var_6) << (max(var_12, 1)))), var_14));
    #pragma endscop
}
