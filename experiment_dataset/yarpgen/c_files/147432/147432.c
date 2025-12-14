/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, (((!((max((arr_0 [i_0]), 3))))))));
        var_18 = 8883037875174069620;
    }
    var_19 = var_16;
    var_20 = (min(var_20, (((~(min(((min(var_16, var_9))), var_1)))))));

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = ((arr_2 [i_1] [i_1]) ? (((917130181852486385 ? var_16 : (-32767 - 1)))) : (((!((!(arr_7 [i_1])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_18 [0] [i_2] [i_3] [2] = arr_9 [i_2] [i_1] [i_3];

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_21 = (((((!(arr_3 [i_1] [i_1])))) - (arr_1 [i_1] [i_4])));
                            var_22 *= 41;
                            var_23 = (arr_20 [i_5] [i_2] [i_5 - 2] [i_5 - 1] [i_5 + 1]);
                            var_24 += 223;
                        }
                        var_25 = (min((arr_4 [i_3]), (max((arr_6 [i_3] [i_2]), (!32240)))));
                    }
                }
            }
        }
        var_26 = 917130181852486385;
        var_27 &= var_7;
        var_28 &= 32240;
    }
    #pragma endscop
}
