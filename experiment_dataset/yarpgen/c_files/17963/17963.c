/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_7 [2] &= (-32767 - 1);
                arr_8 [i_0] = 0;
            }
        }
    }
    var_17 = (((((807052381 ? var_15 : var_5)))) ? 28 : 6974689089252095481);
    var_18 = -4788284847177676473;

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = (+(((((arr_6 [i_2 + 3]) == (arr_3 [i_2]))) ? 48 : (max((arr_1 [i_2] [i_2]), 6974689089252095481)))));
        arr_12 [6] = (arr_3 [14]);
    }
    #pragma endscop
}
