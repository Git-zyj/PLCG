/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~((98405576 ? 32767 : 32760))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((-((var_5 ? 2744323776 : (arr_1 [i_0])))));
            arr_8 [i_1] [i_0] = (((arr_0 [i_0]) ? var_2 : var_10));

            for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
            {
                arr_12 [i_1] = (((arr_11 [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_2 - 2]) : (arr_4 [i_2] [i_2 + 4])));
                var_12 ^= ((-(arr_4 [i_2 + 4] [i_2 + 4])));
            }
            for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_13 = (((arr_10 [i_3 + 2] [i_3 - 1] [i_3]) < (arr_14 [i_3 - 2] [i_3 + 3] [i_3])));
                arr_15 [i_0] [i_0] [i_0] [i_0] = ((((((arr_14 [i_0] [i_0] [i_0]) ? var_5 : (arr_11 [i_3] [1] [i_3])))) ? var_5 : -1));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = (var_10 ? (arr_4 [i_0] [i_0]) : ((var_0 ? (arr_6 [i_5] [1]) : (arr_4 [i_5 + 2] [i_5 + 2]))));
                            var_14 = (((((arr_5 [i_0]) || var_5)) ? (((arr_0 [i_0]) >> (52235 - 52216))) : -26));
                        }
                    }
                }
                var_15 ^= (((~var_1) ? (((32903 ? 2412837268 : 1485927075))) : var_4));
            }
            arr_22 [i_0] [i_0] [i_1] = (((9569 ? var_4 : (arr_5 [i_0]))));
            arr_23 [i_0] [i_0] = ((~(arr_14 [i_0] [i_0] [i_1])));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] = (arr_1 [i_0]);
            var_16 ^= (max((((!(arr_17 [i_0] [i_0] [i_0] [i_0])))), (((!var_1) ? var_6 : (((((-127 - 1) || -1485927083))))))));
        }
        for (int i_7 = 2; i_7 < 20;i_7 += 1)
        {
            arr_29 [i_7] [i_7 - 2] |= (min(1667891712, 151));
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_17 ^= ((0 ? -32757 : 207345163));
                            var_18 = (arr_9 [i_8 + 3] [i_8 + 3] [i_8 - 3] [i_8 - 2]);
                            var_19 = ((var_1 ? var_6 : (((((!13758) >= (max(4659550328492440483, (arr_33 [i_7] [i_7 + 2] [i_7 - 2] [i_7] [i_7 - 2])))))))));
                            arr_40 [i_0] [i_0] = -1485927076;
                        }
                    }
                }
            }
        }
        var_20 *= (~-13750);
    }
    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = -3;

        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            var_21 = (min(var_21, ((((((var_0 ? ((var_8 ? var_0 : var_4)) : (arr_38 [i_11 - 1] [i_12] [3] [i_12] [i_11])))) ? (((arr_0 [i_11 - 2]) ^ var_1)) : var_0)))));
            var_22 ^= max(((var_2 / (arr_9 [i_11] [i_11] [i_11 + 2] [i_11]))), (arr_32 [i_11 + 2] [i_11 + 2] [i_11 - 1] [i_11 + 2]));
            var_23 ^= (((((var_8 ? var_11 : var_6))) ? ((-(arr_18 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))) : var_7));
            arr_48 [i_11] = ((((var_11 || (((var_9 ? (arr_44 [i_12]) : (arr_9 [i_11 + 2] [i_11] [i_11] [i_11])))))) ? (min(-var_3, var_2)) : (((arr_25 [i_11 + 1] [i_12] [i_12]) ? ((58065 ? -784815080 : var_3)) : ((1 ? -110 : 1))))));
        }
        var_24 = arr_27 [i_11];
        var_25 *= (13787193745217111133 + 107);
    }
    var_26 = (var_5 ? var_7 : ((var_2 ? (var_5 == var_1) : 1719143867)));
    var_27 = var_8;
    var_28 |= min(var_0, var_6);
    #pragma endscop
}
