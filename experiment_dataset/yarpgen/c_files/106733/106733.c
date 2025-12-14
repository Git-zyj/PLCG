/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? (~-1) : (arr_0 [14])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = ((+(((arr_2 [i_2] [5]) ? (arr_9 [i_1] [10] [i_1] [i_1]) : var_1))));
                    arr_10 [i_0] [i_1] [i_1] = ((247 ^ (((!(arr_2 [i_0] [i_0]))))));
                }
            }
        }
        arr_11 [i_0] = (3 + var_5);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (arr_12 [i_3] [i_3]);
        arr_16 [i_3] = 65535;
        var_20 = (arr_12 [i_3] [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_21 = ((!(((1 ? (arr_13 [i_4]) : (arr_13 [i_4]))))));
            var_22 = (arr_17 [i_3] [i_4]);
            arr_20 [i_3] [i_4] = ((~((var_10 ? (((2101240025 < (arr_13 [i_3])))) : ((((arr_14 [i_4]) != (arr_17 [i_3] [i_3]))))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_23 = (((arr_17 [4] [i_5]) ? ((((((var_12 ? 0 : var_13))) ? 31 : (arr_21 [i_3])))) : (min((arr_12 [i_3] [i_3]), (arr_13 [19])))));
            arr_23 [i_5] [i_5] [i_5] = ((((((1 ? (arr_21 [i_3]) : (arr_18 [7] [i_3])))) ? (arr_13 [i_5]) : -1)) != ((((!(arr_12 [i_3] [i_5]))))));
            arr_24 [i_5] [i_5] = (((1 == (arr_12 [i_3] [i_5]))));
        }
    }
    var_24 = 0;
    #pragma endscop
}
