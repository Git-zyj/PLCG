/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min((var_5 < var_0), (((var_16 / var_11) / (min(var_7, -1))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (min(var_21, -81));
        arr_2 [i_0] = (((-(arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 += (((arr_4 [15]) + 0));
        arr_6 [i_1] &= (arr_5 [i_1]);
        arr_7 [i_1] = ((!(19038 + 0)));
        var_23 -= 1;
        arr_8 [i_1] = (32751 / 2056510740545879029);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_24 = (max((min(-var_8, var_0)), ((min(((46 / (arr_9 [i_2] [i_2]))), (((arr_10 [i_2]) ? (arr_4 [i_2]) : 0)))))));
        arr_11 [i_2] [i_2] |= 255;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_4] = (((((var_8 ? 13 : var_9)) * var_4)) | (((var_11 ^ (arr_14 [i_3] [i_4])))));
            var_25 = ((255 + 255) << (1907795001 - 1907794994));
            arr_17 [i_3] [0] [i_4] |= var_19;
            var_26 ^= (((2097151 ? var_3 : (min(0, 5)))));
            arr_18 [i_4] = ((+(min((arr_5 [i_3]), var_14))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_27 ^= (-2056510740545879021 * -1);

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                arr_27 [i_3] [i_5] = ((1 ? (arr_20 [i_5] [i_5] [i_5]) : (!var_14)));
                var_28 = (max(var_28, (((-2056510740545879016 ? -19286 : var_5)))));
                var_29 += 206;
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_30 += ((((-(arr_9 [i_3] [18]))) - 2230));
            var_31 |= (((1 & 63306) >> (((var_11 - -1480901159) - 1480901275))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    {
                        var_32 = (max(var_32, (((-0 << (((arr_14 [i_3] [8]) - 9)))))));
                        var_33 = (-2097151 ? -4 : (arr_24 [i_3] [i_7] [i_8 + 1]));
                        var_34 = (arr_28 [i_3] [i_7]);
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_37 [i_10] [i_10] = (arr_3 [i_3]);
            arr_38 [i_10] [i_3] = 246;
            arr_39 [i_3] [i_3] [i_3] = ((((-var_2 ? (1 - 190) : var_12))) - ((((1 ? var_1 : 3364779654)) - -var_11)));
            var_35 = (arr_36 [i_10] [i_3]);
        }
        arr_40 [i_3] = 25000;
        var_36 = (max(-6311, (--2097151)));
    }
    var_37 -= (((var_4 / 2230) - ((25000 >> (var_7 - 44040)))));
    var_38 = (((min(1, var_1))));
    #pragma endscop
}
