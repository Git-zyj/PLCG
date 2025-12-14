/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? var_9 : ((var_0 ? (((max(var_10, var_14)))) : (max(var_0, 13458977422612913107))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 ^= ((((-26553 ? (0 < 4294967285) : (max(var_8, var_1)))) + ((((((max(var_5, var_15))) || (~var_5)))))));

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_21 = (min((((((var_8 ? 255 : 127))) ? (arr_6 [i_0] [i_1] [i_1]) : var_4)), var_7));
                arr_7 [i_1] [i_1] [i_2] [14] = 67;
            }
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] &= ((((min((arr_5 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), 1))) || var_3));
                    var_22 += (((arr_3 [i_3 + 1]) ? ((min((((arr_9 [i_0] [i_1] [i_3] [i_4]) >= 4294967285)), (arr_2 [i_3 + 1] [i_3] [i_3])))) : (2140113287 ^ var_15)));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_16 [i_1] = (arr_6 [i_0] [i_0] [2]);
                    var_23 = ((1 ? var_6 : var_7));
                }
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((~(min((((arr_1 [i_0]) ? 5744567616450058938 : var_16)), var_8))));
            }
        }
        var_24 = 0;

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_21 [i_0] [i_0] = (((((arr_9 [i_0] [i_0] [i_0] [i_6]) ? 1 : 0)) < (((~((min(var_16, 1))))))));
            var_25 = 4294967295;
            var_26 += (arr_18 [i_0] [i_0]);
            arr_22 [12] = (((var_1 & var_17) == 24));

            for (int i_7 = 2; i_7 < 14;i_7 += 1)
            {
                var_27 = ((((((arr_2 [i_6] [i_6] [i_0]) ? var_8 : var_15))) ? (arr_2 [i_0] [i_6] [i_6]) : ((var_2 * (arr_2 [i_7 + 1] [i_6] [i_0])))));
                var_28 = (min(var_28, ((((arr_18 [i_0] [i_7 - 2]) ? (arr_18 [i_7] [i_7 - 1]) : (arr_18 [i_0] [i_7 + 1]))))));
                var_29 = (arr_1 [i_7 - 1]);
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_28 [i_0] = (~1);
            var_30 = (min(var_30, var_15));
            var_31 = (((-127 - 1) ? (((((-110 ? 18446744073709551613 : var_14)) <= 1))) : 203));
        }
        var_32 = ((~(+-18)));
    }
    #pragma endscop
}
