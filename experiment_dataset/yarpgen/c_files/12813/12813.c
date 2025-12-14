/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (min(var_15, (((189 && -16275) && var_5))));
    var_16 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) | (arr_0 [i_0])));
        arr_3 [i_0] = (((arr_1 [i_0]) ? ((var_6 ? -715863714 : 31)) : (arr_1 [i_0])));
        var_17 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 *= (min(14918462116160138078, 0));

        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            var_19 *= (min((-1585253632528023438 | 715863708), 15735774212418772901));

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                arr_10 [i_3] [i_2] [i_3 + 2] = -var_5;
                arr_11 [i_1] [5] [i_3] = (var_13 ? (var_11 | -27) : ((min((4793648471370233856 == 16998808181299783555), -7587205678741270133))));
                arr_12 [i_1] [i_3] [i_2 - 3] [i_3] = (((min((arr_5 [i_2]), ((((arr_6 [i_3] [i_2] [i_1]) || var_13)))))) ? (arr_5 [i_1]) : (arr_6 [i_1] [i_2] [i_3]));
                var_20 = (-1 != -2966972213647637610);
                var_21 |= (min((arr_9 [i_2 - 2] [i_1]), (((((max(var_3, (arr_6 [7] [i_2] [i_2])))) == (var_2 <= var_2))))));
            }
            var_22 *= (min(((~(!var_3))), (((!((min(var_7, var_0))))))));
            var_23 -= -524287;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_4] = ((((((arr_4 [i_1]) ? 1 : (arr_6 [i_1] [i_4] [i_4])))) <= (max((((73 ? var_6 : var_12))), var_4))));

            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                var_24 *= var_8;
                var_25 = var_10;
            }
        }
    }
    #pragma endscop
}
