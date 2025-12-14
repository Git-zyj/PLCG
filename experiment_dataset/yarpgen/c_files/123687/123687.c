/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(5723729206727303558, var_14)))));
    var_18 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((~(((((203 ? 203 : 3059582396))) ? ((455381133 ? 3807261365 : 32747)) : (arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (((6494767494978652825 + (arr_0 [i_1] [i_0]))))));
            var_21 ^= (((((((var_7 >> (var_2 - 16183))) >> (((arr_3 [i_0] [i_1 + 2]) - 26))))) ? var_6 : 6144));
            var_22 = -455381133;
            var_23 *= min(((((arr_3 [i_1 + 1] [i_1 + 2]) ? (arr_3 [i_1 + 1] [i_1 + 2]) : (arr_3 [i_1 + 1] [i_1 + 2])))), ((6129 ? (arr_3 [i_1 + 1] [i_1 + 2]) : 0)));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_2] = ((~(arr_6 [i_0] [i_2] [i_2 + 1])));
            arr_9 [i_2] [i_2] = ((-((-(arr_4 [i_2] [i_2 - 1] [i_0])))));
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_24 = -1235384900;
            arr_12 [i_0] [i_0] [i_3 + 2] = ((!(((var_1 ? (arr_0 [i_0] [i_3 + 3]) : (arr_0 [i_0] [i_3 + 3]))))));
            arr_13 [i_0] [i_0] = var_0;
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_4] [i_6] = (max((((arr_10 [i_4]) ? (arr_10 [i_0]) : 134152192)), 3232636009624152794));
                        var_25 ^= (arr_18 [i_4] [i_4]);
                        arr_21 [i_0] [i_4] [i_6] [i_6] [i_6] = (((arr_5 [i_6]) ? (max(134152179, (arr_5 [i_6]))) : (max((arr_5 [i_6]), (arr_5 [i_6])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_24 [i_0] [i_4] [i_6] [i_6] [i_7] = (arr_10 [i_4]);
                            arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] [19] [i_6] = (-2687401653 ? (arr_5 [i_6]) : (((-(arr_0 [i_5] [i_0])))));
                            arr_26 [i_0] [i_4] [i_0] [i_5] [i_6] = -352495478453118551;
                        }
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            var_26 = (min(var_26, (((-(min((((arr_10 [i_6]) ? (arr_2 [i_8 + 2]) : var_13)), 48177)))))));
                            var_27 = (max((min(var_10, (arr_1 [i_8 + 1] [19]))), (((185 + (arr_23 [i_0] [i_4] [i_5] [i_6] [i_6] [i_8]))))));
                        }
                    }
                }
            }
        }
        var_28 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
