/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_16 = (!-28473);
        arr_4 [i_0] = (-(((~-1583593333) << (((((~40) + 69)) - 28)))));
        var_17 = (~30);
        var_18 *= -var_14;
        var_19 += ((-((~(!1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_20 = (!var_12);

                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            var_21 = (min(var_21, var_7));
                            var_22 += (~var_13);
                        }
                        arr_17 [i_2] [i_2] [i_2] [i_4] = -255;
                    }
                }
            }
        }
        var_23 = (min(var_23, (((+(((-1583593315 + 2147483647) << (164 - 164))))))));
        var_24 = (~201);
    }
    var_25 = -var_15;
    var_26 ^= ((-(((!(var_2 || 1))))));

    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_21 [i_6] = (~65525);
        arr_22 [i_6] = ((~(((-1768037528 + 2147483647) << (201 - 201)))));
    }
    #pragma endscop
}
