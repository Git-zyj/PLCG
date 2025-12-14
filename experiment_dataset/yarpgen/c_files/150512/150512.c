/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_6;

        for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [9] = ((((arr_4 [i_1] [i_1 + 1]) ? (arr_4 [i_1] [i_1]) : var_1)));

            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_17 |= (arr_6 [i_1]);
                var_18 += -var_6;
                arr_8 [i_1] = ((~((var_4 ? var_10 : ((((0 <= (arr_7 [i_1] [14] [12])))))))));
            }
            arr_9 [6] [6] &= var_11;
        }
        for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_19 = ((((((((arr_7 [i_3] [i_3] [16]) | var_11))) ? (!var_14) : var_8)) << (arr_10 [i_0])));
            var_20 = (min(var_20, var_16));
        }
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_21 = (min(var_21, ((min(((((var_9 >= var_14) == var_4))), var_15)))));
        arr_14 [i_4] = ((((min(10013430210658427611, (!18446744073709551613)))) ? var_9 : var_13));
        var_22 = ((var_9 < (min(var_14, ((var_15 ? var_8 : (arr_11 [i_4] [i_4 - 1] [i_4 - 1])))))));
    }
    var_23 = min((((var_13 != var_5) - ((var_0 >> (var_13 - 1503595724))))), var_9);
    var_24 = ((((var_9 <= (var_2 || var_16))) ? -10013430210658427606 : (((var_2 / var_14) ^ ((var_10 ? var_9 : var_8))))));
    var_25 = var_13;

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_26 = (1 & 19850);
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_27 = (((min((0 | var_15), (((0 || (arr_7 [i_5] [i_5] [i_5])))))) / var_8));
                    var_28 = (((arr_10 [16]) | var_3));
                }
            }
        }
        var_29 = (arr_22 [i_5] [i_5] [i_5] [i_5]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_30 = (max(var_30, (((((var_3 ? (arr_25 [i_8]) : (arr_24 [i_8]))) * (!var_7))))));
        var_31 += ((10331238459208958210 || (arr_24 [i_8])));
    }
    #pragma endscop
}
