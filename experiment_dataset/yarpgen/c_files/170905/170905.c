/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((((min((min(var_1, 221)), var_1))) ? var_0 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (((((arr_4 [i_0] [i_1 - 1]) && 36028797018963967)) && (arr_4 [i_0] [i_0 - 1])));
                arr_5 [i_0] [i_1] = arr_0 [i_0];
                arr_6 [i_0 + 1] [i_0 + 1] [i_0] = ((var_6 & ((var_0 & (arr_0 [i_1 - 2])))));
                arr_7 [11] = (max(((min(var_7, (arr_2 [i_0] [i_1 + 2])))), (max((arr_0 [i_0 + 3]), 36028797018963966))));
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
