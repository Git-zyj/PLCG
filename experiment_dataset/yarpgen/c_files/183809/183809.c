/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = var_8;
    var_12 = ((-var_1 ? var_9 : var_2));
    var_13 ^= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [15] = var_1;
            var_14 ^= ((-(arr_1 [i_0])));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 = -127;

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [i_0] [i_2 - 1] [2] [i_2] [i_5] = var_2;
                            var_16 |= (arr_1 [i_0]);
                            var_17 = ((var_2 <= (arr_10 [i_2] [14] [i_4 + 2])));
                            var_18 = -127;
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_19 ^= (127 ? (arr_19 [i_2] [i_2 - 1] [i_6] [i_3 + 2]) : (arr_2 [i_4 - 1]));
                            arr_21 [i_0] [i_6] |= var_3;
                        }
                        arr_22 [i_0] [i_2 - 1] [i_2] [i_2 + 1] [4] [i_2 - 1] |= (((arr_19 [i_3 + 1] [i_4 - 1] [i_0] [i_4 - 1]) ? (arr_19 [i_3 + 2] [i_2 - 1] [i_0] [i_4 - 1]) : (arr_5 [i_3 + 1] [i_2 + 1])));
                        var_20 = -2989242950392273528;
                    }
                }
            }
            arr_23 [i_2] [19] = ((arr_12 [4] [i_2] [i_2]) ? (arr_11 [i_0] [i_2] [i_0] [i_2 + 1]) : (arr_11 [i_2] [i_2] [i_2 - 1] [i_2]));
        }
        var_21 = -113;
        arr_24 [i_0] = (-(arr_6 [10] [4]));
        var_22 = ((127 + 4611686018427387904) + (arr_1 [i_0]));
        arr_25 [i_0] [i_0] = (((arr_13 [i_0] [i_0] [i_0]) ? var_4 : (arr_13 [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_23 |= (min(85, (((((0 ? var_8 : (arr_11 [i_7] [i_7] [i_7] [i_7])))) ? ((max(-23, var_2))) : ((max(var_6, 127)))))));
            arr_31 [i_7] [i_7] [i_8] = max(var_1, -24);
        }
        for (int i_9 = 2; i_9 < 8;i_9 += 1)
        {
            arr_35 [i_9 + 1] = ((((((arr_15 [i_9 - 2]) >> (((arr_26 [i_7]) + 67))))) ? ((-(((arr_10 [i_7] [i_9 + 4] [i_9 - 1]) ? var_7 : var_2)))) : (((arr_30 [i_7] [i_7]) >> (((arr_30 [i_7] [i_9 + 1]) - 7437022435552495979))))));
            var_24 = ((-(arr_4 [i_7] [i_9 + 4] [i_7])));
            arr_36 [i_9] = ((arr_29 [i_9 - 1]) ? (((max((arr_3 [i_9 + 4] [i_9 - 2]), -97)))) : (((arr_13 [17] [i_7] [i_9]) ? (arr_13 [i_7] [i_7] [i_9 + 3]) : (arr_13 [i_7] [i_7] [19]))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 11;i_11 += 1)
            {
                {
                    var_25 = (--9223372036854775776);
                    arr_43 [i_7] [i_10] [i_7] = max(((((max(18, (arr_34 [i_7] [i_10] [i_11 - 2])))) ? (min(var_8, 7792833337139952039)) : var_3)), (arr_30 [0] [i_11 - 2]));
                    arr_44 [i_7] [i_10] [i_11 + 1] [i_11 - 1] = ((((min((arr_1 [i_11 + 1]), 60)) >= (((max((arr_26 [i_11 - 1]), -85)))))));
                }
            }
        }
        arr_45 [i_7] |= ((arr_0 [0] [i_7]) ? (((arr_0 [i_7] [i_7]) ? 127 : 623320289637650363)) : ((((arr_0 [i_7] [i_7]) & (arr_0 [i_7] [i_7])))));
        arr_46 [i_7] = 16798102612803650119;
        var_26 = ((-(((arr_15 [i_7]) * (arr_15 [i_7])))));
    }
    #pragma endscop
}
