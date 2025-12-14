/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 *= ((((((min(var_10, 32766))) ? 32783 : ((var_4 ? var_3 : var_6))))) ? var_6 : (arr_0 [i_0] [i_0]));
        var_12 = min((arr_0 [i_0] [i_0]), ((((var_1 >= (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 -= 7620071212068727653;
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_14 = ((((max(((max(var_2, var_6))), var_10))) ? (((arr_7 [i_3 - 1] [i_1] [i_1] [i_3 - 1]) ? -1478991891 : var_9)) : 218));
                            var_15 = arr_10 [i_1] [i_2];
                            var_16 = (min(var_16, (((-(((-29 ? -29 : var_1))))))));
                            var_17 = (min((max((!var_4), var_0)), (arr_5 [i_4] [i_4] [i_4])));
                            arr_13 [i_1] [i_2] [6] [i_1] [i_5] = ((((((var_2 ? var_10 : (arr_12 [i_3 - 2] [i_1]))))) ? (!var_6) : var_0));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_18 = (!var_0);
                var_19 = 15010;
                var_20 -= 2147483647;
            }
            for (int i_8 = 1; i_8 < 20;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_21 = (arr_25 [i_1] [i_1] [i_8] [i_1] [i_1] [i_9]);
                            var_22 = (~(58183 + var_5));
                            var_23 += var_5;
                        }
                    }
                }
                var_24 = (((-26 ? (arr_5 [i_1] [i_1] [16]) : 209)));

                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    var_25 = -52;
                    var_26 += (!-1523992979);
                }
            }
            var_27 *= (((arr_10 [i_1] [i_6]) ? (arr_10 [i_1] [i_6]) : (arr_10 [i_1] [i_6])));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_28 = (max(var_28, ((((((var_10 ? (arr_16 [i_12] [i_1]) : 3661744417))) ? (arr_3 [i_1]) : (arr_24 [i_1] [i_1] [i_1] [i_1] [i_12] [i_12] [i_12]))))));

            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_29 = ((5813445248052673298 <= (((~(arr_26 [i_14] [i_14 - 1] [i_14] [i_14]))))));
                            var_30 ^= (((arr_17 [i_1] [i_1] [i_1]) ? (~var_1) : (~18446744073709551602)));
                        }
                    }
                }
                arr_38 [i_1] [i_1] [i_13] = 38;
            }
            for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
            {
                var_31 = (((var_6 || 31) ? (3858749690 || var_3) : (((var_2 || (arr_20 [i_1] [i_12] [i_12] [i_1]))))));
                arr_41 [i_1] [i_1] [i_12] [i_1] = ((var_2 ? (arr_9 [i_12]) : var_4));
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
            {
                var_32 = (arr_15 [i_1]);
                var_33 = (var_0 || 18446744073709551607);
                var_34 = 111;
                var_35 = 1405430839;
            }
            var_36 = -2059365801;
        }
        for (int i_18 = 2; i_18 < 20;i_18 += 1)
        {
            arr_47 [i_1] = (((var_7 ? (arr_25 [i_18 - 2] [i_18] [i_18 - 2] [i_18 + 2] [i_1] [i_18 - 2]) : 4155032175766228874)));
            var_37 = -1152664099;
            var_38 = var_7;
            var_39 |= var_0;
        }
        var_40 = -3032497277483413679;
    }
    var_41 = var_8;
    var_42 += var_3;
    var_43 = (-(min(-var_5, ((min(57577, var_6))))));
    #pragma endscop
}
