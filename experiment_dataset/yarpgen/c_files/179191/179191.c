/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_1]) ? ((var_8 / (arr_0 [i_1 + 3]))) : (arr_0 [13])));
                arr_5 [i_0] [i_0] [i_0] = (((arr_1 [i_0]) < (((max(var_4, (arr_1 [8]))) - ((var_0 ? var_12 : var_12))))));
                arr_6 [i_0] [i_1] = (max(var_4, (-1280 - 5356)));
            }
        }
    }
    #pragma endscop
}
