/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((((min(((var_16 ? var_9 : var_9)), var_10))) ? 11224242891945516188 : ((var_15 ? var_10 : ((var_14 ? var_2 : var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = 29453;
                    arr_8 [i_0] = (~(arr_1 [14]));
                }
            }
        }
    }
    var_20 = ((-((((min(64, var_10))) * (var_2 < var_4)))));
    var_21 = (min(var_21, (((var_14 ? var_3 : (((((var_13 ? var_4 : var_15))) ? var_17 : var_2)))))));
    var_22 = (((~((max(var_8, var_8))))));
    #pragma endscop
}
