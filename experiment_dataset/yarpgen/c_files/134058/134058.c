/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_2 [18])));
        arr_4 [6] [6] &= (arr_2 [18]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [6] = (var_13 / 96);
            var_20 = ((var_3 ? (((var_13 >> (var_9 - 37291)))) : (((arr_2 [i_0]) ? 4294967295 : var_11))));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_21 = ((var_14 + (arr_10 [i_0 - 1] [i_0] [i_2 + 2])));
            var_22 = (min(var_22, (((((arr_9 [i_2]) || 2147483647))))));
            var_23 ^= (var_10 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1]));
        }
        var_24 = (~var_6);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_25 = 4095;
        arr_16 [i_3] = ((((((4294967269 * ((((arr_8 [i_3] [i_3]) / (arr_5 [i_3])))))) + 9223372036854775807)) << (((arr_9 [i_3]) - 10592896396685949934))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_26 = (min(((min(38699, 26836))), var_12));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_27 = (((!0) < ((38699 ? var_15 : var_10))));
                    var_28 = 31;

                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_29 = (26845 * 3725299890);
                            var_30 = ((569667406 ? 38700 : 32767));
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_31 = (max(var_31, ((max(((var_15 ? var_3 : var_15)), ((((min(var_15, 0))) ? ((var_7 ? var_14 : -65)) : (var_12 <= var_8))))))));
                            var_32 = ((!(3349940858681163255 | var_11)));
                            var_33 = ((!((((min(var_11, var_12)) / (var_6 * var_6))))));
                            var_34 = 1504480117;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_35 *= ((-(0 - var_10)));
                            var_36 = (min(var_36, 569667398));
                        }
                        var_37 = (min(var_0, var_16));
                        var_38 = (((arr_24 [i_7 - 2] [i_4] [i_7 + 2] [i_4]) ? (arr_30 [6] [i_7 + 3] [i_7] [i_7 - 4] [i_7]) : (((arr_32 [i_7 + 3] [i_7 + 3] [i_4] [i_7 + 2] [i_4]) ? var_8 : (arr_24 [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_6])))));
                        var_39 = ((var_5 / (var_1 * var_8)));
                    }
                }
            }
        }
        var_40 = ((((((-(arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]))) < ((min(var_17, (arr_10 [i_4] [i_4] [i_4])))))) ? ((((min((arr_8 [i_4] [i_4]), 26850))) ? ((((var_17 + 2147483647) << (var_0 - 2564554381)))) : (min(var_5, 26828)))) : (((min(var_13, (max(12652, 52))))))));
    }
    var_41 -= (min(((569667420 ? (((127 ? 569667412 : 26828))) : (min(0, var_1)))), var_10));
    #pragma endscop
}
