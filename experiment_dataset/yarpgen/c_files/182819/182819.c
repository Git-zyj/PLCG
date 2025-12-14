/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((-1 ? ((-(min(4281704200571443545, var_9)))) : var_6)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = 0;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_3] [5] [i_0] [i_1] [i_4] = var_3;
                            arr_14 [i_0] [6] [i_2 - 1] [i_3] [18] = (-3532514216 && 0);
                            var_17 = (((arr_9 [i_3] [i_1] [i_1] [i_3]) - (arr_9 [i_0] [i_4] [i_2 - 2] [i_2 + 2])));
                            var_18 = ((-1 <= (arr_4 [i_2 - 3])));
                        }
                        var_19 = (-((~(arr_0 [i_2 + 2]))));
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] = ((min((max((arr_1 [i_0]), (arr_3 [i_1]))), (arr_5 [i_0] [i_2 + 1] [i_0]))));
                        var_20 = (max(var_20, 30109));
                        var_21 = (arr_12 [i_2 + 1] [i_1] [i_2 - 1] [i_3] [i_1] [i_1] [i_0]);
                    }
                }
            }
            var_22 = (arr_8 [1] [1] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_19 [i_0] [21] [i_0] = ((((var_13 ? (arr_10 [i_5] [i_5] [5] [i_0] [i_0]) : (arr_2 [i_0]))) > (((var_9 ? -1 : -118)))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_23 *= ((52889 ? -1 : (((!(arr_17 [i_0] [i_8] [i_5]))))));
                            var_24 += (arr_21 [i_0] [i_8 + 1]);
                            var_25 = (arr_23 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_0]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            var_26 = (max(var_26, ((((~var_13) ? (arr_6 [i_0] [6] [15]) : var_11)))));
            var_27 = (max(var_27, (arr_11 [12] [i_0] [i_9] [i_9] [i_9])));
            var_28 = 29457;
        }
        var_29 = (min((((((arr_9 [i_0] [i_0] [15] [6]) == 6020292373483343381)))), (min((min(1, var_1)), 0))));
        arr_31 [i_0] = (max((((((var_1 == (arr_6 [i_0] [i_0] [i_0])))) >= (!16890982360700653324))), (!var_5)));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        arr_35 [i_10] = ((!(((arr_2 [i_10]) > var_4))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_30 = (var_10 ? 6020292373483343392 : 2);
                    var_31 *= (~var_6);
                }
            }
        }
        var_32 = (arr_34 [i_10] [i_10]);
        arr_41 [i_10 - 1] [i_10] = 22673;
        var_33 ^= ((~(arr_8 [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1])));
    }
    #pragma endscop
}
