/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = 1;
                arr_6 [i_1] [i_1] [i_0 - 1] = ((1 <= (max(65535, (1 + 1680365636169724814)))));
                arr_7 [12] [9] [i_0 + 1] = 65527;
                arr_8 [i_0] = (max(438809541, -1230264256));
            }
        }
    }
    var_13 = ((((!(!63))) || 1));
    #pragma endscop
}
