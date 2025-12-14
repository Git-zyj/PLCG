/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (max((((-(arr_4 [i_0 - 1])))), ((var_2 ? var_2 : (max((arr_3 [i_0] [i_1]), (arr_1 [i_2])))))));
                    var_12 = (arr_5 [i_0] [i_1] [i_2] [19]);
                }
            }
        }
    }
    #pragma endscop
}
