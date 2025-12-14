/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (((~(19 < 7))));
        arr_2 [i_0] = ((var_4 ? ((~(var_7 + 7))) : -64));
        var_18 &= 56;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [1] = (((((min(64, -100)))) || (((!9223372036854775807) && var_6))));
        var_19 = (min(var_19, ((((((arr_0 [i_1]) + 9223372036854775807)) << (((!(arr_4 [i_1])))))))));
        arr_6 [i_1] [i_1] = -1172581435;
        var_20 = ((-69 > ((((arr_1 [i_1] [i_1]) || (arr_1 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_21 = (arr_11 [i_1] [10] [4]);
                        arr_15 [7] [0] [6] [7] [7] [0] = ((min(89, var_11)));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 = (min(var_22, 252));
                            var_23 -= ((((!((((arr_13 [9] [6] [i_3 + 2] [9] [i_5]) ? var_10 : var_0))))) ? ((((arr_8 [i_1] [7] [0]) && 209))) : var_11));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_24 = (min(var_24, ((-((1 ? var_9 : (-90 + 41512)))))));
                            arr_21 [i_6] [1] [1] [8] [1] = (~var_15);
                            arr_22 [i_1] [10] [4] [i_6] [3] [10] = (max(((((((var_12 >> (var_16 - 5489785942559987760)))) ? (1 | 1185716891) : 3109250413))), 9223372036854775788));
                            arr_23 [i_1] [0] [i_3 + 2] [9] [1] [0] [i_6] = (((((((((arr_10 [i_3] [i_3] [5] [i_3]) ? var_13 : (arr_13 [7] [1] [1] [1] [3])))) ? (max(1, (arr_8 [i_1] [i_1] [i_1]))) : (1 << var_1)))) | (min((((1034575304 ? 89 : 1))), 5119107841953908069))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        arr_26 [i_7] [1] = 3858965344462201944;
        var_25 += var_2;
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_29 [6] &= var_15;
        var_26 = (max(var_26, ((max(var_7, ((5 ? -3858965344462201920 : 201)))))));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_27 = (min(var_27, 3));
            var_28 = ((!(!5119107841953908060)));
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        var_29 = (!1);
        arr_37 [i_10] = ((((~(arr_20 [i_10]))) < (!var_3)));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        arr_41 [i_11] = arr_1 [i_11] [i_11];
        var_30 = 112;
        arr_42 [i_11] = ((2913 == (((!(((var_2 ? 1830202829 : 2))))))));
    }
    #pragma endscop
}
