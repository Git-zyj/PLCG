/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-(((27472 && (-2147483647 - 1)))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_14 ^= ((6118 ? (arr_1 [i_0]) : (((((var_10 ? (arr_0 [15] [15]) : var_9))) * (arr_1 [i_0 - 4])))));
        arr_2 [i_0] [i_0] = (((-(arr_1 [15]))));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_15 = (((((var_9 != var_7) >= (((arr_4 [i_1] [12]) ? (arr_0 [6] [6]) : var_6)))) ? (arr_3 [1]) : (-1266179863 && var_12)));
        arr_5 [17] = (((((((arr_0 [3] [i_1]) ? -1 : (arr_0 [i_1] [i_1])))) ? (((arr_3 [i_1]) ? 1 : var_4)) : var_12)));
        arr_6 [17] [17] = (((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 3])))) ? (((arr_1 [i_1 + 2]) ? var_0 : (arr_1 [i_1 + 2]))) : ((-(arr_1 [i_1 - 2]))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [13] [13] [13] [13] = max(var_4, ((~(var_12 ^ 255))));
                        var_16 = (arr_10 [20] [1] [1] [i_4]);
                    }
                }
            }
        }
        var_17 = (((((-1266179895 <= ((var_12 ? (arr_0 [8] [i_1]) : var_5))))) & ((((arr_14 [i_1] [12] [i_1 - 2]) || (arr_14 [i_1] [i_1] [i_1 - 2]))))));
    }
    for (int i_5 = 4; i_5 < 7;i_5 += 1)
    {
        arr_18 [i_5] = ((+(((arr_0 [i_5] [i_5 + 4]) ? (arr_0 [i_5 - 4] [14]) : 1207407447313448312))));
        var_18 |= (arr_0 [i_5] [i_5]);
        var_19 = (min(var_19, ((((arr_4 [i_5] [i_5]) ? ((1 ? -126 : var_10)) : var_0)))));
        arr_19 [i_5] [i_5] = (((-1045271686582035488 + -1266179865) ? (max(2147483636, var_6)) : (arr_16 [i_5] [8])));
    }
    var_20 -= (!((!(-2147483647 - 1))));
    var_21 = (max((var_2 - var_9), var_0));
    #pragma endscop
}
