/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min(var_10, ((((arr_4 [0] [i_0 - 2] [i_0 + 1]) | 20539)))));
                var_11 = (20552 != 20552);
                var_12 = ((min(0, 20539)) - (arr_4 [i_0] [5] [i_0 + 1]));
                arr_6 [10] [i_1] &= (min(((~(arr_4 [6] [i_0] [i_0]))), (-117568341 | 15)));
            }
        }
    }
    var_13 = var_1;

    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_14 = ((((((~0) | (min(var_9, (arr_14 [i_3])))))) ? (((!(arr_16 [i_4 - 1] [i_4 + 1] [i_5 - 1] [i_5 - 1] [i_5] [i_4 - 1])))) : ((-(max(-117568341, -22885))))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_15 = (max(var_15, ((((arr_18 [i_2] [19] [0] [i_4 + 2]) ? (var_5 + var_9) : (arr_16 [i_6] [i_6] [11] [i_6 - 1] [i_6 - 1] [i_6]))))));
                            var_16 = (((arr_15 [i_3] [9]) + (arr_13 [i_2] [i_3] [i_5])));
                            var_17 = ((!(arr_19 [i_6] [i_6 + 1] [i_4 - 1] [i_3])));
                        }
                        var_18 = (((~((77 ? -117568327 : 524160)))));
                        var_19 = (arr_17 [i_2] [19]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_20 = (arr_7 [i_8] [12]);
                        var_21 = ((((((((arr_27 [i_2]) ^ (arr_10 [13] [i_7]))) % (((-120 ? 20539 : 0)))))) ? (((((max(20552, (arr_14 [13])))) ? ((-117568341 ? 135 : -776647491)) : (arr_20 [i_2])))) : ((+(((arr_9 [i_7] [i_2]) ^ var_2))))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((((arr_23 [i_10] [i_10] [i_10]) << (((arr_23 [i_10] [i_10] [4]) - 20308682195400939))))) ? (arr_23 [i_10] [i_10] [i_10]) : ((~(arr_23 [i_10] [3] [i_10])))))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 16;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_23 *= (max((((arr_11 [11] [14] [i_11]) ? (arr_32 [i_10]) : (((!(arr_36 [i_10] [2] [i_10] [i_10] [i_13] [i_10])))))), ((-var_6 ? ((var_6 ? (arr_34 [i_10] [i_13] [i_14]) : var_6)) : ((var_9 / (arr_31 [i_12] [6] [i_12])))))));
                                arr_41 [i_11] [i_12] [i_12] [i_12] [i_11] [12] [i_11] = (((((-77 + 28) + (max(66, var_2)))) > (((77 ? 4620920772456258776 : -4789779199815354874)))));
                                var_24 = (min(var_24, ((((max((min((arr_34 [i_10] [15] [i_10]), (arr_37 [i_12] [6] [i_12] [i_13] [i_14] [i_10]))), ((max(-16, (arr_14 [19])))))) * (max((arr_21 [i_13] [i_11 + 1] [i_12] [i_12] [i_13] [i_11 + 1]), ((max((arr_28 [i_13 - 1]), var_0))))))))));
                                var_25 = (min(((((max(155086895, var_7)) << (((((min(var_8, 20565)) + 2974395899491051412)) - 1))))), ((((((arr_36 [i_10] [11] [i_12] [i_11] [i_11] [i_11]) & 20565))) ? (arr_11 [i_10] [7] [i_12]) : 0))));
                                var_26 = ((-(((arr_22 [i_10] [i_12 - 4]) - (arr_22 [i_10] [i_11 - 1])))));
                            }
                        }
                    }
                    var_27 = (((-20540 ? -20529 : 89)));
                }
            }
        }
    }
    var_28 = ((8540149410496533391 <= (min(3303883436575041480, (max(var_4, 0))))));
    #pragma endscop
}
