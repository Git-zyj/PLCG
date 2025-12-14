/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (1644 + -1);
    var_21 = var_0;
    var_22 = (((var_14 ? 9927925015566111937 : ((max(var_16, 23))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_23 ^= ((-((min(1, (arr_4 [i_0] [i_1]))))));
                    var_24 = (min((min((min((-2147483647 - 1), (arr_5 [i_0] [i_0] [6]))), 1)), 935331890));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_25 *= 1;
        arr_10 [i_3] = (-2147483647 - 1);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_15 [i_4] = 255;
        arr_16 [i_4] = ((0 ? 226 : 19091));
        arr_17 [i_4] = 19091;
        arr_18 [i_4] [i_4] = (arr_8 [i_4] [12]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_26 = 19091;
                    var_27 = (min(var_27, 1));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [i_4] [i_4] [i_5] [i_5] [i_6] [i_7] = ((-935331891 / var_14) ? 255 : (1 == 19084));
                        var_28 = (min(var_28, 2105024245));
                    }
                    var_29 = (min(var_29, (var_15 < var_5)));
                }
            }
        }
    }
    #pragma endscop
}
