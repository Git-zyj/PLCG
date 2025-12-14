/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_0, 4126821265));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = -8352100042484250052;
                            var_17 = 1520950428149495187;
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (min((max((arr_11 [i_1] [i_0 - 2] [i_1 - 2] [i_1 - 2] [1] [i_1]), (arr_10 [i_0] [i_1] [i_0 - 1] [i_0] [i_0]))), 8783383962364192247));
                arr_13 [i_1] = (arr_5 [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
