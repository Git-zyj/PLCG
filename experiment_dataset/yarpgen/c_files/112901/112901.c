/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_13 ? 338680092 : 9223372036854775807)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = (max((arr_1 [9] [1]), ((min(-14, var_12)))));
                    arr_8 [i_0] [i_0] [i_0] = (max(var_7, (arr_2 [i_2 + 1])));
                    var_19 = arr_3 [i_2 - 1] [i_2 - 3] [i_2 - 1];
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 2] = (-((((((!(arr_6 [i_1] [0])))) < var_0))));
                }
            }
        }
    }
    var_20 = -var_17;
    var_21 |= ((((min((-14 + var_8), -1541335032))) ? ((max(var_12, -var_12))) : ((var_14 - ((var_12 ? var_5 : var_9))))));
    #pragma endscop
}
