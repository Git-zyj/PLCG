/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_0 >> (var_7 - 189703683)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (arr_1 [i_1]);

                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    var_12 = var_8;
                    var_13 = arr_1 [i_2];
                    var_14 = 0;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_15 = (((arr_4 [i_2 - 1] [i_3 + 1] [i_3] [i_2 - 1]) == var_3));
                        var_16 = (-5112650898919580431 == 1);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_17 = ((((max((arr_8 [i_2 - 3] [i_0 - 1]), (arr_8 [i_2 + 1] [i_0 - 3])))) || (((arr_8 [i_2 + 1] [i_0 - 3]) >= (arr_8 [i_2 - 3] [i_0 - 2])))));
                                var_18 = ((var_9 || (!-204854124)));
                                var_19 = (((var_2 == (221 || var_8))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    var_20 = (((-(max(var_9, var_8)))));
                    var_21 = (((arr_5 [i_0 - 3] [i_0 - 3] [i_0]) ^ var_8));
                }
                var_22 = 91;

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (arr_1 [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_24 = var_4;
                                var_25 = var_6;
                                var_26 = ((-((1 << (((arr_1 [i_9]) - 63))))));
                                var_27 = -6059783902316915401;
                            }
                        }
                    }
                    var_28 = var_2;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        for (int i_11 = 4; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 8;i_12 += 1)
            {
                {
                    var_29 = (-(var_0 % var_0));
                    var_30 = (arr_19 [i_10] [i_12] [i_10] [i_10]);
                    var_31 = var_1;
                }
            }
        }
    }
    var_32 = var_2;
    #pragma endscop
}
