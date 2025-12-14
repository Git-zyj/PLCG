/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_1] [19] [19] = (arr_5 [i_0]);
                    var_16 &= (((arr_6 [i_0] [i_1] [i_2]) ? ((~(arr_1 [i_2]))) : ((((arr_7 [i_0] [8] [i_0]) == (arr_2 [i_0] [i_0]))))));
                }
            }
        }
    }
    var_17 = var_13;
    var_18 = (var_13 / var_2);
    var_19 = (((((var_3 ? ((var_11 ? var_8 : var_9)) : (!12617589299072130908)))) ? var_9 : (var_10 % 12617589299072130878)));
    #pragma endscop
}
