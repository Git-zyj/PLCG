/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_15 *= (((~384236438) << (((~var_7) + 20))));
        var_16 *= -1836676569217501828;
        arr_2 [i_0] = 30006;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((var_4 ? ((~(-1836676569217501827 ^ var_3))) : ((~((var_9 ? var_0 : -1836676569217501828))))));
        var_17 = (max((((((arr_4 [i_1]) * -1)) - var_6)), (((-(!-1836676569217501828))))));
        var_18 = ((~((var_9 ? (2605133953 & 63) : 192))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_10 [i_1] = ((~(min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_2])))));
            arr_11 [1] [i_1] [i_1] = (max((~var_11), (-6230 == -26)));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_21 [1] [i_2] [i_3] [i_4] [i_5] = ((-((min(201, 42)))));
                            var_19 = (((~-107) <= ((var_10 ? (arr_19 [i_1] [i_3] [i_3] [i_4] [i_1]) : (arr_13 [i_3] [i_2] [i_3])))));
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = (((((arr_4 [i_1]) ^ (arr_20 [i_1] [i_1]))) + var_11));
                            arr_23 [i_1] = ((-((~((((arr_5 [i_1]) && var_13)))))));
                            arr_24 [11] [i_2] = ((((((3401437734147394265 <= (((arr_14 [1] [0] [i_4]) ? 80 : -114)))))) / (max(-384236442, (min(917784497, -28))))));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            arr_29 [i_1] [i_1] = -9;
            var_20 = (min(var_20, ((1 ? (((((arr_0 [i_1] [i_1]) && (((arr_26 [2]) && 1)))))) : (max((~917784497), (arr_15 [i_6] [i_6 + 1] [i_6])))))));
            arr_30 [i_1] = (((((max((arr_17 [i_1] [3] [11] [i_6 + 1]), 4611686018427387904)) * (7 / 9223372036854775807))) > var_4));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_21 = ((-(7 * 2605133943)));
            var_22 = 2051553405;
            var_23 -= 26;
        }
    }
    var_24 = 21;
    #pragma endscop
}
