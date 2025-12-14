/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_6;
        var_13 = (var_10 ? (((max(var_3, -7998374801804895820)))) : ((var_4 ? 163 : -147077705)));
        arr_4 [i_0] = var_6;
        arr_5 [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (max(1, ((20 ? ((var_4 ? 8070450532247928832 : -16771)) : (((-1315026776 ? 4064 : 1)))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_14 [0] [0] = var_10;
            var_14 = var_5;
        }
        for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_17 [i_1] [i_1] [i_3] = (~var_1);
            arr_18 [i_1] = 14832063443904396305;
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_15 = var_9;

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_16 = 1;

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_27 [i_1] [0] [i_1] [13] [i_1] [13] = var_1;
                    arr_28 [9] [9] [9] [7] = var_8;
                    var_17 = (min(var_17, ((((var_1 ? var_8 : var_1))))));
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_32 [i_1] = var_11;
                arr_33 [i_1] [9] [i_1] |= (!7998374801804895835);
                var_18 = (min(var_18, (((0 ? var_0 : var_3)))));

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_19 = (min(var_19, 23990));
                    var_20 = 50;
                    var_21 = (((var_3 ? var_1 : 5943)));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_22 = 3638964908;
                    arr_39 [i_1] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
