/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = 769323790;
    var_22 = (var_7 - var_12);
    var_23 = (((~var_13) ? var_3 : var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = arr_0 [i_0] [i_1];
                arr_7 [i_1] [1] [1] = (arr_4 [12]);
                var_24 = var_9;
                var_25 = (((((-(arr_2 [i_0] [i_1 + 2]))) + 2147483647)) >> ((min((((arr_1 [i_1 - 1] [5]) && (arr_4 [i_0]))), (arr_5 [i_1] [i_0])))));
            }
        }
    }
    #pragma endscop
}
