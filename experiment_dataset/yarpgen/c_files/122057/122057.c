/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((!(((max(var_7, 310590900)))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (max(var_13, (arr_1 [6])));
        var_14 ^= (min((((~(((arr_0 [i_0] [i_0]) - 3871))))), ((((3867 ? 1279934851 : var_2)) - ((max(var_6, (arr_1 [4]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_15 *= ((var_11 ? ((3860 ? var_4 : var_3)) : var_4));
        arr_5 [i_1] |= (5624747636990285628 - 0);
        arr_6 [i_1] = (--3015032462);
        arr_7 [i_1] = -var_0;
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((((var_2 - (arr_2 [i_2])))) ? ((~(min((arr_2 [i_2]), var_9)))) : ((((((4 ? 1 : (arr_10 [i_2])))) ? (((arr_0 [2] [5]) ? var_4 : 61681)) : ((min(7, 252)))))))))));
        var_17 = ((~(((1279934872 - -967469511) - ((max(var_5, 220349862)))))));
        arr_11 [i_2] |= ((-(((arr_10 [i_2]) - (((max(var_0, 1))))))));
    }
    var_18 = (max(var_18, ((231 - (-406309742848644955 - var_4)))));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_19 = (max(var_19, (arr_15 [i_3] [i_3])));
        var_20 ^= var_3;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_18 [i_3] = (arr_16 [i_4 + 2] [i_4 + 1]);
            var_21 += (((var_9 - (arr_17 [i_3]))));
            var_22 = (max(var_22, ((((255 - var_8) ? 3296157361 : (((arr_15 [i_3] [i_3]) - (arr_17 [i_3]))))))));

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_21 [i_3] [i_5] [i_3] = ((var_11 ? (arr_16 [8] [i_4 + 1]) : (arr_13 [i_5])));

                for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, var_11));
                    var_24 *= 61664;

                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_25 ^= (((!var_2) - ((1279934829 ? 17697404183250471000 : (arr_19 [i_3] [i_3])))));
                        arr_28 [i_5] [i_4] [i_5] [2] [i_4] = 3015032429;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_26 = (var_11 ? (arr_17 [i_4 + 2]) : var_5);
                        var_27 = (max(var_27, (!var_8)));
                        var_28 = 255;
                        arr_31 [i_3] [i_3] [i_5] [i_3] [i_5] = ((-(arr_13 [i_3])));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_29 ^= (arr_32 [4] [i_4 + 2] [i_6 + 1] [i_9]);
                        arr_35 [i_3] [i_4] [i_9] [i_6] [i_9] &= 61657;
                        arr_36 [i_4] [i_6 + 1] [i_5] = arr_14 [13];
                        arr_37 [i_5] [2] [i_9] = (var_6 - var_4);
                        arr_38 [i_5] [i_6] [i_9] = 1624179835;
                    }
                }
                for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    arr_41 [i_3] [i_4 + 2] [0] [i_5] [i_4 + 2] [i_5] = ((((((arr_40 [i_3] [i_4] [i_5] [i_3] [10] [i_10]) ? var_9 : var_9))) ? (-33 - 12) : var_10));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_30 += (((arr_16 [i_3] [i_3]) - (((arr_25 [i_3] [i_4] [i_5] [i_10 - 4] [i_11]) - var_0))));
                        var_31 = -308013423;
                        arr_46 [1] [i_10] [i_10] [i_10] [i_5] [i_10 + 2] = var_2;
                    }
                    var_32 ^= var_11;
                }
                var_33 += ((var_0 - -510005204) ? ((-(arr_24 [i_3] [i_3] [i_4 - 1] [i_3] [i_5] [i_5]))) : -118);
                arr_47 [i_3] [i_4 + 2] [i_4 + 2] [i_5] = ((!(((7030723054379279829 ? 31289 : var_8)))));
            }
            var_34 = (((~var_7) - -34246));
        }
    }
    var_35 &= ((3015032467 ? 9963664445152959472 : -36));
    #pragma endscop
}
