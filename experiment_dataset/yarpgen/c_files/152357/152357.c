/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((var_7 < (min((arr_6 [i_1 - 2]), (arr_6 [i_1 + 4])))));
                    arr_8 [11] [11] [11] [11] = (var_13 - var_14);
                }
            }
        }
    }
    var_20 = var_12;
    var_21 = ((((((var_15 ? var_3 : var_9)) - (var_7 == var_8))) >> (var_18 + 12840)));
    var_22 = (max((((511 >> (33511 - 33493)))), var_8));
    #pragma endscop
}
