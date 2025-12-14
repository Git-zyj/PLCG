/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 *= ((!(arr_7 [i_0] [i_0] [i_0] [i_0])));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = max(var_0, -503184896);
                }
            }
        }
        var_13 = (arr_6 [10] [i_0] [10] [i_0]);
        arr_9 [i_0] = 3791782378;
        var_14 = (max(1053297663, 3));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    {
                        var_15 = (((((var_11 <= (arr_18 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6])))) * (~var_8)));
                        var_16 = (max((max((arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6]), (arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]))), (((arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]) ? (arr_7 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1]) : 3791782380))));
                    }
                }
            }
        }
        var_17 = 22361;
        var_18 = (min(var_18, -28044));
        var_19 = ((+(((arr_13 [i_3] [i_3]) * (((arr_13 [i_3] [0]) ? (arr_19 [i_3] [i_3] [i_3]) : var_9))))));
        var_20 = var_8;
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_21 += (arr_24 [i_7] [i_8] [i_7]);
            arr_27 [i_7] [i_7] [i_8] = (!-5359);
            var_22 = arr_23 [i_8];
            var_23 -= (((((((min((arr_25 [i_7] [4] [i_7]), (-2147483647 - 1)))) ? var_9 : (((~(arr_22 [4] [4]))))))) ? -60 : (arr_26 [12] [i_8])));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                {
                    var_24 = (arr_31 [i_7] [i_9]);
                    var_25 = (((((-(arr_34 [i_9] [i_9] [i_7])))) ? 116 : (arr_33 [i_7] [i_9])));
                }
            }
        }

        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            arr_37 [i_7] = 1;
            var_26 = ((max((arr_30 [i_7]), (arr_30 [i_7]))));
        }
        arr_38 [i_7] [3] = (arr_28 [i_7]);
    }
    var_27 = (+(((93742032 <= -2) ? (57 / 1) : 1)));
    var_28 = (~503184896);
    #pragma endscop
}
