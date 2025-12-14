/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        var_16 = var_7;
    }
    var_17 ^= var_12;

    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_18 = (max(var_18, (((var_14 >= (((~(!var_12)))))))));
            var_19 = ((1199384500 >> (var_9 - 85)));
            var_20 -= var_13;
            var_21 -= var_2;
        }
        var_22 = var_5;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_23 = ((~(~4029249330)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_24 = (154 > 50477);
                                arr_21 [i_6] [i_1] [6] [3] [i_1] [i_1 - 2] = var_12;
                                var_25 -= (~(var_14 - var_5));
                            }
                        }
                    }
                    var_26 -= var_13;
                    var_27 = var_14;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_28 = var_14;
                        var_29 = var_2;
                        var_30 = var_6;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                {
                    var_31 = var_10;
                    var_32 = var_5;
                    var_33 = (((((var_3 ^ (var_4 && var_13)))) ^ var_14));
                    var_34 *= (var_0 % var_6);
                    arr_38 [i_11 - 1] = ((-((~(var_11 | var_10)))));
                }
            }
        }
    }
    #pragma endscop
}
