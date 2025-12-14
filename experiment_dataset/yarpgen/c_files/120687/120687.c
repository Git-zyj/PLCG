/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = ((((var_12 ? (arr_0 [7] [i_1]) : var_9)) + var_13));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((((((arr_4 [i_0] [i_0] [i_0]) * ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_1] [10]) : var_4)))))) ? (((((var_5 * (arr_1 [i_0] [i_1])))) ? (min(var_0, (arr_3 [i_1] [i_1] [i_2]))) : 48975)) : 98));
                    var_14 *= (~var_8);
                }
            }
        }
        var_15 = 70;
        arr_8 [i_0] = (((((((var_8 ? var_6 : var_10))) || var_4)) || ((max(7168, -106)))));
        var_16 = (34387 - 58367);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] = ((-95 ? 18446744073709551608 : -71));
            var_17 -= (((-743513333660260056 ? var_8 : var_9)));
            var_18 = arr_9 [i_0] [i_3];
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] = ((arr_5 [i_0] [i_0]) ? var_1 : (arr_0 [5] [i_4]));
            arr_16 [i_0] [i_4] &= ((var_2 ? var_6 : var_11));
            arr_17 [i_0] [i_4] = var_9;
            arr_18 [4] [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        }
    }
    var_19 = ((((-var_4 ? var_1 : 134184960)) | (var_10 ^ 58346)));
    #pragma endscop
}
