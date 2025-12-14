/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((((~var_2) ? 1 : var_4)), 1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((min((arr_2 [i_2] [12] [i_2]), (max((max((arr_1 [1]), (arr_1 [20]))), (arr_4 [i_2] [i_1] [i_0] [i_0]))))))));
                    var_16 = ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? -1 : (max((arr_0 [i_0]), var_4))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 -= 1;
                                var_18 = 69;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (~var_11);
    #pragma endscop
}
