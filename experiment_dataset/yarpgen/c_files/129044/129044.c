/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [4] [4] |= (!62462);
                arr_7 [4] [0] = (((3977107799 / 2070021627) ? (((!(arr_2 [i_0] [i_1 + 1])))) : ((~(arr_2 [i_0] [i_1 + 2])))));
                arr_8 [i_1] = (-62462 ? (min((!3073), ((246 - (arr_3 [i_1] [i_1 + 3] [i_0]))))) : (((arr_4 [i_0 - 1] [i_1 + 3]) / var_14)));
            }
        }
    }
    var_17 = ((!(3073 && var_4)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2 + 1] [i_2 + 1] = ((-((min((arr_12 [i_3]), (arr_10 [i_2]))))));
                arr_14 [i_2] [i_2] = (min((((!(arr_9 [i_2] [i_2])))), ((min(62463, 327000249)))));
            }
        }
    }
    var_18 = var_14;
    #pragma endscop
}
