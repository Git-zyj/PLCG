/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_0));
    var_21 = (min(var_21, ((min(((var_3 ? (var_1 ^ var_1) : (var_8 ^ var_2))), (((((var_12 ? var_4 : var_7)) ^ var_16))))))));
    var_22 = (min(var_22, ((var_0 ? -127 : (min(((32 ? 102 : var_11)), (!-93)))))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_23 *= (min(var_17, (min(-var_11, -1314835745))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_24 = ((var_19 ? 7942780308451604392 : 223900357));
            arr_5 [i_0] [i_0] [i_1] = -var_11;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_2] = ((var_6 ^ (~var_15)));
                arr_9 [i_0] = (~-58);

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_12 [i_0] [15] [i_0] [i_1] [10] [i_0] = (~2145546625);

                    for (int i_4 = 4; i_4 < 21;i_4 += 1)
                    {
                        arr_15 [i_4] [i_2] [i_0] [1] [i_0] = (var_13 ^ var_6);
                        var_25 |= (~var_1);
                    }
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        var_26 = var_17;
                        arr_20 [18] [18] [i_0] [i_3] [18] = (var_10 ? var_10 : -48);
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_23 [i_0] [i_6] = -7942780308451604393;
                        var_27 = ((1463109397 ? (((var_19 ? var_4 : var_5))) : ((var_16 ? var_8 : var_1))));
                        var_28 = (min(var_28, (!var_3)));
                        arr_24 [i_0] [i_0] [i_0] = 5326295077445519286;
                        arr_25 [i_0] [i_6] [i_6] = ((var_1 ? 613587872 : ((-88 ? -13 : 1))));
                    }
                    var_29 = var_7;
                    arr_26 [i_0] [i_1] [i_1] [i_3] |= var_18;
                }
                for (int i_7 = 4; i_7 < 23;i_7 += 1)
                {
                    arr_30 [11] [1] [i_2] [i_0] = (!9947);
                    var_30 = ((var_19 ? var_18 : var_19));
                    arr_31 [i_0] [i_0] [0] [i_2] [i_7] = (!2145546618);
                    var_31 -= -127;
                }
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_32 = var_9;
                    var_33 = (min(var_33, (((var_9 ? var_7 : var_16)))));
                    var_34 = (max(var_34, 4280562988009729676));
                    var_35 = 2306877989;
                    var_36 = (max(var_36, (!var_14)));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    var_37 = ((var_19 ? var_4 : (var_8 ^ var_0)));
                    var_38 = (max(var_38, var_1));
                    var_39 -= (!var_4);
                    var_40 *= (137371844608 ^ 389536329);
                }
                var_41 = (((-32767 - 1) ^ 113));
                var_42 |= 9695888356936558920;
            }
            for (int i_10 = 3; i_10 < 22;i_10 += 1)
            {
                var_43 = ((var_1 ? var_3 : (var_13 ^ var_18)));
                var_44 ^= ((3905430967 ? 39 : -7942780308451604384));
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_45 |= var_16;
            var_46 = ((var_1 ^ (!var_9)));
            var_47 = var_8;
        }
    }
    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        var_48 = (((((((var_15 ? var_1 : var_5))) ? (~var_11) : -var_4)) ^ var_19));
        arr_45 [i_12] = ((((((var_11 ^ var_4) ? var_2 : (!13521880052725804699)))) ? ((max((!0), var_5))) : (((!((min(var_8, var_18))))))));
    }
    #pragma endscop
}
