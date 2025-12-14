/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((min(var_3, (max(var_1, var_14)))))));
        var_21 = min(var_5, var_18);
        arr_3 [i_0] = (arr_2 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_22 = (min(var_22, ((max((((var_6 ? (arr_2 [i_0 - 1]) : var_4))), (arr_5 [i_0] [i_0 - 1] [i_0 - 1]))))));
            arr_7 [i_0] [i_0] [5] = var_15;
        }
        var_23 = ((((var_6 ? ((var_18 >> (var_3 - 135))) : (arr_2 [12]))) > (((((var_2 ? (arr_4 [14] [i_0] [i_0]) : var_2))) ? var_17 : (((15986 != (arr_4 [i_0] [i_0 - 1] [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 = var_15;
        var_25 = (((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) * (arr_1 [11])));
        var_26 = ((8870707705186612929 >> (6171867027063546561 - 6171867027063546533)));
        arr_10 [i_2] = var_2;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = (((((~var_3) / (var_3 ^ var_13))) % ((((var_13 ? var_8 : (arr_8 [i_3])))))));
        var_27 = ((var_1 >= (((arr_11 [i_3] [1]) ? var_0 : var_12))));
        arr_14 [i_3] = (max(((var_1 ? 4384365232487015398 : 0)), (arr_12 [i_3 - 1])));
        var_28 = (min(var_28, (((((var_0 ? var_9 : var_16)) <= (((max((var_12 && var_10), 64)))))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            arr_21 [i_4] [i_4] [i_4] = (arr_5 [i_5] [i_5] [i_4]);
            var_29 -= (((arr_6 [i_4 - 1]) + 9441310485520863037));
        }
        arr_22 [i_4] = (arr_15 [i_4 - 1]);
        arr_23 [i_4] [i_4] = var_8;
        arr_24 [i_4] = (((arr_1 [i_4 - 1]) - var_13));
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_27 [i_6] = ((var_7 || (((9576036368522938686 ? (!var_18) : (((arr_26 [i_6]) ? var_4 : var_12)))))));
        arr_28 [10] = (75 ? ((((~var_5) ? var_9 : var_8))) : (max(5116097895789896166, 1)));
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        var_30 = var_2;
                        var_31 = (arr_32 [i_7 - 1]);
                        arr_38 [14] [14] [i_9 - 3] [8] = (((arr_33 [i_9 - 1] [i_9 - 1] [i_9]) ? (arr_33 [i_9 - 2] [i_9 - 3] [i_10]) : 15360));
                    }
                    var_32 = var_2;
                    arr_39 [i_7 + 1] [i_8] [i_8] [i_9] = ((((((max(14130950216866923101, 35))) ? 9208608744909610427 : (arr_35 [i_7 - 1]))) >> (((-var_11 || (arr_31 [10] [5] [i_9]))))));
                    arr_40 [i_7 - 1] [i_8] [i_9] [i_8] = var_11;
                }
            }
        }
    }
    #pragma endscop
}
