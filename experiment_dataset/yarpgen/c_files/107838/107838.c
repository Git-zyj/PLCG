/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(3884475310, ((max((var_15 - var_11), ((min(52781, 12755))))))));
    var_18 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [1] [i_2] = 12764;
                    var_19 = ((((-12755 ? ((52792 ? var_16 : -22440)) : (arr_2 [i_2] [i_0]))) << (-var_9 + 62)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (~1);
                        arr_10 [1] [i_1] [i_2] [i_0] = (((!52780) ? (((((var_14 ? 1079491972 : (arr_5 [i_0]))) >= 52781))) : var_7));
                    }
                }
            }
        }
    }
    var_21 = (((min(var_12, var_15))));
    #pragma endscop
}
