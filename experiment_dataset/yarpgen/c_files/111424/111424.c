/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((min(var_6, (127 * 127))) * (((((8048 ? 65535 : var_5))) ? ((min(var_5, var_6))) : var_10))));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = ((((var_7 & (((var_4 ? 5862887926723667605 : -8064))))) - ((((((var_5 >> (var_3 - 28856)))) ? (~-8064) : (arr_3 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = ((var_5 <= ((min((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_1]))))));
            arr_8 [6] &= (min((arr_2 [i_0]), (((((min((arr_3 [i_0] [i_1]), var_11))) < (~0))))));
            arr_9 [i_1] [i_1] [i_1] = (min(1, 3741354742));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_15 -= 8063;
            var_16 ^= (arr_10 [i_0] [i_2]);
        }
        var_17 ^= (((min(33554432, 120)) < (((((var_2 ? 34138 : var_2))) ? (((!(arr_3 [i_0] [i_0])))) : 3251954458))));
        var_18 ^= var_9;
        var_19 = 1;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_20 = (min(var_20, -19));
            var_21 = (((arr_15 [i_4]) ? 65535 : (arr_15 [i_4])));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_22 = (15586466222002076409 / 9);

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_23 *= ((var_8 % (arr_19 [i_4] [i_4] [i_6] [i_5 - 1])));
                            var_24 = (var_2 ^ var_3);
                            var_25 = var_0;
                        }
                    }
                }
            }
        }
        arr_26 [i_3] [i_3] = (arr_15 [2]);
    }
    var_26 = ((((((var_8 ? 1 : var_9)))) ? (((!(((8574 ? var_10 : var_9)))))) : (!118)));
    var_27 = (max(var_27, ((((!2403590202) || var_11)))));
    #pragma endscop
}
