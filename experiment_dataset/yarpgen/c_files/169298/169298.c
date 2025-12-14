/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0] [i_0]) > var_4)) ? var_12 : (((-(arr_0 [i_0] [i_0])))))));
        var_21 = var_3;
        var_22 ^= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 = -var_11;
                    var_24 = (arr_5 [i_0] [3] [i_0] [i_0]);
                    var_25 = (arr_4 [i_1] [0]);
                }
            }
        }
    }
    #pragma endscop
}
