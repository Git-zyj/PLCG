/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = var_4;
        arr_3 [i_0] = ((255 ? 1 : 624208940));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_12 |= 624208940;
            arr_6 [i_0 - 1] [i_0 - 1] = (((arr_5 [i_1 - 3] [i_0 - 1]) ? (arr_5 [i_1 - 3] [i_0 - 1]) : (arr_5 [i_1 - 3] [i_0 - 1])));
        }
        var_13 = ((~(((var_1 + 9223372036854775807) >> (((arr_1 [i_0 - 1]) - 17668993277355398976))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_2] = (max((arr_11 [i_2 - 3] [i_2 - 1]), ((max(-32745, -20)))));
                arr_13 [14] [i_2] [i_2] = (min(var_8, (((arr_11 [i_2] [i_3]) - var_9))));
            }
        }
    }
    #pragma endscop
}
