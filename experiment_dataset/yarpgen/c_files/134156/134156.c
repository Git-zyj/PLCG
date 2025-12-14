/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((~42662), ((var_15 ? -24939 : var_14))));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [7] [i_0] = (((arr_0 [17]) / (min((max(var_12, -124)), (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [1])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_12 [i_0 + 2] [i_1] [i_2] [i_3] [i_3] [4] = (arr_3 [1] [i_4] [i_4]);
                            arr_13 [i_1] [i_3] = (max((min(124, (min(-39, 252201579132747776)))), (arr_11 [i_0] [i_0] [i_0] [9] [i_0] [i_0] [i_0 - 4])));
                        }
                        arr_14 [i_3] [i_0] = (max(2679, 147));
                    }
                }
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
