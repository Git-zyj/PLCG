/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 *= (min(((((max(var_0, 3))) ? 0 : (((141394950321039364 ? var_7 : 15))))), (arr_0 [4])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 = (!var_0);
                        var_16 |= ((((max(1, ((((arr_2 [i_2]) > 1)))))) ? ((max(1023, 30))) : (!1)));
                        arr_10 [i_0] [i_2] [4] [i_0] = ((-(~-98)));
                        var_17 = min(1, 1188595099);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_18 = var_11;
        var_19 = ((((141394950321039364 & (arr_11 [i_4])))) ? (arr_12 [i_4]) : var_7);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_20 = (max(var_20, 1));

            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                arr_20 [i_6] [i_6] = ((min((arr_19 [i_5] [i_5]), (arr_19 [i_6] [i_5]))));
                arr_21 [17] = max(4294967293, ((((arr_14 [i_5] [i_5]) ? (arr_18 [i_5] [17] [24]) : var_4))));
                var_21 = var_4;
            }
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
        {
            var_22 = (max(var_22, (!var_1)));
            arr_25 [i_5] [7] [i_5] = (((var_0 ? var_6 : var_8)));
        }
        var_23 -= 1;

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_24 = ((-1188595100 ? 31 : (((((arr_22 [i_5]) % var_1))))));
            arr_30 [i_9] = ((-1663492198 + (var_0 || 203465736)));
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_34 [i_5] = (!-784199511);
            var_25 = ((~(arr_26 [i_10])));
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_26 -= (1 > 3552277372);
            arr_37 [i_11] [i_11] [i_5] = (max(((((12 ? (arr_26 [i_5]) : var_1)) + ((min(var_3, var_1))))), (((var_3 + 97) ? 0 : (1 % 28353)))));
            arr_38 [i_11] [i_5] = (((var_1 + 65535) && ((max(var_11, -120)))));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_43 [i_5] = ((max(var_4, ((var_9 ? (arr_22 [i_5]) : 13)))));
            var_27 -= (((((((arr_16 [i_12] [i_5]) * (arr_24 [21] [i_12]))))) + ((var_9 % ((var_7 ? var_0 : (arr_27 [1])))))));
        }
        arr_44 [19] &= (29 + 128);
    }
    var_28 ^= (max(((!(!1))), ((!((min(var_7, var_6)))))));
    #pragma endscop
}
