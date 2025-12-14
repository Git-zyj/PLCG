/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 += 32748;
        var_13 &= 245;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_14 = (min(((2836454461 ? -1527593800 : ((3452294871 ? 66 : 3452294871)))), (min((arr_5 [i_1]), (arr_0 [i_1])))));
        var_15 = (~4179214853);
        var_16 = (~0);
        var_17 = min(-3423783807251017082, (((~3423783807251017055) & var_1)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_18 = var_2;
                            var_19 = (((arr_7 [i_2] [i_2]) - ((0 ? (((var_10 ? var_9 : (arr_13 [i_4] [i_2] [i_3] [i_4])))) : 3423783807251017082))));
                        }
                    }
                }
            }
            var_20 = (max(var_5, (((!(17 & 0))))));

            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_21 &= (((arr_24 [i_7] [4] [i_7 - 1] [i_7 + 1] [i_7 - 2]) <= ((var_10 ? ((65514 * (arr_27 [10] [i_2] [i_6] [i_7]))) : ((224 ? 37788 : 2326))))));
                            var_22 = ((var_2 ? (((((65535 ? (arr_27 [i_1] [i_2] [i_6] [i_8]) : (arr_22 [i_1] [i_2] [i_2]))) != (((((arr_24 [i_8] [i_7] [i_6 - 2] [i_1] [i_1]) != var_6))))))) : ((((min(62358, 65526))) ? (arr_27 [i_1] [i_2] [i_6] [i_7]) : 1))));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_23 = var_5;
                    var_24 = ((~((var_2 ? ((-1 ^ (arr_3 [i_1]))) : (arr_13 [i_6] [i_6 - 1] [i_6 - 2] [i_6 - 2])))));
                    var_25 = 1043597810;
                    var_26 = (min(var_26, 3300508990));
                }
            }
        }
    }
    var_27 ^= (((((((3534941845275979559 ? var_9 : var_8)) <= 65533))) % ((~(min(177462181, -3434))))));
    #pragma endscop
}
