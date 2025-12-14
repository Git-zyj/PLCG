/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((var_4 - var_7), ((min((max(var_0, 809)), (max(var_0, var_6)))))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_15 = (((arr_0 [i_0 - 3]) ? ((~(arr_1 [i_0 - 1]))) : 0));
        var_16 = var_4;

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_17 |= ((0 ? -32756 : -10));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                var_18 = ((((((arr_2 [i_2] [i_0 - 1] [i_0]) ? var_0 : var_8))) || (32767 == -15729)));
                var_19 = var_1;
                var_20 = 16870;
            }
        }
        var_21 = (((((((arr_0 [i_0]) || -13179)))) << (((arr_1 [i_0 + 2]) - 20807))));
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_22 = ((((min((29797 - 28145), (arr_13 [i_3 + 2] [i_4 - 1] [i_5])))) || 13180));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_23 = (-9274 && 16383);
                        arr_17 [i_5] [i_5] [0] [i_5] = min((min((arr_13 [i_3] [i_3 - 3] [i_5]), 63)), var_2);
                        var_24 *= var_10;
                    }
                }
            }
        }
        var_25 = ((-15741 ? 2285 : -1));
        var_26 += (var_3 - var_12);
        var_27 = 2493;
        arr_18 [i_3] &= ((-(((arr_13 [i_3 - 2] [i_3] [i_3 - 3]) ? (arr_13 [i_3 - 3] [i_3] [i_3 - 2]) : (arr_13 [i_3 + 2] [i_3] [i_3 - 3])))));
    }
    for (int i_7 = 3; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_28 = -16383;
        var_29 = (max(var_29, (arr_14 [i_7 - 3] [i_7 - 3] [15] [i_7 + 2] [i_7] [i_7])));
        var_30 *= arr_4 [i_7 - 3] [i_7 + 1];
    }
    var_31 = var_1;
    var_32 -= ((var_1 ? ((max(var_10, var_1))) : var_2));
    #pragma endscop
}
