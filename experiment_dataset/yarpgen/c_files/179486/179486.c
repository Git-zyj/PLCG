/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_10);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = (7088186823038668204 % 4248790179);
        arr_2 [i_0] = ((var_1 + (((3171648625 || (arr_1 [i_0]))))));
        var_14 -= (arr_1 [9]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_2] [10] [i_1] = 1123318671;
            var_15 = (min(var_15, (arr_1 [i_1 + 1])));

            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_16 = (arr_8 [i_2] [i_2 + 1] [3]);
                var_17 ^= ((((var_2 + 9223372036854775807) >> (7088186823038668212 - 7088186823038668179))));
            }
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                arr_16 [i_4 + 1] [i_4] [i_4] [i_4 + 1] = (arr_0 [i_1 + 1] [i_4 + 1]);
                var_18 = -1123318671;
            }
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                var_19 -= (((((((arr_11 [i_2] [0] [i_1 + 1]) < -1)))) / -2443232706097601065));
                arr_19 [2] [i_2 + 1] [i_2] [i_2] = ((-(((arr_10 [i_5] [i_1]) ? var_1 : 2443232706097601046))));
                var_20 = var_11;
                var_21 = (min(var_21, var_8));
            }
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                var_22 ^= (((-7370823530378476758 * 0) << (var_7 - 879346255)));
                var_23 &= 0;
                arr_24 [i_6] [6] = 48;
                arr_25 [i_6] = (((arr_18 [i_1] [i_2] [i_1] [i_1]) <= (arr_15 [i_6 - 1] [i_1 + 1] [i_1 + 1])));
            }
        }
        arr_26 [i_1 + 1] = -48;
        var_24 = ((21 ? (((arr_15 [7] [7] [i_1]) ? 127 : 942803335)) : 15));
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        arr_31 [i_7 - 2] = var_2;
        arr_32 [i_7] = (!var_6);
    }
    #pragma endscop
}
