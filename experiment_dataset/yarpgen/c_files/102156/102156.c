/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 157183849;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (((65535 & var_1) >> 0));
                    arr_9 [i_1] [i_1] [i_1] = ((~((10352919209556935365 ? (arr_3 [i_0] [11] [i_2]) : (arr_3 [i_1] [6] [i_2])))));
                    var_16 = (max((arr_5 [i_0] [15] [i_1] [i_1]), (((((var_4 ? -738172330 : var_1))) - (((arr_0 [2] [2]) - (arr_7 [i_2] [14] [i_1] [14])))))));
                }
            }
        }
    }
    var_17 = ((var_3 ? var_10 : var_14));
    var_18 = var_3;
    #pragma endscop
}
