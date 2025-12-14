/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_14, 11));
    var_21 = (((((-(max(var_19, var_10))))) || var_3));
    var_22 = (max(var_22, var_15));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_23 = (max(var_23, ((((min((arr_1 [0]), (arr_0 [4])))) ? var_6 : (min((arr_1 [6]), (arr_0 [12])))))));
        arr_2 [i_0] = ((!(arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 = (!19640);
        arr_6 [13] = (arr_0 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        arr_10 [i_2] = (arr_7 [i_2 + 2]);
        arr_11 [i_2] = (arr_3 [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_25 = ((5971876124276483922 ? 1623344851620566123 : ((-(arr_20 [i_5] [i_4] [i_4 + 2] [i_5])))));
                var_26 = (((arr_19 [i_3] [i_4 - 1] [i_5 - 1]) ? var_17 : (arr_16 [i_3] [i_3] [i_3])));
            }
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_27 = var_15;
                arr_25 [i_3] [i_3] [i_6] = (((((-(arr_1 [i_6])))) ? var_10 : (arr_20 [10] [i_3] [i_3] [i_6])));
                var_28 = (min(var_28, (((var_4 ? (arr_22 [i_4 - 1] [i_4 + 1]) : ((-(arr_24 [i_3] [i_3] [i_6] [i_6]))))))));
                var_29 = (min(var_29, (((~(arr_22 [i_4 - 1] [i_4 - 1]))))));
            }
            var_30 = ((-(arr_23 [i_3] [i_4 - 1] [i_4 + 2] [i_4 - 1])));
            var_31 = (arr_24 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2]);
            var_32 = (~7749820942800959296);
            arr_26 [i_4] [7] [i_3] = (arr_17 [i_3]);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_33 = (arr_18 [i_7] [i_3]);
            var_34 = (min(var_34, (((var_13 ? (((arr_28 [16]) ? 33831 : var_7)) : ((((!(arr_15 [i_3]))))))))));
            var_35 = (max(var_35, (((2713490867963272004 ? (!3187164396) : -var_18)))));
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_36 = (max(var_36, ((-(((arr_22 [i_3] [i_8]) ? var_19 : 0))))));
            arr_32 [i_3] [i_3] = ((~(arr_0 [14])));
            arr_33 [i_8] [i_8] = -var_15;
            var_37 = (!19);
        }
        arr_34 [i_3] = (arr_28 [i_3]);
    }
    var_38 = (min(33833, 457084825));
    #pragma endscop
}
