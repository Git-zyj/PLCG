/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(min(20, 20))))) ? ((var_1 ? (max(805306368, 18446744073709551596)) : ((20 ? 18446744073709551595 : (arr_0 [i_0] [i_0]))))) : ((min(((var_0 ? 7835167390368157251 : -4609210638678634220)), ((min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = (min(((var_3 & (arr_1 [i_0]))), (((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0])))));
        var_12 = (min(var_12, ((((max(-157, (((arr_1 [i_0]) ? var_9 : var_1)))) <= ((max(3489660946, 76))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_13 = (max(var_13, ((min((max((arr_12 [i_1]), var_1)), (((11245722795883470712 <= ((min(var_10, var_11)))))))))));

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_1] = (((arr_13 [i_3] [i_3] [i_3 + 1]) ? (((arr_1 [i_4 - 1]) + (arr_10 [i_2] [i_2] [i_3 + 1]))) : (arr_1 [i_1])));
                            arr_18 [13] [i_1] = (((((arr_4 [i_5]) + (arr_4 [i_3 + 1]))) + (((arr_4 [i_1]) / (arr_12 [i_1])))));
                            var_14 = (max(var_14, ((2776581296 ? 46 : 18446744073709551582))));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_22 [i_4 - 1] [i_1] [i_2] = (min(((((min(46, 19))) ? (arr_12 [i_2]) : 177)), -43325));
                            arr_23 [i_1] [i_2] [i_1] [i_4] = (((((-(max(97, 830289208))))) ? (min((((20 ? (arr_9 [i_2]) : var_6))), (min(7835167390368157251, 20)))) : (arr_21 [i_1] [i_1] [i_6] [i_6] [i_6] [i_4 - 1] [i_6])));
                            var_15 = (min(var_15, 4214225051));
                            arr_24 [i_1] [i_1] [i_4] [i_6] = (arr_0 [i_4] [i_2]);
                        }
                        var_16 = (((((min(12, var_4))) ? var_5 : (((arr_12 [i_2]) | (arr_9 [i_4]))))));
                    }
                }
            }
        }
        var_17 = (min((((arr_6 [i_1] [7]) ? (145 - 19660) : (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))), (((arr_15 [i_1] [4] [i_1] [i_1] [i_1]) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (var_4 % var_2)));
        var_19 += ((var_3 ? -19 : var_3));
        arr_28 [i_7] = (arr_27 [i_7] [i_7]);
        arr_29 [i_7] = (arr_26 [i_7] [i_7]);
    }
    var_20 += var_10;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            {
                arr_36 [i_8] [i_8] = (((((!((((arr_30 [i_8]) ? var_11 : (arr_33 [i_8 - 1] [i_8 - 1] [i_9]))))))) - ((4214225051 ? (arr_33 [i_9] [i_9] [i_9]) : ((((arr_32 [i_8] [i_9] [i_9]) || 2111569237531763922)))))));
                var_21 = ((+((((var_9 >= var_7) != (60162 != var_2))))));
                var_22 -= (max(((-((21 ? var_9 : -20)))), -65481));
            }
        }
    }
    var_23 = (max(var_23, var_1));
    #pragma endscop
}
