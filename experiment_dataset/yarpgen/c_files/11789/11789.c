/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (((((var_2 ? var_4 : var_4))) ? ((((((var_6 ? var_9 : var_6))) ? var_6 : var_5))) : ((var_2 | ((var_3 ? var_0 : var_4))))));
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (var_4 < var_4);
                    var_13 = var_7;
                    arr_8 [i_0] = ((2147483647 & (((var_5 ? var_8 : var_9)))));
                    var_14 |= ((((((var_3 ? var_8 : var_7)))) ? ((var_5 ? ((var_6 ? var_9 : var_3)) : ((var_4 ? var_5 : var_6)))) : ((-var_8 ? ((1017428517 ? 2147483647 : 16)) : ((1017428517 ? 2147483647 : 65515))))));
                }
            }
        }
    }
    #pragma endscop
}
