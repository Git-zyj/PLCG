/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -var_8));
    var_18 = (min((!11364172832059255928), ((min(var_16, var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = (max(var_19, ((max(4851956160557179620, (((!(arr_7 [i_0] [i_0] [i_0 - 1])))))))));
                        var_20 = ((~(arr_1 [i_2])));
                        var_21 = (max(((16993577766611266015 * (-2147483647 - 1))), (arr_3 [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_22 = (min((496 <= 17204648213776135189), 17204648213776135208));
                        var_23 = (max((max((arr_7 [i_0] [i_1 - 1] [i_0]), -8199195676893618017)), (((!(!65051))))));
                        var_24 = (max(var_24, (arr_0 [i_0])));
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 = (!(arr_6 [i_5] [i_1]));
                        var_26 = (arr_5 [i_5] [i_1] [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_27 += (max((((!(13 && var_9)))), (min(var_5, ((17204648213776135194 / (arr_9 [i_6] [i_1])))))));
                        var_28 ^= var_6;
                    }
                }
            }
        }
    }
    #pragma endscop
}
