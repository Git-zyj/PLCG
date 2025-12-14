/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(var_6, 56)))) ? ((((var_7 ? var_6 : var_5)) >> ((max(var_5, var_9))))) : ((min((min(var_2, 209)), (var_1 == 14129772926482410148))))));
    var_13 = ((~((min(var_3, var_3)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [16] [i_2] [i_0] = (((arr_6 [i_0]) & ((((var_11 == (((arr_4 [i_0] [i_2 - 3]) ? (arr_6 [i_0]) : 127))))))));
                    var_14 &= ((~(min(493308182, 2534988878))));
                }
            }
        }
        var_15 *= ((((((2929932081540231800 || ((max((arr_5 [i_0] [i_0] [i_0]), var_11))))))) + ((1 ? ((min(3801659114, var_1))) : (((arr_2 [i_0]) / (arr_1 [2])))))));
        var_16 = (((((arr_0 [i_0] [i_0]) * -127)) / (arr_0 [i_0] [i_0])));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (arr_1 [i_3]);
        arr_14 [i_3] = (200 >> var_9);
        var_17 = (min(var_17, var_1));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_18 = ((-((-(min((arr_11 [1] [i_4]), var_0))))));
        var_19 = (503800250 > 66);
        var_20 -= -16675;
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 20;i_5 += 1)
    {
        arr_21 [1] = (arr_18 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    {
                        var_21 = (arr_29 [i_8] [i_6]);
                        arr_31 [i_5] [i_6] [i_5] [i_7] [i_8] [i_8 + 1] = (arr_29 [i_5 - 2] [i_5 + 1]);
                        var_22 += ((~(arr_23 [i_5])));
                        var_23 = ((88641486 ? (arr_22 [i_5 + 4]) : -1));
                        arr_32 [i_5] [i_6] [i_7] [i_8] = (((((arr_27 [i_5] [i_6] [i_6] [i_8 + 1]) ? (arr_23 [i_5 - 2]) : (arr_23 [i_8 - 1]))) + 2065464123));
                    }
                }
            }
        }
        var_24 = ((var_7 == ((var_1 ? (arr_19 [i_5]) : 106))));
        var_25 |= var_6;
    }
    var_26 = var_9;
    #pragma endscop
}
