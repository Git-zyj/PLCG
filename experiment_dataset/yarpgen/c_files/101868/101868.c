/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = 255;

        for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (169400005 ? 255 : 1);
            arr_7 [i_0] = ((-4294967285 < ((max(var_2, (-110 ^ 0))))));
            arr_8 [i_0] = -127;
            var_12 = (min(var_12, var_0));
        }
        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] = (((((min(18446744073709551607, 11483411065419173855)))) / (((((arr_0 [i_0] [i_0]) <= 4294967295)) ? ((((arr_4 [i_0]) != 60129542144))) : var_6))));
            arr_14 [i_0] [i_0] = (-(((18446744073709551607 & 14) ? 2 : -4)));
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_13 = (max(var_13, var_1));
                                var_14 ^= (((2 | 4294967295) ? (arr_23 [i_3] [i_3]) : 0));
                                arr_27 [i_3] [i_3] [i_6] [i_3] [i_6] [i_3] [i_3] = ((+(min((arr_17 [i_6]), 239))));
                            }
                        }
                    }
                }
                var_15 = (~239);
            }
        }
    }
    #pragma endscop
}
