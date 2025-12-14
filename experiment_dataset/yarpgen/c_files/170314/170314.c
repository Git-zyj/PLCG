/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((((max(-62, var_14))) ? -9 : 234))) ? ((max(2124917083, (max(var_3, 11062))))) : (arr_7 [i_2] [i_2] [i_1] [i_0]));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (~-11050);
                    arr_10 [i_2] = ((((min((arr_6 [i_0] [i_2] [i_2] [i_2 - 1]), 43))) - (((!(arr_7 [i_2] [i_2] [i_2] [i_2 - 1]))))));
                }
            }
        }
    }
    var_16 = var_9;

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_14 [i_3] = (arr_12 [i_3] [i_3]);
        arr_15 [i_3] = (((((((min((arr_13 [i_3] [i_3]), 126))) ? 21618 : (174 << 13)))) ? (((max(var_12, var_5)) ^ 236)) : var_15));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_29 [i_4] [i_5] [i_4] [i_7] [i_8] = 65535;
                            arr_30 [i_8] [i_7] [i_6] [i_7] [i_4] = (arr_18 [i_4 + 2] [i_6] [i_5 - 1]);
                            arr_31 [i_4] [i_7] [i_6] [i_5] [i_4] = (var_4 - 11071);
                            arr_32 [i_8] [i_7] [i_4] [i_4] [i_5] [i_4] = (((arr_16 [i_4 + 1] [i_5 + 2]) ? (arr_7 [i_4] [i_5] [i_4] [i_6]) : 5551));
                            arr_33 [i_4] [i_5] [i_6] [i_6] [i_8] = var_3;
                        }
                    }
                }
            }
            arr_34 [12] [i_4] [12] = (11053 << 7);
            arr_35 [i_4] [i_4] [i_5] = (arr_1 [i_4 - 1]);
            arr_36 [i_4] [i_4] [i_5] = (25 < var_4);
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_40 [i_4] [i_4] [i_4] = ((127109349 + 9065611733688993059) >> (((((arr_11 [i_4]) << (((arr_37 [i_4] [i_9]) - 3257846093909127429)))) - 118)));
            arr_41 [i_4] [i_9] = ((var_3 != (arr_38 [i_4] [i_4 + 2] [i_4])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_46 [i_4] [i_9] [i_4] [i_11] = ((!(((arr_24 [i_4] [i_9]) > (arr_17 [i_4])))));
                        arr_47 [i_11] = (!268435455);
                        arr_48 [i_4] [i_9] [i_10] [i_11] = ((+(((arr_2 [i_10] [i_11]) | (arr_44 [i_11] [i_11] [i_10] [i_10] [i_9] [i_4])))));
                    }
                }
            }
            arr_49 [i_9] [8] [i_4] = (((arr_18 [i_9] [i_4] [i_4 + 1]) && var_13));
        }
        arr_50 [i_4] = (arr_26 [i_4 - 2]);
        arr_51 [i_4] [i_4] = 268435455;
    }
    var_17 = -1;
    #pragma endscop
}
