/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            arr_13 [13] [i_4] [i_3] [i_2] [i_1] [1] [i_0] = (((((~(((arr_2 [i_0] [i_0] [i_0]) + (arr_3 [i_0] [i_0])))))) ? 0 : (arr_11 [i_0] [i_0] [i_4] [i_3] [i_4])));
                            arr_14 [i_2] [i_2] [i_2] [i_2] [i_4] [i_2] = (((160 ? 48512 : -154875155)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    {
                        var_15 = (max(var_15, ((max((max(((~(arr_18 [i_6] [i_5] [i_5] [i_6]))), (((~(arr_8 [i_0] [7] [i_5] [5])))))), (max((((var_7 ? (arr_19 [i_0] [i_1] [i_0] [i_6 + 1]) : (arr_19 [i_0] [i_1] [i_5] [i_6])))), (arr_18 [2] [i_6] [i_6 + 2] [i_6 + 2]))))))));
                        var_16 = (max((((max(1, var_4)))), (arr_11 [i_6] [i_5] [i_5] [i_1] [13])));
                        arr_20 [i_0] [i_0] [i_5] [i_6] = ((((239 > (arr_19 [i_0] [i_0] [i_6 + 1] [i_5])))));
                    }
                }
            }
            arr_21 [i_0] [i_0] [i_1] = (10366139701172980666 * 1);
            arr_22 [i_0] [i_1] = var_2;
        }
        var_17 = (((arr_12 [i_0] [i_0] [21] [i_0] [i_0]) ? (((((104 ? 54 : 13134))) - 2708387426)) : (((((max(-123, 16662447207795032554))) ? ((1 ? 262144 : 212)) : (arr_8 [i_0] [i_0] [i_0] [5]))))));

        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_18 = (arr_6 [i_0] [5] [i_7]);
            var_19 = 128;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_20 = (max(var_20, (((arr_23 [i_0] [i_0]) | (arr_23 [i_0] [6])))));
            arr_27 [i_8] [i_8] [i_0] = 27;
        }
        var_21 = (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? ((((arr_19 [i_0] [i_0] [2] [i_0]) ^ (arr_19 [i_0] [i_0] [i_0] [i_0])))) : ((14 ? ((var_0 ? (arr_7 [1]) : var_4)) : ((((arr_10 [i_0] [i_0] [1] [i_0] [i_0]) ? 20938 : (arr_24 [i_0] [i_0]))))))));
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_22 = (arr_19 [i_9] [i_9] [i_9] [15]);
        var_23 = (max(var_23, (min(((max((arr_16 [i_9] [i_9] [i_9] [i_9]), (arr_16 [i_9] [1] [i_9] [i_9])))), 46))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        arr_34 [13] [i_10] = 1459168200;
        var_24 = (((((arr_33 [i_10]) ? (arr_33 [i_10]) : (arr_33 [i_10]))) * -32765));
    }
    var_25 = (min(((((82 ? -6718781240270257254 : -17374)))), ((-4866791568949938211 ? var_7 : ((var_8 ? 9223372036854775806 : 1))))));
    #pragma endscop
}
