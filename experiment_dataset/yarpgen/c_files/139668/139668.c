/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 177;
        var_11 = ((((-407692413 || (((arr_2 [i_0]) <= -1312033702))))) >= (((-2024599861 + 2147483647) >> (-28 + 40))));
        arr_4 [i_0] [i_0] &= ((((((arr_1 [i_0] [i_0]) + 4))) && ((((arr_1 [1] [i_0]) / (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (1090806138 >> ((((((var_4 - (arr_1 [i_0] [i_1])))) && -120137397))));
            arr_8 [i_0] [i_0] [i_0] = (-72 | var_5);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_12 = var_8;
            arr_11 [i_0] [i_0] [i_0] &= ((1 != ((((((arr_5 [i_0]) || (arr_6 [i_0] [i_0])))) * var_10))));
            var_13 = var_5;
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] [i_0] = ((((((((arr_10 [i_0] [i_3] [i_3]) != 1312033702)))) | (((arr_13 [i_0] [i_0] [i_3]) << (2147483647 - 2147483638))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                var_14 = (16 ^ (-8494984361790200335 || var_6));
                arr_19 [1] [i_0] [i_4] &= (-238851006 > var_0);
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_3] [i_3] [i_0] = ((var_4 >> (var_9 | 1)));
                arr_25 [i_0] |= (((arr_0 [i_0] [i_3]) - ((((arr_17 [i_0] [i_3] [i_5]) > (arr_12 [i_3 + 1] [i_3 - 1]))))));
                var_15 = (((((arr_1 [i_3 - 1] [i_3 + 1]) / (arr_1 [i_3 + 1] [i_3 + 2]))) + (arr_1 [i_3 + 2] [i_3 + 1])));
            }

            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                var_16 = ((var_8 + 9223372036854775807) << (((((((arr_5 [i_3 + 1]) + var_5)) + 1964079317646358113)) - 32)));
                var_17 = -67659757;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_18 = (arr_30 [i_0] [i_0]);

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_35 [i_0] [i_8] [i_0] |= (((-5196919959591140527 - var_3) | (((var_5 << (160 - 160))))));
                    var_19 |= ((arr_27 [i_8]) - (-1312033716 ^ 1));
                }
            }
            var_20 ^= arr_22 [i_0];
            var_21 = (min(var_21, ((((((((arr_10 [i_3] [i_0] [i_0]) / var_10)) <= (((4294967295 || (arr_13 [i_0] [i_0] [i_3 + 1]))))))) + -263834520))));
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_40 [i_9] [i_9] = (((4294967295 >= var_6) * (((((((arr_29 [i_9] [i_9] [i_9] [i_9]) == var_2)))) & var_8))));
        arr_41 [i_9] = ((-238850978 % (((arr_39 [i_9] [i_9]) / (arr_28 [i_9])))));
        arr_42 [i_9] = (((((arr_12 [i_9] [i_9]) | (-975555101 - 238851005))) > (((2147483647 == ((((arr_6 [i_9] [i_9]) != var_4))))))));
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_22 = ((((var_9 > (arr_37 [i_10] [i_10])))) | (13 >= 3180761151));
        var_23 = (min(var_23, (((var_1 >> (((((arr_1 [i_10] [i_10]) + 2147483647)) >> (((var_2 | var_5) + 8717003637440020709)))))))));
        var_24 = 127;
        arr_45 [i_10] = ((((arr_20 [i_10] [i_10]) - (arr_5 [i_10]))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        arr_49 [8] |= ((arr_31 [i_11] [i_11] [1]) != (arr_15 [i_11] [i_11] [i_11]));
        var_25 = (min(var_25, var_6));
    }
    var_26 = 12;
    var_27 |= (4 + -309092734);
    #pragma endscop
}
