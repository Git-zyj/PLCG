/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_21 = (((((arr_0 [i_0 + 2]) | var_14)) - (((min(-18, -32764))))));
        arr_2 [i_0] = (~4294967278);
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = -18;
        arr_8 [i_1] = (min((((((max(41317, (arr_5 [i_1])))) ? (arr_4 [i_1]) : -2138223938))), (max(var_19, 33))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 ^= ((1 ? 2061018069 : (((((min(-458209631, -6801937485051351781))) ? ((max((arr_9 [i_2]), var_11))) : 6126)))));
        var_23 = (min(var_23, (max(((max((arr_9 [3]), var_6))), (((-1 ? ((max(0, 13381))) : ((41 ? 1 : 78)))))))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        arr_14 [24] = (((!(arr_12 [i_3 + 3]))) ? var_18 : (!var_6));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                var_24 = (arr_19 [i_3 + 3]);

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = (max(var_25, 3586937150999891449));
                    arr_23 [i_3] [i_3] [i_3] [i_5] [i_5] [3] = (arr_12 [i_3]);
                    var_26 = ((13 ? var_16 : (arr_15 [i_3] [i_4] [i_5 - 1])));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [i_3] [i_5] = (arr_16 [13] [i_4] [i_8]);
                        var_27 = ((((((arr_18 [i_7] [i_5] [i_3 - 1] [i_3 - 1]) && var_18))) - ((-(arr_27 [i_5] [i_5 - 1] [i_5] [i_5] [i_5])))));
                        arr_31 [i_5] [2] [i_5] [i_4] [i_5] = var_16;
                    }
                    arr_32 [i_7] [i_5] [i_5] = (arr_18 [i_3] [i_7] [i_7] [i_7]);
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_37 [i_3 - 1] [i_4] [i_5 - 1] [23] [i_5] = ((+((((var_16 - var_2) != (var_2 / var_13))))));
                        var_28 = 1945105602;
                        var_29 = (min(1, ((((max((arr_35 [i_3 - 2] [i_5] [i_3] [i_3 - 1] [6]), 6126))) != ((((-2147483647 - 1) <= 403488983)))))));
                    }
                    var_30 = (min(var_30, ((((arr_29 [i_4]) ^ (arr_35 [1] [i_4] [i_4] [i_4] [i_3 + 3]))))));
                    var_31 *= ((max(4294967278, 6)));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_32 = (max(var_32, ((min(((((75 ^ 65523) ? (251 != 0) : ((max(255, 45)))))), ((((arr_34 [i_3] [i_5] [i_5]) ? (arr_18 [i_3] [1] [i_5] [i_3]) : (arr_12 [i_3])))))))));
                    var_33 ^= var_10;
                }
                var_34 = var_1;
                var_35 = (max(var_35, (((~((max(127, -75))))))));
                var_36 += ((((min((arr_36 [i_3] [i_5 - 1] [i_5] [i_5 - 1] [i_3 + 2] [i_3]), 511))) != var_17));
            }
            var_37 = (arr_21 [i_3] [i_3] [i_3] [i_3]);
        }
        var_38 = (1 > var_6);
        var_39 = var_12;
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 22;i_12 += 1)
    {
        var_40 = ((79 ? 1 : 261632));
        var_41 *= ((!(~var_0)));
        arr_43 [7] = -var_11;
    }

    for (int i_13 = 2; i_13 < 20;i_13 += 1) /* same iter space */
    {
        arr_46 [21] [i_13 - 2] = (((arr_13 [i_13]) >= ((((3835111974 + (arr_34 [i_13] [i_13] [i_13])))))));
        arr_47 [i_13] [i_13] = var_16;
    }
    for (int i_14 = 2; i_14 < 20;i_14 += 1) /* same iter space */
    {
        arr_50 [i_14] [i_14] = (max((!970297536), (arr_4 [14])));
        var_42 = (min(var_42, (arr_18 [1] [i_14] [i_14 + 2] [i_14])));
    }
    #pragma endscop
}
