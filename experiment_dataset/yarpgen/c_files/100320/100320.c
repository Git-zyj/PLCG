/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~((var_13 / (0 != 14874079736914606882))));
    var_15 -= ((var_6 / ((7545640552704186545 ? 64 : 49))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((min(56638, (-3950260439710013710 <= 249)))) & (((!(((48 ? 5520465621922175446 : 37364754)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = (max((min(((min(var_0, var_8))), (var_3 - var_11))), (((((143 ? var_13 : var_0))) ? -199 : (min(9929, var_9))))));
                            var_18 = (min(var_18, (min((((1 >> (-26 + 57)))), (var_2 ^ -8208207727396257450)))));
                            arr_11 [i_0 - 1] [i_3] = (((((var_12 >> (var_10 + 2369953357916933260)))) || ((((((min(var_3, var_4)))) & (min(var_7, 16121871752504076702)))))));

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_19 = (min(var_19, (((min(((8796076244992 ? 3639532140613729892 : -21)), (var_5 || var_4)))))));
                                var_20 += ((-var_1 && ((min(var_5, ((9822679706809147519 ? 4 : -103)))))));
                                var_21 *= ((!((!(var_9 == var_6)))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_17 [i_0 + 2] = (((max(var_12, ((0 ? 0 : var_2)))) << (((max((max(var_2, var_7)), 57344)) - 4382647290741594797))));
                                var_22 |= (max((!16290728278725192979), (min((255 / var_11), -var_2))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 = (max(var_23, var_13));
                                var_24 &= (((min((max(-2271713769408680891, (-2147483647 - 1))), var_9)) / 2575));
                            }
                            for (int i_7 = 2; i_7 < 20;i_7 += 1)
                            {
                                var_25 = (max((min(((min(var_12, var_6))), ((var_4 ? 18446744073709551615 : 1)))), ((max(((min(255, 127))), 1523565416000099666)))));
                                var_26 = (min(var_26, (min(((max(((min(84, var_13))), (213 / var_6)))), (max(var_11, var_8))))));
                                arr_24 [i_0 + 2] [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_1] &= ((((((((18 ? 83 : 0))) ? 18446744073709551596 : (var_7 / var_7)))) && (((((min(var_13, 4852))) / (max(var_8, var_0)))))));
                                var_27 = ((var_10 & (max((10846483025086944974 == var_4), var_11))));
                            }
                        }
                    }
                }
                var_28 = ((min(((var_6 ? -1 : -1), 253))));
            }
        }
    }
    #pragma endscop
}
