/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, ((max((((arr_0 [i_0]) & (arr_1 [i_0] [i_0]))), (!38))))));
        var_20 -= -39;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 ^= var_12;
                        arr_13 [i_0] [i_3] [i_0] [i_0] = ((arr_10 [i_0] [i_0] [i_3]) ? ((((arr_12 [1] [1] [i_2] [1] [i_2]) ? (arr_3 [i_0] [i_0] [i_0]) : (max(var_4, 262143))))) : (min((min((arr_2 [i_0]), (arr_0 [i_0]))), (((-(arr_5 [i_0] [12] [i_0])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_22 *= (!(((~(arr_5 [i_0] [i_4] [i_5])))));
                    var_23 = (arr_7 [i_5]);
                    var_24 ^= ((var_9 >> ((((arr_3 [i_0] [i_0] [i_0]) && var_7)))));
                    arr_18 [i_5] [2] [i_5] [i_4] |= ((((((arr_9 [i_0] [i_0]) ? var_13 : var_16))) ? 40 : ((((((arr_7 [i_0]) - var_7))) + -var_13))));
                    var_25 = (min(var_25, ((((~(arr_7 [i_0]))) >> (((max((arr_15 [i_0] [i_0]), (arr_7 [i_0]))) - 41571))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_21 [i_6] = (((((4081123604 | (min(11296, (arr_19 [11])))))) ? ((((arr_19 [i_6]) * (arr_19 [i_6])))) : (max(4, var_5))));
        arr_22 [i_6] [i_6] = ((!((((((arr_20 [i_6]) >> (var_8 - 172))) / (arr_20 [i_6]))))));
        arr_23 [i_6] = (!var_14);
    }
    #pragma endscop
}
