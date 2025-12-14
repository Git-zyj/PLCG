/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_9 + var_16) | (-370323544 < var_16))) - (((((max(var_14, -370323544))) ? -var_13 : var_14))));
    var_19 |= (((!var_13) == var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 |= ((!(max((arr_8 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1])))));
                    arr_9 [i_0] [i_0] [3] [i_2] = (min(19, var_11));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            {
                var_21 = (+(min((arr_5 [i_4] [i_4] [i_4]), (((arr_3 [i_3] [i_3]) ? -370323530 : 65291)))));
                arr_14 [i_3] = (((-370323551 || (((-(arr_11 [10])))))));
                arr_15 [i_3] [i_3] = (arr_4 [i_3] [i_4 + 2] [i_4 + 2]);
                arr_16 [i_3] [i_3] [i_3] = -245;
            }
        }
    }
    var_22 = (-1084931476 > -115);
    #pragma endscop
}
