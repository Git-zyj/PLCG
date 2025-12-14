/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_8;
    var_13 = 6066;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (max(47, (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [1]) : (arr_2 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = ((min(((var_9 ? 27779 : (arr_2 [i_0] [i_0]))), (arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_14 += (((~-6066) ? (var_8 % var_4) : var_1));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_15 &= ((((!(arr_17 [13] [i_2] [13] [i_4] [i_5])))));
                            var_16 += ((6049 ? -6066 : (arr_13 [i_5] [i_2] [i_2] [i_2] [i_2] [i_1])));
                        }
                    }
                    var_17 -= -6052;
                }
            }
        }
        var_18 = (max(var_18, (((arr_7 [i_1] [i_1]) & 768))));
        var_19 ^= (((arr_10 [i_1] [i_1]) ? -10066 : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        var_20 = var_1;
    }

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_21 -= 10054;
        arr_20 [i_6] = ((((max((arr_1 [i_6 + 1]), (arr_1 [i_6 + 1])))) ? (((arr_1 [i_6 + 1]) ? (arr_1 [i_6 + 1]) : (arr_1 [i_6 - 1]))) : (arr_1 [i_6 + 1])));
        var_22 = (arr_10 [i_6] [i_6]);
        arr_21 [i_6] [i_6] = (arr_10 [i_6 + 1] [i_6]);
        var_23 = ((~(arr_10 [i_6 - 1] [i_6 - 1])));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        arr_33 [11] [i_8] [i_8] [i_9 + 2] [i_8] [i_10] = 6052;
                        arr_34 [i_7] [i_8] [i_7] [0] [i_9] [0] = (max(((+(((arr_2 [i_7] [20]) | var_3)))), (((min(var_10, var_7)) ^ (arr_8 [0] [i_8 + 2] [i_8 + 2])))));
                    }
                }
            }
        }
        var_24 += 37757;
        var_25 = ((var_2 ? (((max(47863, 1)))) : var_5));
    }
    #pragma endscop
}
