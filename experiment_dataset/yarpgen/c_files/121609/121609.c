/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((var_1 + (((0 - 11437997293602925016) ? ((2062717242 ? -589707823463826033 : 163)) : (96 + var_0)))))));
    var_19 = (max(1, ((var_1 ? (var_7 / 7008746780106626599) : -1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_20 += 1;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_21 = ((((142 ? var_16 : var_17))) ? (arr_8 [i_0] [7] [i_0] [i_0] [i_0]) : (((arr_5 [i_2] [2] [i_2]) ? (arr_3 [19] [i_1]) : var_12)));
                        var_22 = (((!var_13) ? 32768 : (arr_1 [i_3])));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_23 *= (((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? 6484 : ((var_8 ? var_11 : var_5))));
                            var_24 -= var_14;
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_25 ^= (248 ? (arr_10 [i_5 - 1] [i_5 - 1] [i_5] [14] [i_5 - 1] [i_5 - 1] [12]) : 149);
                            var_26 = (((-32767 - 1) | (arr_12 [i_0] [i_1] [5] [i_5 - 1] [i_0] [i_0] [2])));
                            arr_16 [i_0] [0] [i_0] [i_0] [i_2] = (((-2147483647 - 1) ? 65535 : (1 | var_12)));
                        }
                        var_27 = (~32754);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_24 [6] [i_6] [17] = (var_15 + 95);
                    var_28 = var_7;
                    arr_25 [i_7] [i_6] [i_0] [i_0] = var_9;
                }
            }
        }
        var_29 = arr_21 [i_0] [i_0] [i_0];
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_30 = (max(((1 ? ((25002 ? -31635 : 2489698294904564754)) : 27892)), ((min((arr_23 [i_8] [i_8] [i_8]), 31)))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_37 [i_8] [i_9] [i_10] [i_11] = ((((!(arr_30 [i_8] [i_8] [20]))) && (((8 ? (arr_30 [i_8] [i_8] [i_8]) : var_6)))));

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 23;i_12 += 1)
                        {
                            arr_40 [i_12] [i_12 - 1] [19] [i_12] [i_12] = (var_8 && var_5);
                            var_31 = var_16;
                        }
                        var_32 = (min(var_32, (((-1 | ((var_15 ? (arr_1 [i_10]) : var_11)))))));
                        var_33 = 59;
                    }
                }
            }
        }
        var_34 = (min(var_34, (((((-var_15 ? (max((arr_28 [20]), (arr_15 [i_8] [i_8] [i_8] [i_8]))) : var_4))) ? var_11 : var_10))));
    }
    #pragma endscop
}
