/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((65 ? 77 : ((var_15 ? 32755 : -117)))), (min(var_2, (0 | -32753)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_2 [12] = (max((min((max(var_1, -10)), -13812)), 32767));
        var_17 = (((((var_14 ? var_5 : (arr_1 [i_0] [i_0])) - ((max(32750, 0)))))));
        arr_3 [i_0] = (min((((32755 - -43) ? ((-4 ? -118 : 32767)) : ((min(127, var_15))))), ((((min(127, (arr_1 [i_0] [i_0])))) % 32767))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((127 ? 15 : 109))) ? ((var_10 ? 3968 : (arr_1 [i_1] [i_1]))) : (arr_0 [i_1]))))));
        arr_8 [5] = (3 && var_6);
    }
    for (int i_2 = 3; i_2 < 20;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_2] = (max((arr_4 [14] [i_3]), (min(var_4, (arr_4 [i_2 + 2] [i_2 + 1])))));
            var_19 += (~24969);
            var_20 ^= ((((0 >= ((16 * (arr_10 [i_3]))))) || (((min(10, 0))))));
            var_21 += 127;

            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                var_22 = (max(var_22, (((-((min((23320 > -108), (!var_3)))))))));
                var_23 += var_4;
            }
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_24 ^= (max(17685, (((arr_15 [i_2] [i_2] [14] [i_2]) + (arr_14 [i_5] [i_2] [i_2])))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_25 += ((((max((arr_9 [i_7]), 0))) || ((max((!-85), (min(4094, (arr_20 [i_2] [i_7]))))))));
                        var_26 ^= (min(((var_7 / (arr_21 [i_2] [i_2]))), var_12));
                        var_27 = (max(var_27, ((max((((((-118 ? -32764 : -28)) <= ((2 ? var_5 : 32758))))), ((((max((arr_7 [i_5] [i_2]), var_10))) ? 32767 : ((-71 ? 17674 : var_15)))))))));
                        arr_24 [i_2] [4] [i_6] [i_6] = (max(((~((max(var_1, (arr_1 [i_6] [i_5])))))), ((((((arr_19 [i_2] [i_2] [i_2]) ? var_10 : (arr_14 [i_7] [i_7] [i_7]))) < ((max((arr_11 [i_2]), -32764))))))));
                    }
                }
            }
            var_28 = (max(var_28, -11));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_28 [i_2] [i_8] [7] = ((((((max(28672, var_10)) <= -68)))));
            var_29 += (max(((+((0 ? (arr_27 [i_8] [i_8]) : var_7)))), (((var_9 && var_15) ? (arr_0 [i_8]) : 127))));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    {
                        var_30 = (min(var_30, (((~(((!(arr_26 [0])))))))));
                        var_31 += ((min((~32767), (arr_19 [6] [6] [i_10]))));
                    }
                }
            }
            arr_35 [i_2] [i_2] = (max(((-((max(3, 127))))), ((((32767 ? var_1 : (arr_10 [i_2])))))));
        }
        var_32 = (((-32747 - 32748) ? ((((var_5 ? -24829 : (arr_19 [i_2] [i_2 - 1] [1]))))) : (max(-125, ((((arr_33 [i_2] [i_2] [i_2] [11]) != -122)))))));
    }
    for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
    {
        var_33 = (((((max(127, var_14)))) ? (var_2 == 12) : ((max(-32740, 32767)))));
        var_34 ^= ((((max((max(-32755, (arr_19 [6] [i_12] [i_12]))), (min((arr_22 [12] [i_12] [i_12] [12]), (arr_34 [i_12] [i_12] [i_12] [i_12])))))) ? (max(((-(arr_19 [4] [4] [16]))), ((min(var_2, 44))))) : ((min(12, -32743)))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            arr_41 [i_12] [i_12] = (((arr_39 [i_12] [i_12 + 2] [i_12 - 3]) <= var_6));
            var_35 = (-31 == -45);
        }
    }
    #pragma endscop
}
