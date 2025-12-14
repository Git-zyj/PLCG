/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((47627 ^ 238) ? var_15 : (var_16 - var_9))) < (((((var_18 ? 18445449508673830831 : var_10)) >= 255)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_2 [i_0] [i_0]) ? 255 : var_18)));
        var_20 -= 1;
        var_21 *= ((var_0 ? (arr_1 [i_0]) : (((((min(var_15, var_18)) == (((255 ? -1658844919 : 3)))))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_22 = (max(var_22, (((((max(var_10, (arr_6 [i_0] [i_1] [i_0]))))) ^ (arr_7 [i_0] [i_1] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_23 = 1658844933;
                            arr_14 [i_0] [i_0] [10] [10] |= (max(((30836 ? ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) / (arr_4 [i_2])))) : ((1 ? 31 : 15769251727856071356)))), var_14));
                        }
                    }
                }
            }
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                var_24 = (((((var_13 + 21) % (~0))) + (((-(arr_5 [i_0] [i_0]))))));
                var_25 = (arr_6 [i_0] [i_1] [i_5 + 2]);
                var_26 = (max(8, 153));
                var_27 -= (((((-((-364643702 ? 3272464261504788558 : (arr_15 [i_5])))))) ? 20 : ((811 ? ((min(var_12, 1))) : 0))));

                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_20 [i_0] [i_5] [i_5 + 3] [i_6] [i_0] [i_1] = -1858401146;
                    arr_21 [i_5] = (((arr_9 [8] [i_1] [i_5 + 1] [i_5] [i_5] [i_0]) >> (((((max((arr_1 [i_0]), (arr_7 [i_0] [i_1] [i_0] [i_0]))))) - 62930))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    arr_25 [6] [i_1] [i_5] [i_7] [i_0] = ((63 ? 247 : 3272464261504788575));
                    var_28 |= ((-62 ? var_12 : 0));
                    var_29 ^= (((arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]) % (arr_8 [i_5 + 1] [i_7 - 1] [i_7 + 1])));
                    var_30 ^= ((var_15 ? var_5 : 0));
                    arr_26 [i_7] [i_5] [i_5] [i_0] = ((-((((arr_12 [i_0] [i_7] [i_5] [i_1] [5] [5]) || var_12)))));
                }
            }
            var_31 = min((((((max((arr_22 [0] [i_0] [i_0] [i_0] [i_0]), var_3))) ? -1826286231 : ((max(-1, (arr_16 [i_1] [i_1] [i_1] [i_0]))))))), 9499716501906681398);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_0] = var_0;
            var_32 ^= (max((arr_23 [i_0] [i_0] [i_8] [i_8]), 235681196));
        }
    }
    #pragma endscop
}
