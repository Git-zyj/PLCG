/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_18 *= (~14829);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] |= ((((-(arr_2 [i_1])))) ? -var_10 : (-14821 && -65));
        var_19 += (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_20 = (min((((((255 ? 82 : 0)) <= (arr_3 [i_1])))), ((-(min(var_5, (arr_4 [i_1])))))));
            var_21 |= ((!(18 + 78)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            arr_13 [i_4] [i_4] = -var_9;
            arr_14 [i_3] [i_3] [i_4] = (arr_0 [i_3] [i_3]);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_17 [i_4] [i_4] = ((!(arr_15 [i_3] [4] [i_3])));
                arr_18 [i_5] [i_5] |= ((((arr_2 [i_3]) ? (arr_4 [i_3]) : var_16)) >> (var_0 + 2114522989));
                arr_19 [i_3] [i_4] [i_4 - 1] [i_5] = var_11;
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_22 = ((5 ? 245 : 0));
            arr_23 [i_6] = ((((arr_11 [i_3] [1] [i_6]) ? var_3 : (arr_10 [i_6]))));
        }

        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_3] = (-(arr_12 [i_3]));
            var_23 = (arr_7 [i_3]);
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            var_24 *= ((((~(arr_8 [i_3] [i_8]))) != ((var_1 ? var_0 : var_11))));
            var_25 = ((-var_0 ? ((var_0 ? var_2 : (arr_3 [i_3]))) : (arr_25 [i_8] [i_3])));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_26 = -0;

            for (int i_10 = 1; i_10 < 22;i_10 += 1)
            {
                var_27 = (max(var_27, (((!var_6) == ((var_9 ? (arr_22 [i_3] [i_3] [i_3]) : var_10))))));
                arr_38 [i_10] [i_9] [i_10] = ((-(arr_10 [i_10 + 1])));
                var_28 = (max(var_28, (((var_11 ? var_0 : (arr_36 [i_9] [i_3] [i_3] [i_3]))))));
            }
        }
    }
    var_29 = ((!(((-var_5 ? (var_6 | var_9) : (var_9 / var_6))))));
    var_30 = ((((var_9 ? var_8 : var_7))) ? var_16 : (~var_16));
    var_31 -= var_5;
    #pragma endscop
}
