/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((var_10 / var_8) ? (var_3 * 127) : -23)), ((~(2479977633 || 1)))));
    var_13 = (!var_6);
    var_14 = ((var_5 & ((max(var_6, 1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (min(var_15, (((!(arr_1 [i_0] [6]))))));
        var_16 ^= ((~((~(arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = (((((arr_1 [i_0] [i_0]) ? 0 : (arr_1 [i_0] [i_0]))) ^ (((!(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_17 = ((1 ? 2479977633 : 2479977633));
            var_18 = (min(var_18, ((!(((((arr_0 [i_0]) || (arr_0 [i_0])))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_8 [i_0] = ((((-(arr_5 [i_2]))) + 0));
            var_19 = (min(var_19, (((!(arr_1 [i_2] [i_0]))))));
            var_20 ^= (((arr_4 [i_2]) && (~1)));
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            arr_15 [i_3] = (((arr_11 [i_3 - 2] [i_3]) || (arr_11 [i_3 - 2] [i_3])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_22 [i_3] [i_3] = (arr_21 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6]);
                        arr_23 [i_3] [15] [i_3] [i_3] [1] [i_6] = var_8;
                        arr_24 [i_3 + 1] [i_3] [i_4] [i_6] = (!6136996643112122980);
                        arr_25 [i_3] [15] [19] [i_3] = arr_18 [i_3 - 1] [i_3 - 4] [i_6];
                    }
                }
            }
            var_21 = (arr_10 [i_3]);
        }
        var_22 = (((arr_18 [i_3] [0] [20]) | var_11));
    }
    for (int i_7 = 4; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_23 ^= ((!(arr_12 [i_7] [i_7] [8])));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    var_24 ^= 548298357;
                    var_25 = (min(var_25, ((((0 && 4294967295) - (min(1, (min((arr_10 [i_8]), var_1)))))))));
                    var_26 = (min(var_26, var_6));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        arr_36 [i_7] [i_7] [i_9] [i_10] = (((arr_34 [i_7 - 2]) && (((-(arr_21 [i_7] [i_7] [i_8] [i_8] [i_8] [i_10]))))));
                        arr_37 [i_7] [i_10] [i_9] = (!var_2);
                        var_27 = (arr_31 [i_7 + 1] [i_8] [i_9] [0]);
                        arr_38 [i_7] [i_10] [i_7] = 35397;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_42 [i_7] [i_8] [i_8] [i_11] [i_11] = ((1 ? (arr_12 [i_11] [i_8] [i_11]) : 63));

                        for (int i_12 = 3; i_12 < 20;i_12 += 1)
                        {
                            arr_46 [i_8] [i_11] [i_11] = var_10;
                            var_28 = (min(var_28, (((1887979492 ? -1842905723 : 1330558353935125286)))));
                        }
                        arr_47 [i_11] [i_9] [i_11] = (var_9 && 30131);
                        arr_48 [i_11] [i_8] [i_9] [i_11] = ((((!(arr_21 [i_7 + 1] [i_8] [i_7 - 3] [17] [i_9] [i_8]))) && (arr_27 [0] [i_9])));
                    }
                }
            }
        }
    }
    for (int i_13 = 4; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_29 ^= var_11;
        arr_52 [i_13] = (min(((((max(52070, (arr_16 [8] [i_13 + 1])))))), (arr_9 [i_13])));
        var_30 = arr_20 [i_13] [i_13] [10] [i_13] [i_13];
    }
    #pragma endscop
}
