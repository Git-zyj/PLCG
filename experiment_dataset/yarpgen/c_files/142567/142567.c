/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = ((~((~(!65)))));
                    var_13 = ((~((-53 ? (arr_6 [i_0]) : var_12))));
                    var_14 = 13;
                    var_15 = 1;
                }
            }
        }
    }
    var_16 = (((!0) ? ((var_3 ? var_1 : (!var_3))) : 65535));
    var_17 = var_6;
    var_18 = var_10;
    #pragma endscop
}
