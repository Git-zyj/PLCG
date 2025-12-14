/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((var_2 ? var_12 : ((var_11 ? var_4 : var_2)))) == (min(var_4, ((var_3 ? 3031796898404167989 : var_4)))))))));
    var_16 = (max(var_16, var_10));
    var_17 = (max(var_17, 1884484388));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_18 = (max(var_18, ((min(((131 ? 142 : 0)), (~119))))));
        var_19 = (max(var_19, var_13));
        arr_3 [i_0] [i_0] = ((((((64629 < (153 % -33))))) | ((~(~var_2)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 -= var_11;
            var_21 = (max(var_21, var_6));
            arr_9 [i_2] = (arr_4 [i_1]);
        }
        var_22 = (min(var_22, (arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3] = var_12;

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_16 [i_3] = (((var_7 == var_9) ? (arr_12 [i_4]) : var_9));
            arr_17 [i_3] [i_3] [i_3] = ((((((arr_1 [i_3]) ? (arr_15 [3] [3]) : (arr_1 [i_3])))) ? (arr_0 [i_4]) : 1706281261));
            var_23 = (((arr_1 [22]) ? (((var_9 ? var_10 : var_3))) : var_11));
        }

        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_24 += (-2147483647 - 1);
            arr_20 [i_3] = (arr_0 [i_3]);
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 19;i_9 += 1)
                        {
                            var_25 -= (arr_29 [0] [14] [14]);
                            var_26 = (max(var_26, (var_8 == var_2)));
                            var_27 = (max(var_27, ((((arr_30 [i_3] [i_6 - 1] [i_9]) ? ((var_14 ? (arr_14 [i_7]) : (arr_25 [i_3] [i_3] [0] [i_3] [0]))) : (((var_1 ? var_7 : var_5))))))));
                        }
                        var_28 = (min(var_28, -1706281257));
                        var_29 *= (arr_12 [i_3]);
                    }
                }
            }
        }
    }
    var_30 = ((131 ? ((((((53488 ? -1664980632 : var_0)) + 2147483647)) << (var_10 - 546584015))) : 16383));
    #pragma endscop
}
