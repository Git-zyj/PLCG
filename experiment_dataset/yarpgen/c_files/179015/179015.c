/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((var_12 ? (arr_0 [i_0 - 3]) : -var_0))))));
                    arr_9 [i_2] [i_2] [i_2] = var_11;
                    var_14 = (min(var_14, ((((((max((arr_6 [i_1 - 1] [i_2 - 1] [i_2]), (arr_6 [i_1 - 1] [i_2 - 1] [i_2]))))) & (((arr_6 [i_1 + 1] [i_2 - 1] [i_1 + 1]) ? var_2 : (arr_6 [i_1 - 1] [i_2 - 1] [i_2]))))))));
                    var_15 = (((arr_2 [i_0 - 2] [i_2 - 1]) ? (!1) : (min(var_3, (arr_2 [i_1 + 1] [i_1])))));
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
