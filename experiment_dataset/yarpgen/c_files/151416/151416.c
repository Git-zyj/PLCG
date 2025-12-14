/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_1 - 3] = 27;

                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    arr_12 [i_2] [i_1] [i_2 - 2] = 18446744073709551615;
                    arr_13 [i_2] [i_2] [6] = 1;
                    var_21 = 1;
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    arr_18 [i_1] = 1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_22 = 15;
                                var_23 = 107;
                                arr_24 [i_5] = 15987899227651892698;
                                arr_25 [i_5] [i_1] [i_1] [i_4] = 406249667;
                                var_24 = (min(var_24, 59954));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_25 += 1;
                                arr_32 [8] [i_1] [i_6] [i_7 - 1] [11] = 1;
                                var_26 = (max(var_26, 8257));
                                var_27 = (min(var_27, 524280));
                            }
                        }
                    }
                    var_28 = (min(var_28, 59954));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_29 -= -5647163803405086605;

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_30 *= 13;
                            arr_37 [i_0] [i_0] [i_6] = 127;
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            arr_40 [1] [i_1 - 3] [i_6] [i_9] [i_11] = 1;
                            var_31 = 4283543764;
                        }

                        for (int i_12 = 1; i_12 < 10;i_12 += 1)
                        {
                            var_32 = 59954;
                            var_33 *= 1;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_46 [i_0] [i_1 - 2] [i_1] [9] = 18380547407963607519;
                            var_34 = 1;
                        }
                        var_35 = 0;
                    }
                }
                arr_47 [i_1 - 1] = 247;
            }
        }
    }
    var_36 = var_7;
    #pragma endscop
}
