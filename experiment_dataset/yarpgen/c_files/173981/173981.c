/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = (((min((arr_0 [i_0 + 1]), (arr_1 [i_0 - 2]))) >= ((((arr_0 [i_0 - 2]) && (arr_1 [i_0 - 1]))))));
        arr_3 [i_0] = (arr_1 [i_0 + 1]);
        arr_4 [i_0] = (arr_1 [i_0 - 1]);
        arr_5 [i_0] = ((~(((arr_0 [i_0 - 2]) + var_13))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_8 [8] &= (arr_1 [i_1 + 1]);
        arr_9 [10] = (arr_0 [i_1 - 2]);
        arr_10 [i_1] [i_1] = (((arr_0 [i_1 - 3]) > 1099511627775));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((~(arr_12 [i_2 + 1])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {
                    arr_19 [i_2 - 1] [i_4] = ((var_2 != (arr_12 [i_2 + 1])));
                    arr_20 [i_2 - 2] [i_3 + 1] [i_4] [i_4] = (((arr_18 [i_4] [i_3 + 1] [i_3 + 1] [i_4]) ? (arr_18 [i_4] [i_4 + 2] [i_4 + 3] [i_4]) : (arr_18 [i_4] [i_4] [i_4] [i_4])));
                    arr_21 [i_4] [i_4] = ((!(arr_15 [i_2 - 2])));
                    arr_22 [i_4] = (arr_12 [i_3 - 1]);
                }
            }
        }
        arr_23 [i_2] [i_2 - 2] = (22485 * 66);
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_33 [i_5] [i_6] [i_7] [i_7] = 0;
                    arr_34 [i_7] [i_6] [i_5 + 1] = ((!(arr_18 [i_5 + 1] [i_5 - 1] [i_5] [i_6])));
                    arr_35 [i_5] [i_5] [i_5 + 1] [i_5 - 1] = (((arr_18 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7]) | (((!(arr_29 [i_6]))))));
                    arr_36 [i_5 - 1] [i_5 - 2] [i_5 - 1] = ((1099511627775 ? 2147483647 : 209));
                    arr_37 [i_5 + 1] [i_6] [i_7] [i_7] = ((~(arr_32 [i_5] [i_5 + 1] [i_6])));
                }
            }
        }
        arr_38 [i_5 + 1] = ((~(arr_30 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        arr_41 [i_8] [i_8] = (arr_40 [i_8]);
        arr_42 [i_8] = ((-(arr_11 [i_8 + 3])));
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        arr_45 [i_9] = ((((-(arr_24 [i_9]))) >= (((((!(arr_18 [i_9] [i_9] [i_9] [12]))) && (!var_18))))));
        arr_46 [i_9] = 5;
        arr_47 [i_9] = (arr_28 [i_9]);
        arr_48 [i_9] = (((arr_44 [i_9] [i_9]) + (((((arr_16 [i_9]) != (arr_14 [i_9]))) ? (max((arr_17 [i_9]), (arr_1 [i_9]))) : ((~(arr_30 [i_9] [i_9] [i_9] [i_9])))))));
        arr_49 [i_9] = (min(13051903760422203349, ((-((var_2 ? var_11 : 3192924351))))));
    }
    #pragma endscop
}
