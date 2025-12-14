/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);
        arr_2 [8] [16] = (max(var_16, var_14));
        var_19 = var_3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (max((max(63243467102896595, var_4)), (((var_5 && (arr_4 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_12 [0] [i_1] [i_2] [i_3] [i_4] [i_4] &= ((((((!var_12) * ((min(3, var_4)))))) ? ((max(var_3, ((1 ? 1 : -112))))) : (min(1, var_5))));
                        arr_13 [i_2] = (((max(18383500606606655021, (arr_7 [i_4] [i_2] [i_1]))) > ((((((!(-127 - 1))) && (!var_3)))))));
                        var_21 = var_1;
                        arr_14 [i_2] [i_4] [i_3] [9] [i_2] [i_2] = (max(var_8, (arr_6 [i_1] [i_2] [i_3])));
                        arr_15 [i_2] = ((((max(16, var_10))) << (var_7 + 733005547)));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_26 [i_7] [i_6] [i_7] [i_8] = (-127 - 1);
                        arr_27 [i_7] [i_6] [i_7] [16] = (arr_16 [i_5 + 1] [i_5 - 1]);
                        var_22 ^= ((((((arr_8 [i_5]) ? var_14 : var_5))) ? (!var_1) : var_5));
                    }
                    var_23 = (max(var_23, var_14));
                }
            }
        }
        arr_28 [i_5] = var_13;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_24 = (max(((~(var_17 * var_0))), (arr_30 [i_9])));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            arr_43 [i_9] [i_10] [8] [8] [i_12] [i_13] [i_13] = (((((((96 ? var_14 : var_5))) ? (arr_21 [i_9] [i_10]) : (max(var_8, (arr_25 [i_10] [i_11] [2] [i_13])))))) ? (max((~var_8), ((min(1, 0))))) : (((((max(var_15, var_9))) + (36 * 1)))));
                            var_25 = (!var_1);
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            var_26 = var_17;
                            var_27 = (max(162, (((arr_40 [1] [i_11] [i_12] [i_14]) ? (arr_29 [i_14]) : (arr_40 [i_9] [i_9] [i_12] [i_14])))));
                        }
                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            var_28 = ((~((min(var_4, (arr_41 [i_15 - 1] [i_15 - 1]))))));
                            var_29 ^= var_14;
                        }
                        var_30 = ((((max(var_6, (arr_36 [1] [i_10] [i_11] [i_9])))) ? ((3 ? ((var_13 ? var_1 : var_6)) : (max((arr_1 [i_9]), var_13)))) : 19239));
                    }
                }
            }
        }
    }
    var_31 = (max(var_31, ((1 + ((min(var_6, ((max(var_12, var_14))))))))));
    /* LoopNest 2 */
    for (int i_16 = 3; i_16 < 20;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            {
                arr_56 [i_17] [i_17] [i_17] = (max((((arr_54 [i_16 - 2] [i_16 - 2] [i_17]) ? 746839033414757345 : var_9)), ((max((var_15 != var_11), (max(var_17, var_3)))))));
                var_32 = (max(var_32, ((max(var_12, (arr_55 [i_17] [i_16 + 2]))))));
                var_33 &= (arr_55 [i_16] [i_17]);
                arr_57 [i_16] [i_17] = ((((min(var_12, var_12))) | ((var_13 | (arr_51 [i_16])))));
            }
        }
    }
    var_34 *= (((((var_14 ? var_4 : (var_3 % var_4)))) ? ((var_12 & (min(var_17, var_8)))) : 1));
    #pragma endscop
}
