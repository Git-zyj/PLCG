/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((38513 >= var_6) || (((61791 ? 3749 : var_3))))))) >= var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] [11] = (((((250 ? var_0 : var_5))) || (((var_9 ? var_0 : var_7)))));
                    var_11 = ((803047140 ? 121 : var_0));
                }
            }
        }
        var_12 = (var_3 || var_6);
        var_13 = ((var_2 ? var_5 : ((var_3 ? 13 : var_5))));
    }
    #pragma endscop
}
