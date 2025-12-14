/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((((max(var_7, var_8)) >> (((max(var_0, var_5)) - 16288655001139623522)))), var_6));
    var_11 ^= (max(var_5, ((var_1 ? (~var_9) : (max(var_1, var_2))))));
    var_12 = ((var_6 ? (var_0 + var_9) : (((var_2 ^ var_9) ? var_5 : (((var_5 ? var_8 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (~var_4);
                    var_13 = ((var_3 ? (arr_4 [i_0] [i_0] [i_0 + 2]) : (var_3 && var_5)));
                }
            }
        }
    }
    #pragma endscop
}
