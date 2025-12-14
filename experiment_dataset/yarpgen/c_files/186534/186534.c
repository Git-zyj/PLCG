/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (32768 * -1);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (var_15 ^ -var_0);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((32767 ? -32759 : 32767)))));
                            arr_18 [i_0] [i_2] = (32767 == 32762);
                            var_17 = (min(var_17, var_10));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = (min(var_18, (((var_3 ? (32767 >= 0) : var_3)))));
                        var_19 = (~-32762);
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            var_20 = (max(var_20, var_1));
            arr_26 [i_0] [18] = ((var_1 ? var_4 : var_1));
            var_21 ^= (18266437409612074469 >= 65520);
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            arr_29 [12] [i_0] = (((((var_7 + 9223372036854775807) >> (180306664097477147 - 180306664097477136))) - (((180306664097477147 ? -32762 : var_6)))));
            var_22 ^= (!32748);
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    {
                        var_23 = (32736 & var_12);
                        var_24 = (var_14 >= var_2);
                        var_25 += 16;
                        var_26 = var_9;
                    }
                }
            }
            var_27 *= 65516;
        }
        var_28 += (~-2048);
        var_29 = ((-32743 ? ((var_10 ? 32764 : 1)) : var_10));
    }
    var_30 = var_11;
    #pragma endscop
}
