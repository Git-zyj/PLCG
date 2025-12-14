/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((127 % ((98924178 ? 1 : 3217678261)))), var_14));
    var_16 = var_12;
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = -var_2;
                    arr_11 [i_2] = ((2147483647 ? var_6 : 524287));
                    arr_12 [4] [i_1] [i_2] = ((!((var_10 != (((arr_2 [i_2]) / var_14))))));
                }
            }
        }
    }
    #pragma endscop
}
