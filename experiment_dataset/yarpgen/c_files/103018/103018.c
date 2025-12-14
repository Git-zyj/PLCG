/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = 193;
            arr_4 [8] = (((4073886847 ? 57923966 : var_8)));
            arr_5 [i_0] [i_1] = ((var_0 ? (arr_3 [i_0]) : (arr_3 [i_0])));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_18 = (min(var_18, ((min(((16110 ? (arr_8 [i_0] [i_0] [8]) : var_0)), 16110)))));
            var_19 = 16130;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] = min((arr_13 [5] [5] [i_2 + 2] [i_2]), (min((arr_2 [16] [i_2]), var_8)));
                        var_20 = (max(var_20, ((((arr_12 [i_0] [i_2] [i_4] [i_0]) ? (((~4720076212493462206) ? ((min(var_6, 16130))) : -var_6)) : ((var_8 - (arr_11 [5] [i_2] [i_2] [i_3]))))))));
                    }
                }
            }
        }
        var_21 *= (!var_10);

        for (int i_5 = 4; i_5 < 18;i_5 += 1)
        {
            arr_18 [14] [i_5 + 2] [i_5] |= var_13;
            arr_19 [17] [7] [i_5] = (var_12 != (~1));
            var_22 ^= (arr_12 [2] [i_0] [i_0] [i_0]);
            arr_20 [i_5] = var_1;
            var_23 |= var_14;
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_24 = (max(var_24, ((min((((-((max((arr_24 [14]), 48)))))), -33)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_25 = (arr_10 [i_0] [i_8]);
                        arr_30 [i_7] [17] [i_7] [i_8] = (min((arr_16 [i_0] [i_6] [i_6]), ((((arr_16 [4] [i_7] [20]) ? (arr_16 [i_6] [i_6] [i_7]) : (arr_16 [i_8] [i_6] [i_0]))))));
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 20;i_9 += 1)
        {
            var_26 = ((((((var_16 ? (arr_21 [i_9] [i_0]) : var_11)) >> (var_0 - 163))) << ((((max((arr_21 [i_0] [14]), var_6))) - 33461))));
            var_27 *= ((((arr_10 [i_9] [i_9 - 2]) ? (((898296047 ? 16130 : var_0))) : (arr_25 [3]))));
        }
        var_28 = (max(var_28, (!16115)));
    }
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        var_29 += ((arr_17 [i_10] [i_10]) / (((arr_21 [i_10 + 1] [i_10 - 3]) + (arr_21 [i_10] [i_10 - 3]))));
        arr_37 [i_10] [i_10] = 16115;
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        arr_40 [1] = min(((16380 ? (arr_7 [i_11]) : -1)), (((var_1 && (arr_6 [6])))));
        arr_41 [13] = (arr_28 [i_11] [i_11]);
    }
    var_30 |= 1;
    var_31 = (min((((((-16120 ? 62 : 65509))) ? 255 : (min(var_4, -1796178244)))), (((var_2 + 2147483647) >> ((((var_15 ? var_16 : -16117)) - 25066))))));
    var_32 = var_10;
    #pragma endscop
}
