/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, -var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 += 10370;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (min(-24, (arr_9 [i_3] [i_0] [i_1] [i_0])));
                                var_20 = (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_1] [i_0] [i_4 - 1]) : 255));
                            }
                        }
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_0] = (max(((9151314442816847872 ? 0 : ((min(10381, 244))))), ((var_14 ? 0 : (!15095537615854867120)))));
                }
            }
        }
    }
    var_21 = (((!55165) & (((((var_13 ? 0 : -24))) ? var_10 : var_5))));
    #pragma endscop
}
