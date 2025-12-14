/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_4 ? (min(-6256060457013197270, ((var_8 ? var_1 : var_8)))) : ((1125899906842620 ? (!0) : (min(1, 15305323143616822248)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = (~(arr_0 [i_0 - 1]));
        var_18 = (((10 || 1) ? 10 : (max(((min(var_8, (arr_1 [i_0])))), (max(var_5, var_9))))));
        arr_2 [i_0] = ((!((((arr_1 [i_0]) ? ((var_4 / (arr_0 [i_0]))) : var_0)))));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [4] &= 25;
        arr_6 [i_1] = ((~(((!(arr_0 [i_1]))))));
        var_19 ^= var_3;
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 *= 17351195980886030939;
            arr_12 [1] [i_2] = 18446744073709551605;
            arr_13 [i_2] = ((23 ? 28 : 9223372036854775807));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 8;i_4 += 1)
        {
            arr_16 [i_2] [i_4] [i_2] = (((arr_11 [i_2]) ? (41 == 8071576737307001771) : (((arr_15 [i_2] [i_4]) ? var_12 : var_14))));
            arr_17 [i_2] [i_4] = ((!((((arr_3 [i_2]) ? var_2 : (arr_15 [i_2] [i_4]))))));
            var_21 = (((arr_9 [i_2 - 2] [i_2 - 2]) ? (arr_11 [i_2 - 3]) : 25622));

            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                arr_21 [i_2] = (1 == 1);
                var_22 = ((142 ^ (arr_0 [i_4 + 3])));
                var_23 = ((-6304394435706573013 ? -1387143072374445688 : 63));
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_25 [i_2] [i_2] [i_6] = ((((1 ? 1 : -9223372036854775786)) ^ ((var_6 ? var_3 : (arr_11 [i_4])))));
                arr_26 [i_2] [1] [i_6] = (var_9 > var_11);
                var_24 = arr_7 [i_2];
            }
            arr_27 [i_2] = 63;
        }
        var_25 = min((arr_0 [i_2]), (((((var_12 ? var_10 : (arr_0 [i_2])))) & (arr_0 [i_2 - 2]))));
    }
    var_26 &= var_7;
    #pragma endscop
}
