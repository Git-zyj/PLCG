/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = ((228 ? 255 : ((min(1, -7732)))));
        var_11 = ((7720 ? 2147483647 : -7752));
        var_12 = (min(((7731 * (((arr_3 [i_0] [i_0]) * 63)))), -65535));
        var_13 -= var_4;
        var_14 = (((var_2 >= 7712) ? (((min(-4302, (arr_0 [i_0]))))) : ((2 ? ((155642078 ? 2849933631 : var_9)) : (arr_3 [i_0] [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, (~65535)));

                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_16 &= (arr_12 [i_2] [i_2] [i_3]);
                        var_17 = (((((-((((arr_11 [i_1]) == var_3)))))) || ((min(((min(var_5, var_0))), ((1 ? 4312 : (arr_7 [i_3]))))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_18 = var_3;
                            arr_20 [i_4] [i_3] [i_2] [i_1] |= (-4302 != 15662435596323753190);
                        }
                        for (int i_6 = 1; i_6 < 7;i_6 += 1)
                        {
                            var_19 = 43339;
                            arr_25 [i_1] = ((-var_4 < ((1 % (arr_14 [i_2] [i_2] [i_3])))));
                            var_20 = ((~(((arr_7 [i_6 + 1]) & 255))));
                        }
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        var_21 = (((((65535 * -4279) / var_6))) ? ((var_3 - (arr_1 [i_1]))) : (arr_12 [i_1] [i_3] [i_7 - 1]));
                        arr_29 [i_1] [i_2] [i_3] [i_7] = (max(1, ((-((-(arr_16 [i_7] [i_3] [i_3] [i_2] [i_1] [i_1])))))));
                    }
                    var_22 = (min((min(127, (1023 / var_2))), (((-(((arr_28 [i_1] [i_2] [i_3] [i_3]) ? 255 : -4308)))))));
                    var_23 = (min(var_5, 183));
                    var_24 = arr_2 [i_1];
                }
            }
        }
    }
    var_25 = ((!(((((max(15662435596323753176, var_9))) ? var_6 : var_8)))));
    #pragma endscop
}
