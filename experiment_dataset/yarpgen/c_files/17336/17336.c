/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_19 = -1073741823;
        var_20 = ((var_5 | (arr_1 [i_0 - 1])));
        var_21 = (+-15373050702084455237);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 = (min(-1073741824, ((min(var_15, var_17)))));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            var_23 = (min((-127 - 1), -1073741824));
            var_24 = (((1073741824 << (((arr_3 [i_2 + 2]) - 114)))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_25 = (max(var_25, -1073741824));
                arr_10 [i_1] [i_1] = (var_7 ^ var_6);
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 = var_1;
            arr_14 [i_1] [i_1] = var_4;
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] = var_5;
        var_27 = (arr_15 [i_5] [i_5]);
    }
    var_28 &= (((~var_1) ? var_1 : var_0));
    var_29 = var_16;

    /* vectorizable */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        var_30 = (min(var_30, (((var_1 | (arr_16 [i_6 - 1]))))));
        var_31 = (arr_4 [i_6 - 2]);
    }
    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {
        arr_23 [i_7] = (min((((!(arr_12 [i_7 + 1] [i_7 - 3] [i_7])))), ((var_10 - (((var_18 ? var_3 : var_8)))))));
        var_32 = var_1;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_33 = var_10;
        arr_26 [i_8] = (var_10 + var_7);
        var_34 = (((arr_1 [i_8]) >> (((arr_15 [i_8] [i_8]) - 2366369737))));
    }
    #pragma endscop
}
