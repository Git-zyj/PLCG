/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((162 >= (~var_4))))) ^ (max(((max(7914272, 255))), 18446744073709551615))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3 - 4] = ((var_8 >= (~3602619685)));
                        var_20 = (max(var_20, (0 >> var_11)));
                        var_21 = (3140019424826576620 - -1655006984);
                    }
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] = 52;
                        arr_16 [i_0] [i_0] [i_2 - 1] [i_0] [i_1 + 1] [i_0] = ((-(-1 | var_3)));
                    }
                    var_22 *= 4294967279;
                }
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_19 [i_0] [i_1] [i_0] [i_1 - 1] = var_0;
                    arr_20 [i_0] [i_1] [i_0] = ((((((var_7 % 21) >= (-1 == var_17)))) | -16));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_24 [i_0] [i_1 - 1] [i_6] [i_1 - 1] = ((13 / (245 ^ 14597897377342135533)));
                    arr_25 [i_0] [i_0] = 0;
                }
                arr_26 [i_0] [2] = -0;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_23 = var_5;
                                arr_41 [i_7] = ((76 + ((-(3848846696367416082 || var_16)))));
                            }
                        }
                    }
                    arr_42 [i_7] [i_7] = 1;
                    var_24 = (-9223372036854775807 - 1);
                    arr_43 [i_9 - 3] [i_7] = -1655006984;
                }
            }
        }
    }
    #pragma endscop
}
