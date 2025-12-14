/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [0] = var_5;
                    arr_10 [1] = (min(8128, (min(109, -14634))));
                    var_17 = ((((((min(8987, (arr_0 [i_1])))) & (var_6 != 0))) / (((((var_13 ? (arr_5 [13]) : (arr_3 [i_2] [i_2]))) != (arr_0 [i_1 - 2]))))));
                    arr_11 [i_0 + 2] = var_5;
                }
            }
        }
    }
    var_18 = ((!((((var_8 ? var_14 : var_8))))));
    #pragma endscop
}
