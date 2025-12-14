/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (~3431484938);
                    arr_12 [3] [i_1] [i_2] = (((((3 ? ((max(1, (arr_3 [i_1] [i_1])))) : var_12))) ? (min(3431484952, (arr_7 [i_1] [i_1] [i_1]))) : (arr_2 [i_2])));
                    arr_13 [i_0] = (((((0 % (max(17267643016443451378, 863482357))))) ? (((arr_2 [i_0]) ? var_9 : 14)) : ((((arr_3 [i_0] [i_1]) != var_0)))));
                }
            }
        }
        arr_14 [i_0] = (max(var_4, (((var_8 ? (arr_9 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_19 [i_3] |= ((var_6 ? (arr_1 [i_3]) : 0));
        arr_20 [6] = ((var_0 != (arr_5 [9] [i_3])));
        var_16 = ((var_1 ? (0 != -2030497338) : (arr_6 [i_3] [4])));
    }
    #pragma endscop
}
