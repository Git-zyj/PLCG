/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = -var_0;
        var_20 = var_17;
        arr_4 [i_0] = 4;
        arr_5 [i_0] = (min(-5, 4294967295));
        var_21 = ((~((var_17 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] = var_9;
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5] = (((((var_7 ? 5970 : (var_9 > var_15)))) && ((((arr_6 [i_3]) ? (~-6) : -var_12)))));
                        }
                    }
                }
            }
            var_22 = var_0;
        }
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            arr_23 [i_1] [i_6] = (arr_16 [i_1] [i_6] [i_1]);
            var_23 = (min(((~((4294967295 ? var_3 : 5970)))), (((arr_8 [i_1]) ? var_3 : -var_0))));
            arr_24 [i_6] = -7;
            var_24 = ((var_3 ? var_12 : (((arr_1 [i_6 - 3]) ? (arr_6 [i_6 - 3]) : 59545))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_25 = ((~(~13342)));
            arr_27 [i_7] = var_10;
            var_26 = ((((0 && (arr_2 [i_1])))));
            arr_28 [i_7] = ((((((~0) | ((var_4 ? var_1 : 127))))) ? (max(4067595894663676973, -1)) : (((((var_18 ? (arr_13 [i_7] [i_7] [i_1] [i_1]) : -1))) ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : var_11))));
        }
        var_27 = ((((((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])))) ? var_6 : ((-((var_2 ? var_9 : var_13))))));
        arr_29 [i_1] = (!var_18);
        arr_30 [i_1] = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_8 = 2; i_8 < 6;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            var_28 = (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 1]);
            var_29 = (arr_34 [i_8] [i_8] [i_9]);
        }
        arr_36 [i_8] = var_7;
        arr_37 [i_8] [i_8] = (arr_16 [i_8 + 2] [i_8] [i_8]);
        arr_38 [i_8] = var_19;
    }
    for (int i_10 = 2; i_10 < 14;i_10 += 1)
    {
        arr_41 [i_10] = (min(var_18, ((743915096 ? 2040112504 : -127))));
        var_30 = var_8;
        var_31 = -2254854799;
        var_32 = ((((~(((arr_2 [i_10]) & var_4)))) | (~14)));
        var_33 = (~var_17);
    }
    var_34 = ((var_9 ? (var_19 >= 59564) : var_7));
    var_35 = var_17;

    for (int i_11 = 1; i_11 < 1;i_11 += 1)
    {
        arr_46 [i_11] = (arr_43 [i_11] [i_11]);
        var_36 = ((-(arr_44 [i_11] [i_11])));
    }
    #pragma endscop
}
