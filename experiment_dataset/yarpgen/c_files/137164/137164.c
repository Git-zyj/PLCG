/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [0] = ((((arr_0 [i_0]) & (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [8] [6] [6] [i_0] = ((min(62168, 1)));
                    arr_8 [i_2 + 1] [i_0] [i_0] = arr_4 [i_0];
                    arr_9 [i_2] [1] [1] [2] = ((-88 - ((-0 ? ((-22236 / (arr_4 [6]))) : (arr_4 [0])))));
                    arr_10 [16] [i_1] [6] = (arr_6 [i_1]);
                }
            }
        }
        arr_11 [i_0] [8] = (((((87 + (arr_6 [3]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = 1;
        arr_16 [i_3] = (arr_14 [i_3] [i_3]);
        arr_17 [i_3] [i_3] = (-122 | 15856);
    }
    var_18 = ((~((((((-127 - 1) ^ 1))) & (min(1528978210199047997, 1))))));
    #pragma endscop
}
