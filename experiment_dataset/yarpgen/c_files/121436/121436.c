/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_9);
    var_18 ^= var_1;
    var_19 = (~-25);

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = 24;
        var_21 = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_22 = ((~(arr_2 [i_1] [i_2])));
                        var_23 ^= (arr_8 [i_2] [i_4]);
                        var_24 += ((arr_4 [i_3] [i_4]) ^ (((~(~var_16)))));
                        arr_12 [i_1] [i_3] [6] [i_1] = max(22, ((~((81 | (arr_8 [i_1] [i_1]))))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_25 = ((((((81 ? (arr_11 [i_2] [i_5]) : 3963567027497104657))) ? (arr_4 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))));
                            arr_15 [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = var_12;
                        }
                    }
                }
            }
        }
        var_26 = ((((min(-49, 38))) != (max(var_12, ((var_9 ? 25 : 124))))));
    }
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_27 &= var_8;

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {

                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            arr_29 [i_6 - 2] [i_6 - 2] [i_8] [i_6] [i_10 + 1] = -536870912;
                            var_28 = (arr_2 [i_6 + 1] [i_10 + 1]);
                            var_29 &= -81;
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_30 = (arr_9 [i_6] [i_6] [i_6]);
                            var_31 = (max(var_31, (arr_27 [i_9] [i_11] [i_8] [i_9])));
                            var_32 = ((-(((~var_10) | ((((arr_16 [i_11] [i_7]) * 165)))))));
                        }
                        var_33 = (((min((arr_23 [i_6 - 2] [i_6 + 1] [i_6]), var_8)) - (arr_13 [i_6])));
                    }
                }
            }
            arr_33 [i_6] [i_7] = (((~var_12) ? 536870897 : ((max(51, -41)))));
            var_34 = ((max(-20, ((-536870912 ? var_10 : 0)))));
        }
        arr_34 [i_6] = (((((((((arr_2 [i_6] [i_6]) ^ 3085017861)) != (((min(99, 0)))))))) < (((arr_4 [i_6] [i_6 - 2]) / (arr_23 [i_6] [i_6 + 1] [i_6])))));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_35 = var_9;
        /* LoopNest 2 */
        for (int i_13 = 3; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 20;i_14 += 1)
            {
                {

                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        var_36 = (min(var_36, (((~((((4294967295 ? (arr_39 [i_12] [i_12] [16]) : var_16)) & (((min((-127 - 1), 167)))))))))));
                        arr_45 [i_12] [i_15] [i_15] [i_15] = ((-(min((arr_9 [i_15 - 1] [i_14 + 1] [i_13 - 1]), var_14))));
                    }

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_37 = ((((((((arr_44 [i_16] [i_14 - 2] [i_12] [i_12]) | 711851017495146734)) | ((147 ? var_4 : (arr_44 [i_12] [i_12] [i_14 + 1] [10])))))) ? (((~-1802317757) ^ (min((arr_42 [i_12] [i_14 + 1]), 6)))) : (((24 ? 4128768 : 242)))));
                        var_38 = (((max(var_3, var_11) * -27)));
                    }
                    var_39 ^= (max(-536870912, (arr_46 [i_13 + 3])));
                }
            }
        }
        var_40 |= (max((min((arr_4 [i_12] [i_12]), (arr_44 [i_12] [i_12] [i_12] [i_12]))), (((var_3 - (arr_44 [i_12] [i_12] [i_12] [i_12]))))));
        var_41 ^= 54;
    }
    #pragma endscop
}
