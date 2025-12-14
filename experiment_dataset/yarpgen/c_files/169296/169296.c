/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [16] [16] = -132;
                var_11 = ((((((var_5 >> (20827 - 20821))) != 1)) ? 134217727 : (arr_1 [3])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 = 4160749564;
                                var_13 = var_4;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_14 = (~7);
                                var_15 = (!-2097151);
                                var_16 = var_5;
                            }
                        }
                    }
                }

                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    var_17 = (min((((~2097165) * ((4292870147 ? 2097151 : 4292870167)))), 15));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_33 [4] [i_9] [17] [7] [7] [i_9] [7] = 65525;
                                var_18 &= var_0;
                                arr_34 [4] [i_9] [i_8] [i_9] [i_10] = (arr_3 [i_0] [i_1 - 1] [i_1 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_11 = 3; i_11 < 13;i_11 += 1)
    {
        var_19 = (((-1 && var_0) ? (((arr_7 [i_11 + 1] [11] [i_11]) ^ 0)) : (!4278190080)));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 13;i_14 += 1)
                {
                    {
                        var_20 = arr_18 [i_14] [i_11] [i_11] [i_14];
                        arr_44 [i_11 - 2] [i_11] [8] [i_11 - 2] = var_1;
                        var_21 = 3495352190;
                        arr_45 [i_11 - 1] [i_11 + 2] [i_11] [i_11] [i_11] = ((((((max(-6870, 2097151))) > (min(1485246492, var_10)))) ? (arr_39 [i_14 - 1]) : (((((var_4 % var_10) >= (arr_35 [i_11])))))));
                    }
                }
            }
        }
        var_22 = ((((((!(((20773 << (((arr_0 [i_11] [i_11]) - 15461971257632889625))))))))) ^ var_5));
    }
    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_23 = ((13681 ? ((min((max(2097127, -5901035962411337795)), -2147483624))) : (max(3653957779197660101, var_10))));
        arr_50 [i_15] = 3707397176;
        var_24 = ((0 ? 27887 : 2097132));
    }
    var_25 |= var_7;
    #pragma endscop
}
