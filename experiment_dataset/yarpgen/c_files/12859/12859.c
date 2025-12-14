/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_12;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((~(arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = (min(((-(((arr_1 [i_0]) / var_10)))), 238));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((((min((arr_5 [i_1 - 1] [i_1 - 2]), (min(250, var_8))))) ? 1894431703 : (arr_7 [i_1] [17]))))));
        var_15 += (~var_12);
        var_16 = ((((((arr_5 [i_1 - 1] [i_1 - 3]) ? -var_3 : (arr_6 [i_1])))) ? (arr_5 [i_1 - 1] [i_1 + 1]) : (!var_2)));
        arr_8 [i_1] = ((~(arr_5 [i_1] [1])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_11));
        var_18 = (arr_7 [i_2 + 1] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 = (min(var_19, ((((arr_7 [i_3 - 2] [i_3 - 3]) < ((~(arr_4 [20]))))))));
        var_20 = (arr_5 [i_3 - 1] [i_3 - 3]);
        var_21 = var_4;

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_17 [i_3 - 1] [i_4] = ((50555 ? ((var_9 ? (arr_11 [i_3 - 1]) : var_11)) : var_12));
            arr_18 [i_3] [i_3] [i_4] |= (((~1989230469) >= var_7));
        }
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_22 ^= (arr_7 [i_3] [i_5 - 3]);

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 *= (arr_9 [i_3 + 1]);
                    var_24 = ((!(arr_26 [i_3 - 1] [i_5 + 1] [6] [i_7])));
                }
                arr_27 [i_3 - 3] [i_3 - 3] [i_6] &= (((arr_14 [i_3 - 2] [i_5 - 3]) ? 1989230469 : (arr_14 [i_3 - 2] [i_5 - 3])));
                var_25 += (((arr_24 [i_3 - 1]) ? var_8 : -8896127145213777939));
            }
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            var_26 = ((~(arr_19 [i_3 - 1] [i_3])));
            var_27 *= (var_7 / 18);
        }
        var_28 += var_9;
    }
    var_29 = var_4;
    #pragma endscop
}
