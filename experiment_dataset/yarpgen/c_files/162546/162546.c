/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (((16993 != 16976) == (min((min(-3, 1019506110755656069)), -1440))));
                var_11 = min((!-1801262941), ((((min(0, 231))) >> var_4)));
                arr_6 [7] [i_1] [i_0 - 2] = (min((max((min(-10920, 6983070019932159584)), var_2)), (8188 / 6983070019932159576)));
            }
        }
    }
    var_12 -= ((max((var_9 + 126), ((min(var_7, -105))))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_13 = ((((((min(960, 0))) << (((-19824 % var_2) + 915)))) <= (max((~-26026), (~var_4)))));
                var_14 = -9158922988979841058;
                var_15 = 69;

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_14 [i_2 - 1] [10] [i_2 + 2] [2] = (((23 ? 55800 : 28873)));
                    arr_15 [i_4] [i_3] = (-32767 - 1);
                    var_16 = 6983070019932159576;
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_19 [10] [6] = -10920;
                    var_17 = ((~((0 ? 16 : ((max(var_5, var_8)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_25 [4] [13] [i_6] [i_6 - 1] [i_7 - 3] = ((11987259768287086699 ? -1 : (138 - -5544518125635425472)));
                                var_18 |= (max(1440, (max(155, 16978))));
                            }
                        }
                    }
                    arr_26 [1] [11] [1] [i_5 + 1] = (max(6925, (min(((min(4095, 206))), (6942 + -90)))));

                    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_19 = -12;
                        var_20 = -var_0;
                        var_21 = (((-25 ^ 31229) * ((0 << (-17751 + 17774)))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        var_22 = -0;
                        arr_33 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = (!(((-((-5381 ? -6947 : 32083))))));
                    }
                }
            }
        }
    }
    var_23 = -94;
    var_24 = (!var_7);
    #pragma endscop
}
