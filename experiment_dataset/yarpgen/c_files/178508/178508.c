/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 -= ((((((arr_9 [i_1 + 1] [i_2] [i_3 + 1]) ? (arr_9 [i_1 - 1] [i_2] [i_3 + 1]) : (arr_7 [i_2])))) ? ((((arr_9 [i_1 - 1] [i_2] [i_3 - 1]) ? -18674 : var_12))) : (((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))));
                            arr_13 [i_0] = (((arr_4 [i_1 - 1] [i_3 - 1]) ? 18693 : (((max(var_7, var_6))))));
                            arr_14 [i_0] [i_2] [i_1] [i_1] [i_0] = max(var_3, (max(var_11, ((min(var_0, var_1))))));
                            var_14 = (min(1415045700, (arr_10 [i_2])));
                        }
                    }
                }
                arr_15 [i_0] [16] [12] = (((~(max((arr_12 [i_0] [i_0] [i_0] [i_1 + 2] [i_0]), -18693)))));
                var_15 = -18674;
            }
        }
    }
    var_16 -= (max(var_7, (var_4 > var_5)));
    #pragma endscop
}
