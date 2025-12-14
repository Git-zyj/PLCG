/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((var_12 ? (arr_1 [i_1 + 3]) : ((var_9 + (arr_1 [5])))));
                    var_16 = ((254 ? -65 : 4203));
                }
            }
        }
        var_17 = (((arr_0 [i_0]) ? -44 : var_6));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_18 = ((!(((max(var_14, var_0))))));
            arr_13 [i_4] = (max(var_8, (((((16384 ? (arr_11 [i_3] [i_4] [i_4]) : (arr_9 [i_3])))) ? ((var_0 ^ (arr_12 [i_3] [11]))) : (((arr_7 [7] [i_4]) % var_14))))));
            var_19 ^= -65;
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_16 [i_5] [i_5] = ((!(((arr_14 [13] [i_5] [i_5]) == var_6))));
            var_20 = (25 % 29504);
            var_21 = (max(var_21, 18));
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_22 = (((max(var_5, (~var_12))) + (((arr_12 [i_6] [i_6 + 1]) ? ((~(-127 - 1))) : ((var_7 << (var_12 - 46)))))));
                    var_23 = (((!(arr_10 [i_6 + 1] [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_24 = (((((max(var_10, var_8)))) ? var_2 : -var_6));
                                arr_26 [i_6] = ((((min((~var_7), 112))) ? (arr_9 [i_6 - 1]) : ((-29504 ? -10656 : -16385))));
                                var_25 = -29504;
                            }
                        }
                    }
                    arr_27 [i_3] [i_7] [2] &= var_13;
                }
            }
        }
        var_26 ^= var_8;
        arr_28 [i_3] [i_3] = max((!-121), 201);
    }
    var_27 = (!var_5);
    #pragma endscop
}
