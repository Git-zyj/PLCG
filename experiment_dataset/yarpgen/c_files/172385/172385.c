/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 &= ((-(!var_11)));
        var_13 *= (!0);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] = ((~(~var_8)));
                    arr_10 [i_1] [i_2] [i_2] = ((((((-var_10 + 2147483647) << (((max(var_0, 255)) - 255))))) ? (max(var_11, ((9 ? 227 : 51882)))) : (min(9, var_3))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_22 [i_4] [i_7] [i_7] [i_7] [i_7] [i_7] = ((-65527 ? (((max(51882, 2832771825103490251)) - ((51897 ? var_6 : 51883)))) : (arr_20 [i_4] [i_4] [i_5] [i_6] [i_7] [i_3])));
                                arr_23 [i_3] [i_3] [i_4] = 51861;
                                arr_24 [i_3] [i_3] [i_4] [i_3] [i_3] = (min(-3111, (((arr_12 [i_3] [i_6 + 2]) ? var_3 : 114))));
                                var_14 ^= (max(1523612676, -2832771825103490236));
                            }
                        }
                    }
                }

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    arr_27 [i_3] [i_4] [i_4] [i_4] = 0;

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_31 [i_3] [i_4] [i_8] [i_4] = 30798;
                        arr_32 [i_4] = (max(2832771825103490251, var_11));
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_15 *= (((var_9 ? ((min(51881, var_8))) : 58286)));
                        arr_35 [i_3] [i_10] [i_8 - 2] [i_8] [i_4] [i_3] = ((-((8 ? var_9 : 160925729))));
                        var_16 = 13639;
                    }
                }
                arr_36 [i_4] = ((-(min((28892 + 28892), -var_10))));
                arr_37 [i_4] = -12067;
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_17 = (max(219, -2832771825103490234));
                                var_18 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((min(83, 1)));
    #pragma endscop
}
