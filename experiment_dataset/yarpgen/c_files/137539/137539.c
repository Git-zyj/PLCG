/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_15);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 18446744073709551609;
        arr_3 [i_0] = (((((arr_0 [2] [i_0]) | (arr_1 [i_0]))) == var_17));
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        arr_5 [i_0 + 1] = (arr_0 [i_0] [i_0]);
        arr_6 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_10 [i_1] = ((((((arr_9 [i_1 + 1]) ? (arr_9 [i_1 - 2]) : var_12))) ? ((min((arr_9 [i_1 + 1]), (arr_9 [i_1 - 4])))) : (!3558676123)));
        arr_11 [i_1 - 2] [i_1] |= 3828148462;
        arr_12 [i_1] = ((var_13 ? 65535 : (((-9223372036854775807 - 1) ? (arr_7 [i_1 - 4]) : (arr_7 [i_1 + 1])))));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_17 [i_2] = (!2434860797004005332);
        arr_18 [i_2] = (65523 > 506265382);

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_22 [i_2] = var_6;
            arr_23 [i_3] [i_2] [i_3] = ((((min((((arr_1 [i_2]) / 7036281392915223574)), (arr_0 [i_2 - 1] [i_2 + 1])))) ? -var_6 : var_4));
        }
        arr_24 [i_2] [i_2] = (((((((max(var_5, (arr_1 [i_2])))) ? 2434860797004005332 : 2434860797004005332))) ? var_13 : (~-1594265773)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_29 [i_2] [i_4] [i_4] = (min((((arr_21 [i_2 + 1] [i_2]) - (arr_14 [i_2]))), (max((arr_20 [i_2]), (arr_19 [i_2 - 1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 7;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_37 [i_2 + 1] [i_4] [i_5] [6] [i_5] = (((min(0, (arr_8 [i_2 + 1]))) <= ((var_15 ? ((466818834 ? 3570637391 : var_4)) : 16777152))));
                                arr_38 [i_2] [i_4] [i_5] [i_6] [i_7] = var_7;
                                arr_39 [i_2] [i_2] [i_2] [i_6] [i_7] [i_2] = ((!(((min((arr_32 [i_4] [i_4]), (arr_35 [0] [i_4] [i_5] [i_4] [i_7]))) >= 10451127386293156478))));
                                arr_40 [6] [6] [i_5] [8] [6] [i_2] = (arr_26 [i_2] [i_4] [2]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
    {
        arr_45 [i_8] = var_1;
        arr_46 [i_8] = (((((1184908940 ? ((~(arr_34 [i_8] [i_8]))) : 18))) >= (min(((var_17 ? var_14 : 64512)), ((((arr_35 [i_8] [i_8] [9] [i_8] [i_8]) ? (arr_41 [i_8] [i_8]) : 1182282007620678140)))))));
    }
    #pragma endscop
}
