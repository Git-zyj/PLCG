/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [9] [i_3] [i_0] = -855601572;
                                var_16 = 1869864257;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 += 2965573790;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1 - 2] [i_6] = (((arr_19 [i_0 - 1] [i_1] [i_2] [i_2] [i_6]) % (max((min(var_4, 1491435522)), -855601569))));
                            var_18 = (max(var_18, ((max((arr_13 [i_0] [i_5]), -5472693186123038064)))));
                            arr_23 [1] [1] [8] [i_5] [8] [i_0] = ((~(max((arr_11 [i_0] [i_1 + 1] [i_2] [i_5] [i_6]), 2965573765))));
                        }
                        var_19 = 0;
                        var_20 += 1;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_21 = (min(var_21, (((!(((((((arr_19 [i_7] [3] [i_0] [i_0] [i_0]) ? 1491435538 : 127))) ? (~15039400036904045374) : ((max((arr_16 [i_7] [i_7]), -11)))))))))));
                        arr_28 [i_0] [i_0] [i_2] = ((~((max(-75, var_9)))));
                        arr_29 [i_7] [i_0] [i_1] = (max((arr_9 [i_0 + 1]), var_0));
                        arr_30 [i_7] [i_7] [i_0] |= ((((9562 ? 1491435546 : (arr_16 [i_1 - 1] [i_1]))) > (var_10 % 2147483647)));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_22 = (~293);
                                var_23 = (max(var_23, (((-((min(193, var_2))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 |= -1;
    var_25 |= (55722 / 8815044152032817633);
    #pragma endscop
}
