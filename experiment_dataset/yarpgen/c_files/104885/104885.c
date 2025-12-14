/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((5953957318731232554 - (max((max(4611686014132420608, var_2)), (!34399704)))));
        arr_4 [i_0] [i_0] = (((max((arr_2 [i_0]), var_2))) & (((-5953957318731232555 >= (arr_2 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2 + 2] [i_2 - 1] [i_1] = ((!((min((var_1 & 1002947850), -64)))));
                    arr_14 [i_1] [7] = ((-5953957318731232555 ? -64 : 3611));
                    arr_15 [i_1] [i_3] = (max(-1817102498, -1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            {
                var_12 = (max(var_12, var_7));
                var_13 = (max(var_13, (!1)));
                var_14 = (((!5953957318731232570) ? var_9 : (!2675474565951715097)));
            }
        }
    }
    #pragma endscop
}
