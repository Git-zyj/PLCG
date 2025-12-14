/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_17 -= (((((var_10 ? (arr_0 [i_3]) : 187)) ^ var_15)));
                        var_18 = (max(var_18, ((((((var_9 < (arr_3 [i_2 - 1] [i_2 + 2] [i_2 - 1])))) <= ((((arr_3 [i_2 - 2] [i_2] [i_2 - 2]) == (arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2])))))))));
                    }

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_19 = (~255);
                        arr_11 [i_4] [i_1] [i_1] [i_1] = (arr_9 [i_2] [i_2 - 2] [i_2 - 2] [i_4 - 1]);
                    }
                    arr_12 [i_2] = var_16;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 = (((((((~(arr_15 [i_5] [13])))) ? (arr_15 [i_5] [i_5]) : (arr_13 [i_5] [i_5]))) ^ var_12));
        var_21 = (min(var_21, (((~(((arr_13 [i_5] [i_5]) ? (arr_15 [i_5] [i_5]) : var_10)))))));
        var_22 -= ((-1495118997 && ((max((-127 - 1), ((242 ? 8 : 0)))))));
        arr_16 [i_5] [i_5] = 1;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_23 ^= (((arr_13 [i_6] [i_6]) ? (((((arr_14 [i_6]) ? (arr_13 [i_6] [i_6]) : (arr_13 [i_6] [i_6]))))) : (arr_18 [i_6])));
        arr_19 [i_6] = (-(((arr_17 [i_6]) ? (arr_18 [i_6]) : (arr_13 [i_6] [i_6]))));
        var_24 ^= (((((var_9 ? (arr_13 [i_6] [i_6]) : (arr_13 [i_6] [i_6])))) ? (((arr_14 [i_6]) ? (arr_14 [i_6]) : (arr_14 [i_6]))) : 246));
    }
    var_25 = ((var_6 ? var_4 : var_2));
    #pragma endscop
}
