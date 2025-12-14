/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (max((max((~16), (((-17 >= (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))))), 8191));
                        arr_12 [i_2] [i_2] [i_2] [i_2] &= ((var_8 ? -15 : 16));
                        var_14 ^= 15571232464869628755;
                        arr_13 [i_0] [20] [20] [i_0] [i_0] [i_0] = ((-17 % (~16)));
                        var_15 += 33;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5 + 3] [i_0] = ((min(((min((arr_11 [i_0] [i_4] [i_5] [i_0] [i_5 - 1] [i_5 + 3]), (arr_16 [i_5 + 1] [i_0] [i_0] [i_0])))), 30)));
                    var_16 = 255;
                    arr_20 [i_0] = (((arr_5 [i_0] [i_4 + 2] [i_5]) ? (arr_0 [i_0]) : 30));
                    arr_21 [i_0] [i_0] [i_5 - 1] = (arr_9 [i_0] [i_0] [i_0] [i_4 - 2]);
                }
            }
        }
        var_17 = ((13452 ? -17 : -8388567180741274227));
        var_18 = (((((!(-9 == 31)))) | 8));
    }

    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_19 = ((!(((arr_17 [i_6] [i_6]) != (arr_23 [i_6])))));
        arr_25 [i_6] = (((((64 ? -17 : 17915084614952828701))) ? ((((arr_8 [i_6] [i_6] [i_6]) | 255))) : ((-var_2 / (arr_6 [i_6])))));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_37 [i_7 + 2] [i_8] = (((min((min(var_10, (arr_29 [10] [i_8]))), -16)) & (arr_32 [i_7] [i_8] [i_9] [i_10])));
                        arr_38 [13] [i_8] [i_7 + 2] = ((((((arr_26 [i_7 + 2]) << (((arr_26 [i_7 - 2]) - 12731))))) ? ((min(-37, -9052))) : ((max((arr_3 [i_8]), (arr_3 [i_8]))))));
                        arr_39 [i_8] = (((arr_14 [i_7] [16]) ^ (((10405414980850521999 & var_9) ? (~var_11) : (((~(arr_35 [i_7 + 3] [i_8] [i_9] [17] [i_7 + 3]))))))));
                        var_20 = (min(((((arr_31 [15] [i_8] [15] [i_10]) <= 66))), ((((((arr_17 [i_9] [i_9 + 2]) ? (arr_11 [i_10] [i_10] [i_9] [i_8] [i_7] [i_7]) : 256))) * -1))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 22;i_12 += 1)
            {
                {
                    var_21 -= (!3211889690);
                    var_22 = (arr_34 [i_7] [i_11] [i_7] [i_7]);
                    var_23 = (((-33 ? (arr_26 [i_12]) : (((arr_8 [23] [i_11] [i_7]) ? 62713 : (arr_18 [17] [i_11]))))));
                }
            }
        }
    }
    #pragma endscop
}
