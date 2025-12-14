/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_16 == var_3);
    var_19 = var_13;
    var_20 = (var_11 < var_13);
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = (((243 >= -3) <= ((var_10 % (arr_1 [i_0 - 1])))));
                arr_4 [i_0] [7] |= (((((arr_0 [i_0 + 1]) % (arr_1 [i_0 + 1]))) | (var_0 & 6984)));
                var_23 = (((((var_13 < (arr_0 [i_0 - 2])))) == (32749 - 160)));
            }
        }
    }
    #pragma endscop
}
