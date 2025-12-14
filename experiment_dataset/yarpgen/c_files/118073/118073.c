/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((((var_9 * (arr_7 [i_2])))) ? var_1 : 2327763411)) * var_3));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((((((arr_7 [i_0 + 3]) / 18446744073709551615))) ? var_1 : (((arr_4 [16]) ? (arr_0 [i_0]) : var_2))));
                    arr_10 [i_2] |= arr_1 [i_0];
                }
            }
        }
    }
    var_18 = ((~(((var_17 ^ var_17) & (var_5 ^ var_16)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                var_19 = (((((arr_12 [i_4]) + var_11)) + (arr_12 [i_3])));
                var_20 = ((((((arr_16 [i_3] [i_3]) ? (((max((arr_12 [i_3]), var_14)))) : var_10))) || var_10));

                /* vectorizable */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    arr_20 [i_4] = (arr_13 [4]);
                    arr_21 [i_3] = (arr_14 [i_3]);
                }
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    var_21 = (min(var_21, ((min(((((((arr_11 [i_4]) ? var_1 : var_0))) - (arr_18 [i_6 - 2] [i_3] [i_3] [i_3]))), (((((arr_17 [i_3] [i_4] [i_6 - 2]) + (arr_19 [i_3] [i_4]))) + (var_16 * 1967203885))))))));
                    var_22 = (((arr_18 [i_3] [i_3] [i_3] [11]) ? 26581 : (((125 * var_10) / var_12))));
                    var_23 = ((arr_18 [i_6 - 2] [i_4] [i_3] [i_3]) + 2327763407);
                    var_24 = var_11;
                }
                arr_24 [i_3] [i_3] [i_3] &= arr_17 [i_4] [i_3] [i_3];
                arr_25 [i_4] = var_6;
            }
        }
    }
    var_25 = (min(var_25, (((var_5 * (((var_1 / var_4) / var_11)))))));
    #pragma endscop
}
