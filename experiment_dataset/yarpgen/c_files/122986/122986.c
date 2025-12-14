/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = (((arr_11 [i_2] [i_2 - 1] [i_2 - 3]) ? ((((arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 3]) <= (arr_11 [i_2 - 3] [i_2 - 1] [i_2 - 3])))) : var_13));
                    arr_12 [i_0] [i_1] = var_4;
                }
            }
        }
        arr_13 [i_0] [i_0] = (max((((!(((1 ? var_3 : -55)))))), ((512 ? ((min(48, 1))) : (arr_2 [i_0])))));
        var_16 = (min(var_16, ((2808528451 ? var_14 : var_0))));
    }
    var_17 = (min(var_17, var_6));
    #pragma endscop
}
