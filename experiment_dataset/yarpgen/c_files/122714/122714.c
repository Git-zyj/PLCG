/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((1 < 1) * 0));
    var_14 = ((min(((var_10 ? 4294967294 : var_12)), var_2)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 ^= (arr_0 [i_0]);
        var_16 = (max(var_16, 10));

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = ((min((((arr_1 [i_0] [i_0]) ? 0 : (arr_0 [i_0]))), var_6)));
            arr_5 [i_0] [i_0] = (min(var_8, ((~(((arr_1 [i_0] [i_0]) << (18446744073709551615 - 18446744073709551587)))))));
            var_17 -= (~18446744073709551599);
            arr_6 [i_0] [i_1] [i_0] = (min(var_5, var_0));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 7;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_2 - 2] [i_2] [i_3 - 1] = (((arr_1 [i_2 - 2] [i_0]) ^ 1379333273));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 4; i_5 < 7;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_3 + 2] [i_0] [i_0] = 15097146458536630497;
                        arr_20 [i_0] [i_0] [i_0] [i_4] [i_5] = 44483;
                        var_18 = (min(var_18, (var_1 ^ var_7)));
                    }
                    var_19 = (var_1 + 4294967295);
                }
                arr_21 [i_0] [i_3] = 0;
            }
            for (int i_6 = 1; i_6 < 8;i_6 += 1) /* same iter space */
            {
                arr_24 [i_0] [i_2 + 2] [i_0] [i_2 + 1] = 3;
                arr_25 [i_0] = 386834081;
                arr_26 [i_0] [i_0] [i_0] [i_0] = ((((arr_13 [i_0] [i_0] [i_2 + 3] [i_6]) + 2147483647)) >> (var_7 - 209983424));
                arr_27 [i_6] [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_2 - 2] [i_0] [i_0]);
            }
            for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
            {
                var_20 ^= 2078738105;
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_21 *= 0;
                            arr_35 [i_0] = (arr_1 [i_0] [i_0]);
                            arr_36 [i_0] [i_8 + 1] [i_7 + 1] [i_2] [i_0] = (((arr_28 [i_2 - 1] [i_0] [i_2 - 2]) ? var_3 : (arr_15 [i_2 + 1] [i_2 - 2])));
                            arr_37 [i_9] [i_8] [i_0] [i_2 + 3] [i_0] = var_10;
                        }
                    }
                }
            }
            arr_38 [i_0] = (15 >= 4294967295);
            arr_39 [i_0] [i_2] = (((((3 >> (var_3 - 2314972807791728431)))) ? (arr_29 [i_0] [i_2] [i_2]) : ((var_3 ? var_11 : -589479395744871576))));
        }
    }
    #pragma endscop
}
