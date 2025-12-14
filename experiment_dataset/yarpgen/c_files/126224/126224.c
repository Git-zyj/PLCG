/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (((((((var_6 ? (arr_2 [i_0]) : (arr_0 [12]))) | (arr_0 [i_2 + 3])))) & var_10));
                    var_14 = (~((((var_4 ? var_9 : var_9)) >> ((var_7 ? var_5 : var_5)))));
                }
            }
        }
    }
    var_15 = (min(var_0, ((!(!var_12)))));
    #pragma endscop
}
