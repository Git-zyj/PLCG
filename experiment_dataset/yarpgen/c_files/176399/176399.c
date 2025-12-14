/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] &= ((-((var_9 ? (((arr_7 [i_1 - 1] [i_0] [i_1]) ? var_13 : (arr_3 [i_0] [i_0] [i_2]))) : ((((arr_7 [i_0] [i_0] [i_1 - 1]) ? -1 : var_16)))))));
                    var_21 &= (((((var_5 | (arr_7 [i_1 + 1] [i_0] [i_1 - 1])))) ? ((~(arr_7 [i_1 + 1] [i_0] [i_1 - 1]))) : (((arr_7 [i_1 - 1] [i_0] [i_1 - 1]) ? (arr_7 [i_1 + 1] [i_0] [i_1 + 1]) : var_2))));
                    arr_10 [i_0] [i_1] [i_0] [i_2] |= (min((((11 && ((max(var_11, (arr_4 [i_2] [i_1 - 1] [i_0]))))))), ((-(-1 % var_6)))));
                    arr_11 [i_0] [i_0] [i_0] [i_1] = ((arr_6 [i_2] [i_1] [i_2]) ? -var_2 : (var_5 ^ 9940359014827149924));
                }
            }
        }
    }
    var_22 = var_18;
    #pragma endscop
}
