/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((var_4 % var_1) != 45809))), ((((max(-32756, -22666))) ? ((var_9 ? var_6 : var_6)) : (((19745 ? 1 : var_5)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = ((var_5 ? (max(((1 ? (arr_0 [17] [17]) : (arr_0 [8] [i_0]))), ((17183 ? (arr_0 [i_0] [i_0]) : var_5)))) : ((+((max((arr_1 [13]), var_5)))))));
        var_13 = (max(var_13, ((((~(arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 *= (min((((arr_4 [i_2] [i_1] [i_2]) ? (arr_4 [i_2] [2] [i_2]) : (arr_4 [i_2] [i_2] [i_2]))), (((arr_4 [i_2] [i_1] [4]) + (arr_4 [i_2] [i_1] [i_2])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_15 = (~1);
                        arr_12 [12] [i_0] [i_1] = (arr_10 [i_1] [15]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_16 = min(((((arr_25 [i_4] [i_5] [i_6] [i_5]) >= ((((arr_19 [i_4] [i_5] [i_6] [9]) ? (arr_2 [i_7] [i_4]) : var_0)))))), (arr_24 [i_4] [i_5] [i_5] [i_5] [i_7] [i_5]));
                        arr_26 [5] [i_5] [1] [i_7] = ((((((((arr_25 [13] [i_5] [i_6] [i_5]) ? (arr_24 [i_5] [i_5] [i_5] [i_5] [1] [i_5]) : 0)) ^ (arr_13 [i_6])))) ? (((((1 ? var_7 : var_7))) ? 1 : (arr_4 [i_5] [i_5] [9]))) : (((!((((arr_13 [i_4]) ? var_6 : (arr_3 [i_4] [6] [0])))))))));
                        arr_27 [i_4] [i_5] [i_5] [i_7] = (((((-(arr_5 [i_4] [i_5] [i_6] [i_5])))) || var_0));
                        var_17 = (min(1, (((var_8 < ((min(65535, var_2))))))));
                        var_18 -= (arr_15 [i_6]);
                    }
                }
            }
        }
        var_19 = ((min((arr_7 [i_4] [18]), ((var_3 ? (arr_6 [i_4] [i_4] [18] [i_4]) : (arr_7 [i_4] [4]))))));
        var_20 = arr_1 [i_4];
    }
    var_21 |= var_3;
    var_22 -= ((var_2 ? (((max(var_7, var_10)))) : var_1));
    #pragma endscop
}
