/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_11 && (((-(var_1 * var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = max((((17911 & var_9) << ((var_0 ? 1 : var_12)))), (1 <= 112));
                    var_15 = (min((-8495 && 1113352849666755065), (arr_1 [i_0] [i_0])));
                    arr_9 [i_0] [i_0] [i_0] [8] = ((~((0 ? -33305224 : 17911))));
                    var_16 = ((14500278485398906703 ? 2942 : (((!(((1113352849666755048 ? -5918875838634643629 : -1))))))));
                    arr_10 [i_2] [i_0] [i_2] = (var_6 ? (arr_0 [i_0]) : var_9);
                }
            }
        }
    }
    var_17 = (max(var_4, var_8));
    #pragma endscop
}
