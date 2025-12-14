/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((((var_16 && var_18) ? -2140019234 : var_6))) && ((min(var_0, (min(0, var_6)))))));
    var_21 -= var_0;
    var_22 = max((min(-var_19, (((var_1 ? var_15 : 1))))), (3784310862 <= 1));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_23 = (((((var_15 ? ((((!(arr_3 [i_1] [8] [i_0]))))) : ((1 ? var_2 : var_14))))) || (((var_3 ? -992913215 : var_1)))));
            var_24 = ((((min(var_1, 1361821577))) ? ((var_1 ? var_18 : (((var_8 ? (arr_2 [i_1]) : 1))))) : (((var_7 + (arr_4 [i_0]))))));
        }
        var_25 = ((((max(5, (min((arr_0 [7]), (arr_1 [i_0])))))) ? (((((min(510656410, 3784310885))) ? var_0 : var_5))) : (min(((var_12 ? var_17 : 3784310859)), 510656433))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {
                    {
                        arr_15 [i_0] = (min((((arr_13 [6] [i_2 + 2] [i_4 + 3]) ? (arr_13 [i_3] [1] [i_4 - 3]) : var_11)), (((!((max(213, 3784310885))))))));
                        arr_16 [i_0] [i_2] [i_3] [i_3] = var_14;
                        arr_17 [i_0] [i_2] [i_0] [i_4 + 2] = (((((((((arr_10 [i_0] [i_3] [i_4]) ? var_17 : var_19))) ? var_11 : var_2))) ? var_5 : var_1));
                    }
                }
            }
        }
        arr_18 [0] &= ((18446744073709551615 ? 64092 : 4294967295));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_26 = var_0;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_27 = -3492145145808706864;
                        var_28 = (max((max(((((arr_24 [i_5] [i_6] [i_5] [i_5]) != var_17))), (min((arr_29 [i_8] [0] [i_8] [0]), var_11)))), (((!((min(213, 18343))))))));

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            var_29 *= ((var_12 ? -var_17 : ((var_16 ? 43 : var_8))));
                            var_30 = (max(var_30, (((((((arr_19 [i_8]) ? var_9 : 65535))) ? 126 : (arr_26 [i_9 - 1] [i_9] [i_9] [i_9]))))));
                            var_31 = (min(var_31, (((-4122398747190914981 ? (arr_19 [i_9 + 1]) : (var_5 < var_8))))));
                            var_32 = (min(var_32, (((var_13 ? (arr_31 [i_8] [i_8] [i_8] [2] [i_9] [i_9] [i_9 + 1]) : (arr_31 [i_7] [i_9 + 1] [i_9 - 1] [i_9] [i_9] [i_9] [i_9 - 1]))))));
                            var_33 = ((var_12 & (((arr_30 [4] [i_6] [4] [4] [i_9]) | var_6))));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_34 |= (((arr_27 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 3]) < ((86 ? var_0 : (arr_29 [i_5] [i_5] [i_5] [i_5])))));
                            var_35 = ((var_8 ? (var_1 * var_12) : (arr_25 [i_5] [i_6] [i_7] [i_5])));
                            var_36 = (!(3784310886 + 0));
                            arr_37 [5] [0] [i_5] [i_7] [i_10] = ((((3 ? -1583251319 : 134209536))) ? var_3 : ((((arr_34 [i_5] [5] [10] [9]) != var_11))));
                        }
                    }
                }
            }
        }
        var_37 = (1 | var_12);
        arr_38 [i_5] = var_4;
    }
    var_38 = var_11;
    #pragma endscop
}
