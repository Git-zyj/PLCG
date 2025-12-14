/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (!var_5)));
                var_14 = (min(var_14, var_2));
            }
        }
    }
    var_15 ^= (!var_3);

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_10 [i_3] = ((-1 ? -1 : 10));
            var_16 = (min(-13, -103));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_17 = (169 << (((-11 + 41) - 24)));
            var_18 = (max(var_18, (((((((min(4276797257, var_3))) ? (!26490) : 18446744073709551598)) ^ (((!var_11) ? (((arr_1 [i_2]) % 18446744073709551598)) : ((min((arr_3 [i_2] [i_4]), 4294967295))))))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_19 += (max(((((max(74377042, 0))) ? (arr_15 [i_5]) : (26 - var_0))), (max((arr_12 [i_2] [i_5]), (min((arr_11 [15]), 178))))));

                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            var_20 = ((((~9223372036854775807) ? 243 : (arr_7 [i_2]))));
                            arr_25 [i_2] [i_7] [i_8] [i_7] [i_8] [i_8] = ((~(~-1872311275)));
                            var_21 = (max(var_21, (((1872311281 + ((min((arr_3 [i_8] [i_7 + 1]), 127))))))));
                            var_22 = ((((-(((arr_2 [i_6]) ? (arr_8 [i_7] [14] [i_7 + 1]) : var_7)))) - ((((min(var_0, (arr_19 [i_2]))))))));
                            var_23 = (min(2147483637, -427902851));
                        }
                        var_24 *= (((((arr_21 [i_2] [i_7 + 1] [i_6] [i_7]) ? (arr_21 [i_6] [i_5] [0] [i_6]) : (arr_21 [3] [3] [i_6] [i_7 - 1])))) ? (((!(((255 ? 11 : 2197949513728)))))) : (((arr_23 [12] [16] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_6] [i_7 - 1]) & -1280607337)));
                        var_25 = (min(var_25, ((((((var_3 ? 77 : ((var_9 ? 4294967295 : (arr_12 [i_2] [8])))))) ? (((~(((arr_3 [i_6] [i_6]) ? var_10 : (arr_20 [i_7 + 1])))))) : (~var_4))))));
                    }
                    arr_26 [i_6] [i_2] [i_2] = (((max(((14281079626976119998 + (arr_6 [8] [i_5]))), ((((arr_0 [i_2]) / (arr_23 [i_2] [8] [i_6] [i_6] [i_2] [i_5] [i_2])))))) * -1));
                }
            }
        }
        var_26 ^= ((-60 < ((((78 <= (arr_21 [i_2] [i_2] [i_2] [i_2]))) ? (((max((arr_3 [i_2] [i_2]), 144)))) : ((var_9 ? 161246574 : var_1))))));
        var_27 = (min(var_27, (((max(-6213, 22801))))));
        var_28 ^= 13480542093058266378;
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_29 *= (((((~(arr_29 [9])))) ? (arr_4 [18] [i_9]) : (arr_4 [9] [i_9])));
        var_30 *= (arr_29 [i_9]);
    }
    var_31 = ((!((!(((-643023149 ? 177 : 4294967295)))))));
    #pragma endscop
}
