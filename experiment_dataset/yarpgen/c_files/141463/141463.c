/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_1 [i_0]) ? 127 : (arr_1 [i_0])));
        var_20 ^= ((98 ? 0 : (arr_0 [i_0])));
        arr_2 [i_0] = (~98);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (arr_0 [i_1]);
        arr_5 [i_1] = ((((var_16 ? var_0 : var_14)) != (arr_1 [i_1])));
        var_22 = (max(var_22, 14898628406529432465));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_2] = (min(98, 48318));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    {
                        var_23 = 15699644203395207026;
                        var_24 = (arr_1 [i_2]);
                        arr_18 [i_2] [i_3] [i_4] [i_5 - 3] = (arr_14 [i_2] [i_3] [i_4]);
                    }
                }
            }

            /* vectorizable */
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_25 -= ((15699644203395207040 ? 0 : -2074561562));
                            var_26 = 98;
                            arr_26 [i_8] [i_6] [i_3] [i_2] = ((((29331 ? 0 : var_9)) - ((((!(arr_10 [i_3])))))));
                        }
                    }
                }
                var_27 = ((var_1 - (arr_25 [i_6] [i_6] [i_6 + 1] [i_6 - 2] [i_6 - 2])));
                arr_27 [i_6] = 49982;
                arr_28 [i_6 + 1] [i_3] [i_3] [i_2] = 15699644203395207026;
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                var_28 += var_5;
                arr_31 [i_2] [i_3] [i_9] = (((((var_12 ? 49982 : 15699644203395207040)) >= (448005351 / 15553))));
                arr_32 [i_9] [i_3] [i_3] [i_2] = 18;
                var_29 = arr_25 [i_2] [i_3] [i_3] [i_3] [i_9];
                arr_33 [i_2] [i_2] = ((~(((((-127 - 1) ? var_2 : -118)) % (arr_1 [i_2])))));
            }
            var_30 ^= (((arr_16 [i_2] [i_2] [i_3]) ? ((((9078689096303700024 || (arr_1 [i_2]))))) : ((((((arr_8 [i_2]) ? (-127 - 1) : var_9))) ? ((min(717075779, var_4))) : (~3884373562825185489)))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    {
                        var_31 = ((~((var_4 << ((((3884373562825185489 ? 2747099870314344591 : 0)) - 2747099870314344572))))));
                        var_32 = ((var_2 ? var_18 : 237));
                        var_33 = (-(((arr_21 [i_2]) >> ((min(var_10, 0))))));
                        arr_42 [i_2] [i_2] = var_13;
                        arr_43 [i_2] [i_10] [i_11] [i_12] = (((((var_2 ? 62917 : (max((arr_20 [i_2] [i_10] [i_11] [i_12]), 2747099870314344590))))) ? (((~(arr_6 [i_2])))) : 0));
                    }
                }
            }
            arr_44 [i_2] [i_2] [i_2] = (arr_13 [i_2] [i_2] [i_10] [i_10]);
            arr_45 [i_2] [i_2] = ((!((min((arr_34 [i_2] [i_10] [i_10]), (arr_34 [i_2] [i_2] [i_10]))))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
        {
            var_34 = ((65535 ? ((448005351 ? 6792459842128624472 : 1175852239)) : (((var_18 ? var_0 : 57709)))));
            arr_48 [i_2] [i_13] = 1;
        }
        var_35 = (!9502682165699460724);
        var_36 = (arr_21 [i_2]);
    }
    var_37 = var_8;
    var_38 = var_10;
    #pragma endscop
}
