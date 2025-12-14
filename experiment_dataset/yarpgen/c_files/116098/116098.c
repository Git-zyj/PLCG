/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((-(arr_2 [i_0] [i_0]))) ? (arr_2 [i_0] [i_0]) : ((((arr_0 [i_0]) && (arr_1 [i_0]))))))));
        var_12 |= (238 != 61440);
        var_13 += ((!(((4294967294 ? (arr_1 [i_0]) : var_1)))));
    }
    var_14 = var_3;

    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_15 = (min(var_15, (((-(((arr_1 [i_1 - 2]) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))))));
        arr_6 [i_1] [i_1] = (arr_5 [i_1 - 2]);
        var_16 ^= (((((max(16227, (!18446744073709551593))))) | ((+(((arr_4 [i_1] [i_1]) & var_2))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = (~var_9);
        arr_9 [i_2] = ((var_0 * (((!(((-(arr_4 [i_2] [i_2])))))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    {
                        var_18 = ((((arr_14 [i_2] [i_3 - 1] [i_5 - 1]) ? 2154618108822180508 : 40544)));
                        arr_19 [i_2] [i_3] = ((+((((((arr_12 [i_3] [i_3]) & -81))) ? (arr_15 [i_2] [i_3 - 1] [i_4 - 1] [1]) : (arr_15 [i_4] [i_4] [i_4 + 3] [i_2])))));
                    }
                }
            }
        }
        arr_20 [i_2] = ((-((~(arr_11 [i_2])))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_19 = (((-32767 - 1) / -2154618108822180509));
        arr_23 [i_6] = ((-(((arr_4 [i_6] [i_6]) ? (arr_2 [i_6] [i_6]) : (arr_2 [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_20 = 403911343;
        var_21 = (((-(arr_25 [i_7]))));
    }
    var_22 = var_10;
    #pragma endscop
}
