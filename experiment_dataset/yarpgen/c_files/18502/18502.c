/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [23] = (((((var_4 << (var_6 - 38)))) ? var_4 : ((66 ? 17996075263529162274 : 5001))));
                arr_7 [i_1] &= (((((((-5002 ? 17996075263529162288 : 4991))) ? (((450668810180389343 ? 2731 : 2726))) : 13896955677415144045)) >= (1 > 2750)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] = var_12;
                                var_16 += (((((((var_6 ? var_13 : var_12))) ? var_7 : ((31107 ? -4994 : 7925501398155569361)))) >= (((((((var_14 ? var_11 : var_6))) != var_12))))));
                                var_17 += (((4599578817774930480 | -9223372036854775802) ? (((var_4 >= ((var_0 ? var_11 : var_1))))) : (((((var_7 ? var_8 : var_2))) ? ((var_13 ? var_6 : var_7)) : var_2))));
                            }
                        }
                    }
                }
                var_18 = ((-4991 ? 4294967295 : 1));
                var_19 *= (((((-4996 ? (5001 + -2743) : 13847165255934621160))) ? ((((var_9 ? var_14 : var_8)) % ((var_15 ? var_5 : var_5)))) : ((((var_9 ? var_15 : var_4)) / var_13))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 -= var_13;
        var_21 = ((((((((var_15 ? var_2 : var_6))) ? (var_3 && var_9) : (var_2 || var_15)))) ? (((27212 || var_1) ? ((var_5 ? var_0 : var_5)) : (var_9 || var_13))) : (((var_3 ? var_1 : var_13)))));
    }
    var_22 &= var_14;
    var_23 = ((var_15 | (((((2122457841 ? 2172509479 : 8577))) ? var_9 : var_4))));
    #pragma endscop
}
