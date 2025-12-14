/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 -= (((arr_2 [i_0]) ? 23517 : ((var_7 ? var_9 : 7109))));
        var_17 = (max(var_17, 268435424));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_2] [5] [i_4] [i_3 + 1] = (((4278392803 ? var_12 : 4278392786)));
                            var_18 = (!37691);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, -1965447036));
                            var_20 += ((var_11 ? 1 : var_0));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_23 [i_7] [i_1 - 1] [i_7] = var_1;
                var_21 ^= (((var_13 >= 1) ? (arr_13 [12] [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [8]) : var_4));
            }
            var_22 = var_8;
            var_23 |= (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : var_7));
        }
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_24 += -32767;
        arr_26 [16] &= ((((((((arr_24 [i_8]) / 1595615426))) ? (arr_24 [i_8]) : ((max(var_10, (arr_25 [18])))))) == (max((((20308 ? var_2 : var_13))), var_15))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        var_25 *= (((arr_24 [i_9]) % (arr_25 [1])));
        arr_29 [i_9] [i_9] = 65525;
        arr_30 [i_9] = ((min(((1965447014 ? 62958 : (arr_27 [19] [9]))), ((var_6 >> (((arr_24 [18]) - 577446527)))))));
    }
    var_26 = -94;
    var_27 &= (min((((var_15 ? (~var_13) : (min(16574490, var_11))))), ((((min(9223372036854775800, var_3))) ? ((var_2 ? var_0 : 2331036147)) : (((var_13 ? 65519 : var_4)))))));
    var_28 += ((+((((var_0 != var_14) != (~17))))));
    var_29 |= var_2;
    #pragma endscop
}
