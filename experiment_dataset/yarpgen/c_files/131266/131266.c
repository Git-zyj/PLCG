/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 62;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, 10021));
                        var_18 = (min((var_1 & 2653711188390788731), 64));
                    }
                }
            }
        }
        var_19 |= -66;
        var_20 ^= (max(((min(71, -8046746531897736659))), ((max(((-8500016116244163783 ? (arr_4 [i_0]) : 32640)), (((!(arr_7 [i_0] [i_0] [i_0] [0] [i_0 + 1] [i_0])))))))));
        var_21 = var_7;
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_22 = (arr_9 [i_4]);
        var_23 = (-56 % (((!(!var_15)))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_24 ^= (min(((((max(66, var_0))) ? 7005349564392626248 : ((1135 ? 4 : 11376647286792035857)))), (((var_6 ? (((arr_18 [8] [14] [i_4] [i_4]) % (arr_16 [i_4] [i_5] [i_8]))) : var_7)))));
                                arr_22 [i_4 - 1] [i_4 - 1] [i_4] = -1144148571;
                                var_25 = (arr_10 [i_8]);
                                var_26 = (((arr_13 [i_4 - 1] [i_5] [8] [i_8 - 2]) ? (((((((var_5 / (arr_20 [i_4] [10])))) == 10729310477093893008)))) : (max(var_14, ((max(var_5, var_12)))))));
                            }
                        }
                    }
                    var_27 = (((arr_17 [i_4] [i_4] [i_5] [i_6]) / var_5));
                }
            }
        }
        var_28 = (min(var_28, ((min(((var_7 + (max(7005349564392626248, 49)))), ((((7747 + (arr_9 [6]))))))))));
        var_29 &= ((-1 ? 63 : (-9223372036854775807 - 1)));
    }
    #pragma endscop
}
