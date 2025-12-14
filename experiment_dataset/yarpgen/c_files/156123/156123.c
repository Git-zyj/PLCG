/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, ((min((var_8 + var_0), ((min(var_8, var_8))))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 = var_4;
        var_17 = var_10;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_18 = (((~(((arr_2 [1]) ? (arr_3 [i_1] [i_1 + 1]) : var_8)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                {
                    arr_12 [i_1 - 2] [13] [i_1] [i_1 + 1] = ((!(arr_10 [i_2] [i_2] [i_2] [i_2 + 2])));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_1] [i_3] [i_3 - 2] [i_5 - 4] = (min((arr_4 [i_1] [i_1]), ((var_9 % ((var_10 ? (arr_15 [i_1 - 4]) : var_1))))));
                                var_19 = ((((-2767224160 ? -1496966183 : 1496966193)) - -1496966183));
                            }
                        }
                    }
                    var_20 = ((((((min((arr_6 [i_2] [i_1 + 1]), (arr_2 [i_3])))) || ((min((arr_16 [i_1 - 1] [i_1] [i_3] [i_3]), 0))))) ? (max(-7, (min(var_0, 1122485762)))) : var_2));
                    var_21 = (max(var_21, (arr_13 [16] [i_1 + 1] [i_1] [16])));
                }
            }
        }
    }
    var_22 += ((-1496966201 ? -1496966183 : 0));

    for (int i_6 = 3; i_6 < 24;i_6 += 1) /* same iter space */
    {
        var_23 = ((var_6 ? (arr_20 [i_6 - 1]) : (((((var_3 ? var_14 : -14377))) ? -var_13 : (arr_20 [i_6 + 1])))));
        var_24 = ((((min((min((arr_22 [i_6]), var_2)), (((var_12 ? 42960 : var_7)))))) ? ((~(arr_20 [i_6]))) : (!var_1)));
        arr_23 [i_6 - 3] [1] = ((+(((arr_22 [i_6 + 1]) + (arr_21 [i_6 - 2] [i_6 - 3])))));
        var_25 += (((!(~var_10))) ? (((max((arr_21 [15] [15]), var_8)))) : var_6);
        var_26 = (min((max((((var_1 - (arr_21 [1] [i_6])))), ((-(arr_20 [i_6 - 1]))))), ((((arr_21 [i_6 - 1] [i_6 - 1]) ? (arr_21 [i_6 - 1] [i_6 - 1]) : (arr_21 [i_6 - 3] [i_6]))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_27 = -0;
        var_28 = (~(arr_25 [i_7] [i_7]));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        var_29 = (((arr_6 [i_8 - 2] [i_8]) / (arr_6 [i_8 + 2] [i_8])));
        var_30 = (min(var_30, (arr_5 [i_8] [i_8 + 2])));
        arr_28 [i_8 + 2] = (((arr_8 [8] [8] [i_8 - 1]) + 3706787818));
        var_31 = ((((((arr_9 [i_8] [i_8] [i_8]) ? 3706787818 : 724947655))) ? (arr_2 [i_8 + 4]) : ((var_9 ? (arr_11 [10] [10] [i_8] [i_8]) : 4036559335))));
    }
    for (int i_9 = 3; i_9 < 24;i_9 += 1)
    {
        arr_31 [i_9] = ((!(arr_20 [i_9])));
        var_32 ^= (max(var_4, (arr_20 [i_9 - 2])));
    }
    #pragma endscop
}
