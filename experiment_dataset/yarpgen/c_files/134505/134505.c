/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = ((((((arr_2 [i_0] [i_0] [i_0]) ? -80 : (arr_3 [i_1] [14])))) ? (arr_4 [i_0] [i_1] [i_1]) : var_18));
            var_19 = (arr_0 [i_1]);
            var_20 = ((var_17 ^ (~10091579777503217234)));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_21 = arr_8 [i_0] [i_1] [i_2] [1];

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_22 -= ((-(15 == var_0)));
                    var_23 |= (16146535917877828384 >= 144044819331678208);
                    var_24 = (arr_12 [i_0] [i_1] [i_2] [i_3]);
                    arr_13 [i_3] [1] [i_3] [i_3] = -var_12;
                }
                arr_14 [i_2] [i_2] = (1 ? 7 : (((var_4 ? -45 : 1))));
                arr_15 [i_0] [i_1] [i_2] [i_2] = arr_11 [9] [9] [i_1] [i_2] [i_2];
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_25 = ((((((max(-1, 18446744073709551615)) ^ -1847177938))) || 144044819331678208));
            var_26 = (arr_1 [i_0]);
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_27 = (arr_19 [i_0]);
            arr_21 [i_0] = (((1 ^ 123) ^ -121));
            var_28 = var_18;
            /* LoopNest 2 */
            for (int i_6 = 4; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        var_29 ^= ((~(arr_18 [i_7 - 1])));
                        var_30 = (((var_17 ? ((min(var_14, var_15))) : ((~(arr_1 [2]))))));
                        arr_26 [i_0] [i_0] [i_0] [i_7] = (max((((((arr_17 [i_0]) ? -144044819331678209 : -3989)) ^ (arr_2 [i_6] [i_5] [i_0]))), var_0));
                        arr_27 [i_0] [i_6 + 3] [1] = var_11;
                    }
                }
            }
        }
        var_31 -= ((1 << (((arr_23 [i_0] [i_0] [i_0]) ? (((arr_3 [i_0] [i_0]) % (arr_3 [i_0] [10]))) : (((arr_12 [i_0] [i_0] [i_0] [9]) ? (arr_24 [i_0] [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0])))))));
        arr_28 [i_0] = ((((var_11 ? ((-(arr_2 [i_0] [i_0] [i_0]))) : (arr_16 [4] [4])))) ? (arr_6 [i_0] [i_0] [i_0]) : (min((arr_12 [i_0] [i_0] [i_0] [i_0]), var_17)));
    }
    var_32 = var_4;
    #pragma endscop
}
