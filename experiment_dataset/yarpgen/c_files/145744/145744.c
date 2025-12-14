/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 11));
    var_21 &= ((30 ? 255 : (((11 ^ 220) ? -245 : ((36 ? 240 : 0))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (~255);
                    var_22 = 18446744073709551612;
                    var_23 ^= (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? 231 : ((-55176 ? 18446744073709551615 : 2542))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_11 [8] [i_3] &= (arr_6 [i_3] [i_3] [i_3] [i_3]);
        arr_12 [i_3] = (max(268173312, ((((1 ? 3610334094 : 2016375901238778482)) + (((max(1, 2542))))))));
    }
    #pragma endscop
}
