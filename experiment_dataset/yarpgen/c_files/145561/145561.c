/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] = ((((min(var_13, (arr_7 [i_2 + 4] [i_2 + 1] [i_0] [i_2])))) ? var_12 : ((max((arr_10 [i_1] [i_3] [i_2] [i_3] [i_2]), var_5)))));
                        var_17 = min((((((min(var_5, 8435967964854000315))) ? (var_1 == var_6) : -var_14))), (((arr_4 [i_2 + 1] [i_2 + 3] [i_2 + 1]) ? ((((arr_3 [i_0]) ? (arr_10 [17] [21] [i_0] [i_0] [0]) : var_1))) : (var_5 / var_11))));
                        arr_14 [i_0] [18] [i_2] [i_2] [i_2] [i_2] = 2932795835;
                    }
                    var_18 = (max(var_18, (min(1362171460, (((((arr_4 [i_1] [i_1] [i_1]) < 2932795834)) ? ((((arr_8 [i_0] [i_1] [20] [i_2]) ? var_3 : var_4))) : (arr_11 [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [23] = ((-((var_12 ? (((var_12 ? (arr_8 [3] [i_2 + 4] [i_0] [i_2 + 4]) : 219))) : (max(var_16, (arr_4 [i_0] [i_0] [i_0])))))));
                                arr_21 [i_0] [14] [i_4] = (min((min((arr_2 [i_0] [11]), (~var_15))), (((((((((arr_3 [i_0]) + 2147483647)) >> (var_10 + 6383007260013465000)))) <= var_11)))));
                            }
                        }
                    }
                    arr_22 [i_0] [i_0] [i_2] [9] = ((((min((~var_2), (((-64 ? var_10 : (arr_8 [16] [16] [i_0] [i_2]))))))) ? (((-((max((arr_19 [i_0] [i_0] [22]), var_12)))))) : ((((((arr_6 [i_0]) / -782881859509758793))) ? ((min(var_8, var_1))) : (arr_12 [i_0])))));
                }
            }
        }
    }
    var_19 = (min(var_19, var_8));
    var_20 += ((var_0 ? var_11 : var_15));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                arr_27 [i_6] = (((arr_17 [i_6] [i_7] [i_6] [i_6 + 1]) >> ((((((min(var_16, var_12))) ? var_7 : 1362171484)) - 2902217567))));
                var_21 = (min(var_21, ((((var_1 * 10410156572197818395) ? (min(((var_1 ? var_13 : var_13)), (arr_11 [i_6 - 1]))) : (arr_15 [13] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                var_22 = (max(var_22, (((-(~var_10))))));
                arr_28 [12] = ((-(min((((-1503729683 ? var_10 : 0))), ((218 ? (arr_12 [8]) : (arr_26 [3] [i_6])))))));
            }
        }
    }
    var_23 += ((var_5 ? var_14 : (((var_13 | 2932795833) / var_12))));
    #pragma endscop
}
