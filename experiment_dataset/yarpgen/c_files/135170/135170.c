/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [12] &= ((1 ? -951984470 : -1947701318753985276));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_12 [i_0] [5] [i_2] [i_0] = (i_0 % 2 == zero) ? ((((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) >> (((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) - 34361))))) : ((((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) >> (((((arr_7 [i_1 + 1] [i_1 + 1] [i_0]) - 34361)) + 18274)))));
                        arr_13 [14] [i_0] [15] [i_3] [i_0] [i_1 + 4] = (arr_5 [i_0] [i_2] [i_0]);
                        var_15 = 1;
                        var_16 = ((((arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_3]) - (arr_10 [i_0] [i_1 + 3] [i_1 + 1] [i_0]))));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1 + 3] [i_2] [1] = (arr_9 [i_0] [i_1] [i_2] [i_4]);
                        arr_18 [i_0] [i_0] [i_2] [i_4] = (((104 < 20) ? 15329 : ((65529 ? -282 : 28))));
                        var_17 = ((9 != ((-(arr_5 [i_0] [5] [i_0])))));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_22 [i_0] [i_1 + 3] [i_1] [i_1] [i_1] = ((var_3 ? (((arr_2 [i_0] [i_1 + 1]) | (arr_2 [i_0] [i_1 + 1]))) : (arr_2 [i_0] [i_1 + 3])));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_25 [i_6] [i_0] [12] [i_1] [i_1] [i_0] [3] = (((arr_15 [i_5] [i_1] [i_2] [i_5] [i_0]) ? 130 : (arr_11 [i_0] [i_1 + 3] [i_0])));
                            var_18 &= (arr_23 [i_1 - 1] [i_5]);
                            var_19 = var_0;
                            var_20 = ((-(arr_2 [i_0] [i_1 + 3])));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1 + 3] [i_2] [i_5] [10] = (!4063232);
                            var_21 += 15;
                            var_22 = 5;
                            arr_31 [i_0] [i_1 + 4] [17] [i_5] [i_7] [i_7 + 2] [i_5] = ((-(arr_10 [i_1 + 4] [i_7 - 1] [i_7] [i_0])));
                        }
                        var_23 = (-230015264 - -22);
                        var_24 -= (((((((min(49307, (arr_11 [i_1 + 3] [1] [i_5])))) + (arr_21 [i_1 + 1] [i_1 + 4] [i_1 - 1] [1] [i_2])))) >= (((((-27925 ? (arr_28 [i_0] [i_1] [i_2] [i_5] [4] [i_0] [21]) : (arr_10 [i_0] [i_1] [i_2] [i_5])))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0]) + var_8)) : (0 < 230015263)))));
                        arr_32 [i_5] [i_0] [i_2] [14] [i_0] [10] = ((-((~(((arr_21 [i_0] [i_2] [i_2] [i_5] [i_1 + 4]) ? 153 : (arr_5 [i_0] [i_2] [i_0])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
