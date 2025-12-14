/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_7, (var_6 * var_7))) * (((((min(var_1, var_15)) == (((var_4 + 2147483647) << (var_17 - 17789)))))))));
    var_20 &= ((((((var_14 <= var_13) << (var_1 - 160)))) > (((-2173679210576647154 + 9223372036854775807) << (1695 - 1695)))));
    var_21 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (((max(var_5, var_13)) * (var_18 / var_13)));
                var_23 = (min(1, 467883429));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_24 &= ((((((0 > 1784375008535630311) || ((min(var_16, var_14)))))) << (((var_6 * var_6) / (var_10 / var_3)))));
                            arr_12 [i_0 + 1] [i_2] = ((((((var_5 << (var_3 - 28742))) + var_3)) >= (0 % 1)));
                            var_25 ^= var_6;

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_26 = ((((var_6 >> (var_0 != var_15))) != var_14));
                                arr_16 [i_2] = (var_8 * var_7);
                                arr_17 [0] [i_1] [i_2] [i_1] [i_3] [i_2] [i_4] = (0 / 16662369065173921305);
                            }

                            for (int i_5 = 2; i_5 < 15;i_5 += 1)
                            {
                                arr_21 [i_2] = (min(var_5, (max((var_5 / var_13), ((min(var_14, var_17)))))));
                                var_27 = (min(var_27, ((((((var_1 * ((var_2 >> (var_5 - 61007)))))) & ((((var_6 << (var_1 - 107))) / var_13)))))));
                                var_28 = (min(((((var_4 | var_17) && (var_15 & var_4)))), (5135988136296177562 * 1784375008535630311)));
                                var_29 = (max(var_29, ((min(((((var_3 >= var_9) > (var_4 != var_14)))), (var_14 / var_15))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 3; i_6 < 14;i_6 += 1)
                            {
                                var_30 = (var_10 / var_13);
                                arr_24 [i_2] [i_2] [i_3] [i_6] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
