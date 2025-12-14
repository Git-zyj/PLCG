/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 ^= (arr_1 [i_0]);
        arr_2 [i_0] = -44511;
        arr_3 [8] = ((-(arr_1 [i_0])));
        var_20 = 4638763806692801481;
    }
    var_21 += var_0;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_18 [i_2] [i_3] [6] [i_4] [i_3] [i_2] |= (arr_17 [i_4] [i_4] [i_4] [i_4]);
                            var_22 += ((!((max((arr_4 [11]), 6257825409536803571)))));
                        }
                    }
                }
                var_23 = (max(var_23, ((min(var_8, ((-(~72))))))));
            }
        }
    }
    #pragma endscop
}
