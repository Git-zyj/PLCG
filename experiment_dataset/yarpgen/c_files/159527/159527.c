/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-9223372036854775807 - 1) ? (-9223372036854775807 - 1) : 236));
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((0 ? 1 : 36638))) ? var_5 : (max((arr_1 [i_0]), (arr_2 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [9] [i_0] = max((((arr_1 [i_0]) / var_6)), ((max((((!(arr_2 [i_0] [i_1])))), var_13))));
            arr_8 [i_1] [i_0] [12] = ((!(((var_4 ? var_16 : var_15)))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_0] [0] = var_6;
            arr_12 [i_0] = ((((((arr_2 [i_0] [i_0]) & 1970873462))) ? (arr_1 [i_0]) : var_12));
            arr_13 [4] [i_2] = 4095;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_16 [i_0] [i_3] = ((~(~var_7)));

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_20 [i_0] [i_4] [i_4] [i_4] = ((~(-9223372036854775807 - 1)));
                arr_21 [i_0] [i_0] [i_4] [i_4] = (var_10 * 18);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                arr_24 [i_5] [i_3] [i_0] = (arr_6 [i_0]);
                arr_25 [12] [i_5] = (((((arr_14 [i_3] [i_0]) ? (max((arr_17 [i_3]), var_12)) : (((((arr_9 [i_0] [2]) != (arr_1 [i_3]))))))) ^ ((((!(arr_4 [i_0] [i_3])))))));
            }
        }
        arr_26 [i_0] = arr_17 [1];
    }
    var_19 = var_8;
    #pragma endscop
}
