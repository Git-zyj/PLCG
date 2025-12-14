/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (2124231798 * 0);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0] [11]);
        var_13 = (min(var_13, (((-(arr_1 [8]))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_1] [8] [i_1] |= 1643863388;
                        var_14 -= (min((arr_1 [8]), ((min((((!(arr_12 [i_1] [i_2] [i_1] [i_4])))), (arr_9 [i_1] [i_2] [10] [i_1]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_15 = ((((min(((var_11 / (arr_3 [i_1] [12]))), ((((arr_9 [i_1] [i_1] [1] [i_5]) < var_5)))))) ? (arr_18 [i_5 + 1] [i_6 + 2] [i_6 + 2] [i_6 + 1]) : ((max((arr_25 [i_1] [i_5] [i_6] [i_1] [i_6] [i_7] [11]), ((var_5 << (-7959686310085679220 + 7959686310085679227))))))));
                                var_16 += (((-7959686310085679232 <= var_7) ? ((((arr_22 [i_1] [i_1] [9] [i_8]) << (((arr_25 [i_1] [i_5] [i_5] [0] [i_5] [i_5] [i_8]) - 2267332033))))) : ((var_2 ? (min(3034817243, 7959686310085679210)) : ((min(var_8, (arr_6 [i_1]))))))));
                                arr_26 [i_5] = ((min((arr_5 [i_1] [3] [i_6]), (((7959686310085679241 >= (arr_0 [i_5] [i_8])))))));
                                arr_27 [i_1] [i_1] [6] [i_1] [i_1] [i_1] |= ((+(((arr_14 [i_1] [12]) & (arr_18 [i_1] [11] [i_6 + 2] [7])))));
                            }
                        }
                    }
                    arr_28 [i_1] [i_5] [i_5] = (arr_25 [i_6 + 3] [i_6 + 4] [i_6 + 4] [i_5 + 1] [2] [i_5] [i_5]);
                    var_17 |= ((16383 << (((-7959686310085679221 + 7959686310085679242) - 18))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_31 [i_9] [i_9] = ((((arr_4 [i_9]) <= (arr_3 [i_9] [i_9]))) ? (((((arr_30 [i_9] [i_9]) > (arr_4 [i_9]))))) : var_1);
        arr_32 [i_9] [i_9] = (max((arr_29 [i_9] [i_9]), ((((arr_29 [i_9] [i_9]) > var_4)))));
        arr_33 [i_9] [i_9] = (min((((!(arr_14 [i_9] [i_9])))), ((-(arr_14 [3] [i_9])))));
    }
    var_18 = ((((((max(var_11, var_9)) || (((var_4 ? var_4 : 2491))))))));
    #pragma endscop
}
