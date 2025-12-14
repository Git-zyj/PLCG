/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((4287219244 ? 63488 : 19765));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 ^= (max(((((min(4294903807, 89))) ? 1 : (arr_1 [i_0]))), (((1150220285 - 229) ? 10 : ((-(arr_0 [i_0] [i_0])))))));
    }

    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_18 += 1;
        arr_4 [i_1] = var_1;
        var_19 = (((((!(arr_1 [i_1 + 3])))) << ((((((min(var_11, 32))) ? var_10 : (((!(arr_3 [i_1] [i_1])))))) - 991528587))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_20 = (min(var_20, ((((1414060340 ? var_3 : 54184))))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_21 *= ((!(arr_6 [i_2 + 4])));
                        var_22 -= (((arr_6 [i_2 + 4]) ? (arr_16 [i_5] [i_2 - 3] [i_2 - 3] [i_4 + 1] [i_3]) : (~var_8)));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {
            arr_21 [i_2] = 14;
            arr_22 [0] [i_6] [0] &= 137;
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_30 [i_2] [i_6] [i_7] [i_8] [i_9] [i_2] [i_2] = ((-(((arr_11 [i_9] [i_8] [3] [3]) ? (arr_17 [i_6] [i_2] [i_9]) : var_6))));
                            arr_31 [i_2] [3] [i_7] [i_2] [i_2] = 1;
                            arr_32 [i_2] [i_8] [i_7] [i_8] [i_2] [i_2] [i_9 + 1] = (var_13 > 2531922707211093417);
                        }
                    }
                }
            }
            var_23 = (((arr_0 [7] [i_2]) ? (arr_12 [7] [i_2 + 1] [i_2]) : (arr_0 [i_2] [i_2])));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_24 = ((!(arr_37 [i_2])));
                            var_25 = (max(var_25, 118));
                            var_26 = (((102 ? 103 : -2036341604)));
                        }
                    }
                }
            }
        }
        var_27 ^= -8212764934228331041;
    }
    var_28 = ((var_2 ? ((((var_4 <= 7) ? 1 : (min(var_0, -1150220310))))) : ((((137 ? 24 : var_1)) | var_11))));
    var_29 &= (max(774089379, 125));
    #pragma endscop
}
