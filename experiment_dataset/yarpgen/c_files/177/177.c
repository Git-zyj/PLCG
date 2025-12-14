/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_5, var_3))) ^ (((((2251946844 ? -36 : 58))) ? var_1 : var_3))));
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = var_8;
            var_14 = (((((var_6 ^ (arr_4 [11])))) && (arr_1 [i_0])));
            var_15 = var_1;
        }
        var_16 = ((arr_5 [17] [i_0] [i_0]) < (arr_2 [i_0]));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_17 = var_10;
                    var_18 = (min(var_18, ((((arr_8 [i_3]) != (((arr_6 [i_0] [i_0]) ? var_10 : (arr_2 [i_0]))))))));
                    var_19 = (((((var_4 ? (arr_2 [i_3]) : var_1))) ? var_6 : (((arr_5 [6] [i_2] [i_2]) ? var_1 : var_5))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_20 ^= min((((!(var_0 < 36)))), (min(var_1, var_5)));

        /* vectorizable */
        for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_21 = ((var_4 | (arr_4 [i_4])));
            var_22 = var_1;
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_23 = -13130;
            var_24 *= ((17473 || (arr_13 [i_6 - 2] [i_6 + 1])));
            arr_18 [12] [12] &= (var_4 ? 1064421036 : var_6);

            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
            {
                var_25 = var_1;
                arr_22 [i_4] [i_6] [13] [i_7] = (((((var_6 ? var_3 : var_4))) <= (arr_10 [i_7])));
                var_26 = 58;
                var_27 = var_10;
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                var_28 = ((0 ? 2935462760 : 1152725347));
                var_29 = (arr_8 [i_4]);
                var_30 = (~37554);
                var_31 = (1 / 4899733869392626320);
            }
            var_32 = (arr_16 [i_4] [i_6 - 2] [i_4]);
        }
        for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
        {
            arr_29 [i_9 - 3] [i_4] = ((-37554 <= ((((1448227864 >> (-19312 + 19342))) + ((min((arr_9 [i_4] [i_9] [i_9 - 3]), (arr_17 [i_4] [12]))))))));
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_33 = (var_1 ? ((36 ? (arr_1 [i_4]) : (var_8 << 24))) : (arr_20 [i_11 - 3] [i_10] [i_4]));
                            var_34 = (((((((arr_8 [i_12]) && var_7)))) << (((max(var_9, var_9)) - var_9))));
                            var_35 = (min(var_35, ((min(((min(var_2, 82))), var_2)))));
                        }
                    }
                }
            }
            var_36 = ((((max(65519, (min(var_0, var_2))))) ? (16 >> 0) : 2147483621));
        }

        /* vectorizable */
        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            var_37 = (17600023126224080446 ^ 1);
            var_38 = var_0;
        }
    }
    #pragma endscop
}
