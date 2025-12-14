/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] [i_0] = var_15;
                var_17 = (arr_3 [i_0 + 1] [i_0] [i_0]);
                var_18 = (max(var_18, (((arr_0 [i_0] [i_1]) ? -6674136670423958998 : (((max((arr_0 [i_0 + 1] [i_1]), 1))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 13929344382095642986;
        var_19 = (max(((11989633773056037138 == (arr_4 [i_2]))), (max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))));
        arr_10 [i_2] [i_2] = ((-(((1 * var_12) ? (arr_4 [i_2]) : (arr_0 [i_2] [i_2])))));
    }
    #pragma endscop
}
