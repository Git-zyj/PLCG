/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((max(var_13, ((-10893 ? (~0) : 65535)))))));
                var_17 = (arr_2 [i_0]);
                var_18 = (((~(arr_3 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_6 [i_2] [3] = (((~70368744177536) <= (arr_2 [i_2])));
        var_19 = ((((((arr_0 [i_2]) > 18446673704965374078))) < (((var_3 ? ((~(arr_3 [i_2] [i_2] [i_2]))) : (arr_1 [i_2]))))));
    }
    #pragma endscop
}
