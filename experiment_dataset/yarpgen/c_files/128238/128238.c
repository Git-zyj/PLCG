/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= 92;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_14 = (max(178, -413346076));
        var_15 *= ((((min((arr_2 [7]), (arr_2 [i_0])))) >> var_0));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_3 [i_1] [i_1]) % -56));
        arr_8 [i_1] = 173;
        var_17 = (var_12 <= var_6);
    }

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_18 = 544812258;
            var_19 = -40503033;
            var_20 *= ((!(arr_11 [i_2] [i_2])));
        }
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                arr_21 [i_2] [i_2] [i_2 + 3] = var_0;
                var_21 = (arr_17 [i_4 + 2] [i_2 + 3]);
                var_22 = (min(((max(0, (arr_10 [i_5])))), (min((arr_19 [i_2] [i_4 + 1]), (((arr_13 [17] [17]) ? (arr_16 [i_2] [i_4]) : var_6))))));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                arr_26 [1] [i_4] = (((-1228070083 + 2147483647) >> (arr_25 [i_2])));
                var_23 = var_7;
                var_24 = (164 ? ((-777572117 ? (arr_13 [i_4] [17]) : (arr_24 [i_2] [i_4 + 2] [i_2] [i_6]))) : (-413346070 - var_12));
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_25 = (max(var_25, (((((min(-27, ((1 ? var_11 : 177))))) ? var_3 : ((var_7 ? 12 : ((min(107, (arr_24 [i_2] [i_2] [i_2] [i_2])))))))))));
                arr_29 [i_2] [17] = (-92 < 144);
            }
            var_26 = (max(((((92 ? 140 : var_7)) ^ (max(69, (arr_15 [i_2] [i_2] [i_2]))))), ((max(69, 0)))));
        }
        var_27 = (max(var_27, (arr_25 [i_2 + 1])));
        var_28 *= (min((((((1 * (arr_9 [i_2])))) ? ((max((arr_11 [10] [i_2]), 140))) : (-1248636685 <= 0))), (((arr_25 [i_2 - 1]) & (arr_25 [i_2 + 3])))));
        var_29 = max((min((arr_22 [14] [i_2 + 3] [i_2]), var_0)), (((max((arr_13 [i_2] [i_2]), var_8)) % ((((arr_10 [i_2]) < var_2))))));
    }
    #pragma endscop
}
