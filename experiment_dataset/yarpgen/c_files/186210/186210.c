/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 ^= ((-65535 / ((46 * (arr_5 [i_0] [i_1] [i_2] [i_2])))));
                    arr_8 [15] [15] [15] [i_0] = ((~((var_6 ? (arr_2 [i_0]) : (var_6 >= 1210455990)))));
                }
            }
        }
    }
    var_12 = (((var_4 || var_8) | var_1));
    var_13 = (min((((var_10 ? var_3 : var_10))), (((((var_9 ? -32 : var_2)) < (0 * var_3))))));
    #pragma endscop
}
