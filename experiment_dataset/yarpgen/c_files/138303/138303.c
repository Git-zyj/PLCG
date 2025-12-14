/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!5366496136613607230);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (min(105, 871812346));
        arr_3 [0] [0] |= var_3;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_17 = (var_1 * 3423154949);
                arr_8 [i_0] [i_0] [i_0 - 2] = (arr_0 [i_0 + 1]);
                var_18 = (arr_6 [i_0] [i_0] [i_0 - 1]);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 += ((((var_12 ? var_15 : (arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 1])))) ^ ((-92 ? var_7 : (arr_4 [i_0 - 1] [i_0 - 2] [i_0]))));
                var_20 = (min(var_20, var_12));
                arr_12 [i_1] [i_0] = (((((~(arr_11 [i_0] [i_0] [i_3])))) ? ((37 % (arr_10 [i_0] [i_0] [i_0]))) : (1 << 1)));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_21 = (((arr_13 [i_4 + 1] [i_0] [i_4]) ? (arr_4 [i_4 - 1] [i_0 + 1] [i_0]) : (((var_15 ? 137 : var_7)))));
                var_22 = (2251782633816064 + 40344);
                arr_15 [i_0] = arr_5 [i_0];
                var_23 = ((46351 <= (arr_6 [i_4 - 1] [i_4 - 3] [i_4 - 1])));
            }
            arr_16 [12] |= (((arr_11 [i_0] [i_0] [i_0]) & (((((arr_4 [i_0] [17] [i_1]) == (((25192 ? 0 : (arr_0 [i_1]))))))))));
            var_24 = (min(var_24, (((~(arr_1 [10] [10]))))));
            arr_17 [i_0] = ((1 % ((~((239 ? 40344 : 1650025694))))));
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_25 += 8253;
        arr_20 [i_5] = 0;
        arr_21 [i_5] [9] = (arr_6 [i_5] [i_5] [i_5]);
        arr_22 [i_5] [i_5] = (3423154950 & var_3);
        var_26 = var_9;
    }
    var_27 = var_2;
    #pragma endscop
}
