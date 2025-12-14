/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_4 > ((min(var_1, var_1))))) ? (((min(var_15, var_2)))) : (min(var_14, (max(var_8, var_3))))));
    var_20 = (min(var_8, ((((max(117, var_15))) ? var_12 : (~var_0)))));
    var_21 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1 + 1] [i_2 + 2] = ((-24605 ? (var_16 / 119004483) : 1));
                    arr_10 [i_0 + 1] [i_1] [i_0] = (((arr_8 [i_0] [i_0]) == ((((arr_3 [i_1 + 1]) ? (arr_7 [i_0 + 2] [i_0] [i_0] [i_2 + 2]) : (arr_3 [i_1 - 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
