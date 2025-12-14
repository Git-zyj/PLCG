/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((var_10 ? var_3 : var_0)))));
    var_21 = (max((((((-16824 ? var_0 : var_11))) ? (((var_2 ? var_13 : var_16))) : var_14)), ((((min(var_15, var_17)) - (((-16824 ? 14 : 14))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((arr_2 [9]) ? ((((((var_19 / (arr_0 [i_0] [i_0])))) ? var_13 : (((!(arr_3 [i_0]))))))) : 0));
        arr_5 [i_0] [i_0] = ((((var_13 ? var_19 : var_4))) ? var_5 : ((~(((1647042806 <= (arr_2 [i_0])))))));
        arr_6 [i_0] = (((((((arr_2 [11]) ? (arr_2 [i_0]) : (arr_3 [i_0])))) ? var_18 : (arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_15 [12] [12] [i_2] [0] = 71;
                    arr_16 [6] [i_2] [10] = (((arr_13 [i_1] [11] [11] [i_3]) - (((-29512 / var_10) ? var_15 : (min((arr_3 [i_1]), (arr_8 [i_3])))))));
                    arr_17 [i_3] [i_2] = (max((arr_8 [1]), (((!(((var_1 ? var_8 : (arr_12 [i_3] [i_3] [i_3])))))))));
                }
            }
        }
        arr_18 [i_1] [i_1] = (((arr_0 [i_1] [1]) ? 71 : ((((arr_13 [i_1] [3] [3] [3]) ? (arr_3 [i_1]) : var_19)))));
        arr_19 [i_1] = max((max((((18170118070818174035 ? (arr_13 [i_1] [i_1] [9] [i_1]) : (arr_14 [i_1] [6] [6])))), (min(18170118070818174052, 113)))), (arr_8 [i_1]));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_22 [i_4] = (min((((var_18 ? (arr_21 [i_4]) : ((var_5 ? (arr_8 [i_4]) : (arr_10 [i_4] [i_4 + 1] [i_4])))))), (((arr_20 [i_4]) ? (((max((arr_2 [3]), (arr_21 [i_4]))))) : (min((arr_9 [i_4] [i_4]), var_11))))));
        arr_23 [12] = (!var_19);
    }
    #pragma endscop
}
