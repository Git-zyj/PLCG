/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(71, var_4))));
    var_16 = var_1;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, (arr_1 [1] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_8 [i_3] [i_3] |= ((-(~10477534665136561522)));
                        var_18 = 7969209408572990093;
                    }
                }
            }

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_19 = (((((var_9 >> (29819 - 29805)))) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_9));
                arr_11 [i_4] [i_1] [i_4] = 14545270586969769886;
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_20 = (min(var_20, (arr_10 [i_5])));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0 - 1] [i_6] = arr_4 [i_0] [i_7] [i_7];
                            var_21 &= var_5;
                            var_22 = 41992;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_23 += ((var_8 + 2147483647) << (((-20 + 31) - 11)));
                            arr_33 [1] [i_11] [i_8] = 1;
                            arr_34 [i_11] [i_11] [i_11] [i_11] = var_11;
                            var_24 = (max(var_24, var_4));
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1) /* same iter space */
                        {
                            var_25 = var_0;
                            var_26 += var_11;
                        }
                        for (int i_13 = 1; i_13 < 19;i_13 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, (((~(~var_13))))));
                            arr_40 [i_0 - 1] [i_13 - 1] = ((arr_19 [i_0 - 1]) <= (arr_9 [i_0 - 1] [i_9 + 2] [i_13 - 1]));
                        }
                        arr_41 [i_10] [i_9] [i_8] [15] = -91;
                        var_28 = (min(var_28, (((!(arr_18 [i_9] [i_8] [i_10]))))));
                        var_29 = 140;
                    }
                }
            }
            arr_42 [i_8] = var_6;
            arr_43 [i_8] = 0;
            var_30 -= 311849715;
            var_31 = (min(var_31, (arr_28 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])));
        }
        arr_44 [i_0 - 1] [1] = (arr_37 [i_0] [i_0] [i_0] [16]);
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
    {
        arr_47 [i_14] = 654911635;
        var_32 = (max(var_32, ((((arr_7 [4] [i_14]) < ((var_3 - ((((arr_15 [i_14] [i_14] [i_14] [12]) > var_11))))))))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_33 = var_2;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 15;i_17 += 1)
            {
                {
                    arr_57 [3] [i_15] [i_15] = var_7;

                    for (int i_18 = 0; i_18 < 19;i_18 += 1)
                    {
                        arr_61 [i_15] = ((-14078072311018898066 || (2040783013 ^ var_1)));
                        var_34 = (max(var_34, (~55229)));
                        arr_62 [i_16] [i_15] [i_15] [i_15] = (arr_6 [i_15] [i_16] [i_16] [i_16] [i_18]);
                    }
                    var_35 = (arr_46 [i_17]);
                }
            }
        }
    }
    var_36 = 737860387;
    #pragma endscop
}
