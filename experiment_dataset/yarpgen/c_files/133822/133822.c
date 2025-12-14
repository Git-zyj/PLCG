/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_9 ? (16404822767269091787 < 19846) : var_8));
        arr_3 [i_0] = (((arr_0 [i_0]) ? var_2 : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        var_16 = ((((-284983158 || (var_10 < -80))) ? (((arr_5 [i_1] [i_1 - 2]) - (arr_6 [1] [i_1 + 2]))) : (arr_6 [i_1] [i_1])));
        arr_8 [i_1] = ((!(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = (-127 - 1);
        var_17 = (min(var_17, (((((min((max((arr_10 [i_2]), (arr_10 [i_2]))), (var_7 <= -53)))) ? (!var_1) : ((((min((arr_1 [16]), 40142))) << ((((max(-115, -80))) + 80)))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 19;i_4 += 1)
            {
                {
                    var_18 = ((arr_12 [i_4]) == (1945307141 << var_15));
                    var_19 = (((((((max(48388, 8190))) ? (((-9 + 2147483647) >> (40142 - 40130))) : (!1)))) ? ((-(!119))) : -8191));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (((-12673 ? (110 || -89) : (arr_18 [i_4 + 2] [i_4]))));
                                var_21 = (min((arr_24 [i_4] [i_6] [i_6] [i_6 - 1] [i_6]), (arr_24 [i_4] [16] [i_6 + 2] [i_6 + 2] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_28 [i_7] = (((4044186380 >= 268369920) >= (var_14 || 1452269563859598025)));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 17;i_9 += 1)
            {
                {
                    var_22 = ((31 || (42801 - 10665)));
                    var_23 ^= (((arr_0 [i_9 + 1]) ? 3707986087 : -110));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((!(arr_24 [16] [i_10 - 1] [i_8] [i_11 + 1] [i_9 - 1])))));
                                var_25 = (((4294967293 - var_13) ? (arr_26 [i_10] [i_11 - 1]) : (arr_0 [i_9 - 3])));
                                var_26 = ((-6042790385297492554 - (arr_21 [i_11])));
                            }
                        }
                    }
                }
            }
        }
        var_27 = 251;
        var_28 = (((!4294967295) & var_8));
    }
    var_29 = ((min(1250119380, (1 - var_8))));
    var_30 = var_14;
    #pragma endscop
}
