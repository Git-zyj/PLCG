/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 = var_6;
                    var_12 = (max((((-(max((arr_0 [i_2 - 1]), 1297475914))))), (max((max(var_3, (arr_5 [i_1 - 3]))), (arr_3 [i_0] [i_0] [i_2 - 1])))));
                }
            }
        }
    }
    var_13 = var_2;
    var_14 = (((!30720) ? var_0 : 2997491382));
    #pragma endscop
}
