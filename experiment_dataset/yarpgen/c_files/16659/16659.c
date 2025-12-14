/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = max(((min(var_6, var_0))), (0 != 2997077980));
            var_16 += (32757 <= 1297889316);

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_9 [i_0] [i_2] [i_0] = ((var_4 ? (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0]))) : (!22786)));
                var_17 = ((var_7 == (((arr_0 [i_0]) ? ((max(-119, var_7))) : ((((arr_1 [i_0]) || 2997077980)))))));
                var_18 = ((116 ? (((-127 - 1) - (arr_4 [7]))) : (((-(((arr_6 [i_0] [i_0]) - 1739303892)))))));
                var_19 ^= -27055;
            }
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = (-((((arr_2 [i_0]) || (((var_12 ? -1181429528 : 39297)))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                arr_15 [i_4 + 1] [i_4 + 1] [i_0] [i_4 + 1] = (((-127 - 1) * (arr_10 [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_21 = var_1;
                            arr_21 [i_0] [i_0] [i_4] [i_5 - 1] [i_6 + 3] [i_3] [i_3] = (~var_7);
                            arr_22 [i_0] [i_0] [i_0] [3] [i_5 + 1] [i_0] = (((arr_0 [i_6 + 1]) ? (arr_0 [i_6 + 1]) : (arr_0 [i_6 + 3])));
                            arr_23 [i_0] [i_0] [i_0 - 2] = var_12;
                            arr_24 [i_0] [10] [i_4 - 1] [i_6] [i_6] [i_3] [i_6] = (arr_16 [i_0] [i_6 + 3] [i_4 - 1] [i_0] [i_6]);
                        }
                    }
                }
            }
            var_22 = (((arr_13 [i_0] [21]) == 0));
            arr_25 [i_3] &= 13073568216866065267;
            var_23 ^= (max(((((var_12 <= var_7) ? (var_3 * -837004858) : (var_9 || var_8)))), (((arr_10 [i_3]) ? var_8 : ((var_8 ? (arr_11 [i_3]) : (arr_0 [12])))))));
        }
        for (int i_7 = 2; i_7 < 19;i_7 += 1)
        {
            var_24 = ((var_9 ? (((((var_0 || 1181429528) || var_12)))) : 8276946163025380305));
            arr_29 [i_7 + 1] [i_0] [i_0] = ((124 / (arr_28 [i_0] [i_0] [i_0 - 1])));
        }
        var_25 = ((var_7 == ((2997077969 ^ (-127 - 1)))));
        var_26 = ((~(!var_6)));
    }
    var_27 = var_8;
    var_28 ^= ((var_10 ? (min(4294967287, (((0 ? var_13 : var_15))))) : (!119)));
    var_29 = ((1297889316 <= ((((var_4 + var_8) / ((var_10 ? var_7 : var_9)))))));
    var_30 = ((((min(((0 ? var_8 : -22646884)), 32763))) ? (var_4 != 1824488402) : ((4294967285 ? 4294967273 : (((min(var_15, var_10))))))));
    #pragma endscop
}
