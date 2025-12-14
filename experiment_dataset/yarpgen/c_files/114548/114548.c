/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [9] = (arr_2 [13] [i_0]);
        var_14 = var_9;
        var_15 -= arr_0 [i_0 - 1];
        var_16 = (arr_1 [i_0 + 1] [i_0]);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_17 = (min(var_17, (((~(arr_0 [i_1]))))));
        var_18 = (min(var_18, ((max(((158439317 ? ((var_11 >> (7562209241625920465 - 7562209241625920461))) : -var_8)), (((!((1 <= (arr_0 [i_1])))))))))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_19 = ((var_11 ? (((var_6 || (arr_8 [i_2] [6])))) : (((arr_12 [i_2 + 1]) / -1533402780))));
            var_20 = (((-7562209241625920466 ? 158439317 : 17)));
            arr_13 [i_3] = var_5;
        }
        arr_14 [i_2] = (max((~8811320665110904326), (max((max(var_2, 0)), (arr_12 [i_2 - 1])))));
        var_21 = ((var_9 ? (((max(var_10, (-158439317 > 18446744073709551615))))) : ((var_6 ^ ((11381282920442308399 ? -1211074278 : 10199078006299839080))))));
        var_22 = 768587564;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = (max(var_23, (min(((((var_10 ? var_7 : (arr_4 [i_4] [i_4]))) | var_0)), (((((var_0 ? var_9 : 158439317)) > var_8)))))));
            var_24 += 8811320665110904326;
        }
        for (int i_6 = 4; i_6 < 10;i_6 += 1)
        {
            arr_22 [i_4] [i_6] [1] = (min((arr_0 [i_6]), (min(var_7, 1))));
            arr_23 [i_4] [i_6] [i_6] = (min((arr_2 [i_4] [i_4]), (max((max(-8811320665110904326, 10199078006299839080)), 768587564))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    arr_30 [i_4] [i_4] [1] [i_8] = (((arr_1 [i_6 - 2] [i_6]) ? -7562209241625920465 : (arr_1 [i_4] [i_6 - 4])));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_33 [i_7] = (arr_20 [i_8 + 2] [i_6 - 3] [i_7]);
                        var_25 = (max(var_25, (((var_5 ? (arr_6 [i_8 - 2]) : (arr_16 [i_4]))))));
                        arr_34 [i_9] [i_8] [i_4] [i_4] = (((((((arr_26 [i_4] [5] [4] [5]) ? var_6 : var_7)) + 2147483647)) << (((arr_32 [i_7] [i_6] [1] [i_6 + 1] [i_8 - 1]) - 18264184876017992945))));
                    }
                }
                var_26 *= ((2499059120693679160 ? (arr_15 [i_4]) : ((8083875852742951484 ? 812105744 : 4294967295))));
            }
        }
        var_27 = (min(var_27, (max((((var_9 && ((min(var_10, (arr_11 [1] [i_4]))))))), ((var_6 ? var_10 : 90))))));
        arr_35 [i_4] [i_4] = (arr_0 [i_4]);
    }
    var_28 = var_7;
    var_29 ^= (+(min((~var_6), ((-1 ? var_2 : 1606449170)))));
    #pragma endscop
}
