/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((min((!0), (65535 * var_11))))));
    var_13 = 0;
    var_14 |= var_11;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_15 = (min((min((arr_5 [i_2 + 1] [i_0 - 2]), (arr_1 [i_0]))), (((-(((arr_8 [i_2] [i_1] [i_0 - 2] [i_0]) ? (arr_2 [19]) : (arr_6 [1] [i_1] [i_2 + 1]))))))));
                    arr_9 [i_2 + 1] [i_0] [i_0] = ((var_5 - (min((min((arr_7 [i_0] [i_1] [9] [i_2]), var_6)), (((var_3 ? 112 : var_11)))))));
                }
            }
        }
    }
    #pragma endscop
}
