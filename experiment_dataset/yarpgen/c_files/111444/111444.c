/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = min(((-98 ? var_13 : (~4294967282))), var_9);
    var_16 = ((var_0 ? (((((-98 ? var_7 : var_4))) ? ((var_2 ? -6793382695894208807 : var_6)) : ((var_11 ? var_4 : -6793382695894208808)))) : ((((~234) ? 1 : -98)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (((max(var_8, 124)) < (arr_3 [i_1] [i_1] [i_1])));
                var_18 = arr_3 [i_1 - 1] [i_1] [1];
                var_19 = (64 <= 4294967286);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 -= (((arr_6 [i_3] [i_3]) / ((max((arr_6 [i_2] [15]), 254)))));
                            var_21 = (((var_13 && 1) < ((var_7 ? var_9 : (arr_8 [i_3 - 4] [i_3 - 1] [i_3 - 4])))));
                            var_22 = (((((9 ? ((177 + (arr_5 [i_4] [i_2]))) : (((max((arr_6 [i_2] [i_5]), var_6))))))) ? (min(((var_4 ? (arr_9 [4]) : 8812865773901764577)), var_6)) : (min(var_12, (min((arr_6 [i_2] [i_2]), (arr_5 [i_2] [i_2])))))));
                        }
                    }
                }
                var_23 = ((((min(var_0, var_8))) ? 14 : (min((arr_5 [i_2] [i_3]), (arr_5 [0] [i_2])))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((((arr_10 [i_6] [i_6] [i_6]) && 1)))));
                                var_25 = 0;
                                var_26 = (min((max((arr_16 [i_2] [i_6] [i_6] [i_3 - 4]), (min(22, 8)))), (((((max(14, 3290064773))) ? ((min(var_4, 64))) : -59)))));
                            }
                        }
                    }
                }
                var_27 = (!237);
            }
        }
    }
    #pragma endscop
}
