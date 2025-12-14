/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = ((var_3 ? ((82 / ((max(var_13, var_10))))) : var_12));
            var_16 = ((((max(var_1, (((82 != (arr_2 [i_0]))))))) >= (!-var_12)));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_17 = ((((min((-127 - 1), -40))) ? ((min(40, -83))) : ((min(116, -123)))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = (((arr_3 [i_3 + 2]) < (((((var_0 & (arr_0 [i_0])))) ? (!var_12) : (arr_8 [i_0] [i_1 - 1] [12] [0] [i_3] [i_4])))));
                            var_18 = ((!((((min(var_10, 1))) && ((((arr_1 [i_2]) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) : var_4)))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 &= (min(((var_4 ? var_2 : ((min(-96, var_2))))), (((arr_8 [11] [11] [i_7] [i_7] [i_1] [3]) ^ (((!(arr_20 [i_0] [17] [i_6] [12]))))))));
                            var_20 = ((var_8 ? ((min(122, 123))) : (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_7 : (arr_12 [i_0] [i_1] [i_7] [11] [i_6])))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            var_21 = (((!-118) ? ((+(((arr_15 [i_0] [i_8] [12]) % (arr_18 [11] [i_8] [i_8] [17]))))) : (((-1 >= ((var_5 ? 63 : -84)))))));

            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_22 += arr_26 [i_0];
                var_23 = (arr_9 [i_0] [i_0] [i_8] [16] [i_9] [i_9]);
                var_24 = ((7 ? (((((var_1 ? 24 : (arr_20 [i_9] [i_9] [i_9] [i_9])))) ? ((((arr_11 [i_0] [8] [8]) && var_0))) : 7)) : ((((-62 && (arr_2 [i_8]))) ? ((max(112, (arr_2 [i_9])))) : (((!(arr_6 [i_8 - 2] [i_8 - 2]))))))));
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
            {
                var_25 *= ((127 + (((arr_15 [i_0] [15] [i_10]) ? (arr_10 [13] [13] [i_10] [i_10]) : (arr_10 [i_0] [i_0] [7] [i_0])))));
                var_26 = -64;
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_33 [i_0] [i_8] [i_8] [i_11] = (min(((-62 ? -55 : (~111))), ((min((arr_20 [i_8 + 1] [i_0] [i_11] [i_11]), 112)))));
                arr_34 [i_0] [i_8 + 1] = ((var_8 && (arr_28 [i_0] [i_0] [12] [i_11])));
                var_27 = (max((max(((max((arr_16 [15] [i_8 - 1] [2]), var_6))), ((var_12 ? 63 : 6)))), (arr_28 [i_0] [i_8] [3] [i_0])));
            }
            arr_35 [1] [1] [i_8 - 2] = (arr_14 [i_8]);
            arr_36 [i_0] [i_0] [i_8] = (max((127 != -65), ((((max((arr_16 [i_0] [i_8 + 1] [i_8]), var_14))) != -10))));
            arr_37 [i_0] = ((var_11 ? ((var_14 & ((max(var_7, (arr_11 [i_0] [i_0] [i_8])))))) : ((-91 ? ((min(var_1, 83))) : -58))));
        }
        arr_38 [i_0] = min((max(125, 84)), (-127 - 1));
        var_28 = ((112 ? ((((((arr_20 [i_0] [i_0] [i_0] [i_0]) & 127)) < var_8))) : (arr_0 [i_0])));
        var_29 = (((max(((127 ? var_1 : 32)), (arr_26 [i_0]))) != ((min((max((arr_20 [i_0] [i_0] [i_0] [i_0]), 92)), (max(var_7, -66)))))));
    }

    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_30 = 44;
        var_31 = -64;
        var_32 = arr_41 [i_12] [i_12];
    }
    var_33 = (((((((max(var_10, var_11))) <= (var_11 < var_15)))) ^ (((-83 * 12) ? ((-33 ? var_2 : var_10)) : ((var_8 ? 106 : 29))))));
    var_34 = var_8;
    #pragma endscop
}
