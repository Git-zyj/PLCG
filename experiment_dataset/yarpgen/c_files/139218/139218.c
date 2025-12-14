/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(!var_0)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = var_4;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_1] = (min(var_5, -15));
            var_14 &= (min((min(((var_8 ? (arr_3 [i_0] [i_0]) : var_0)), var_4)), (((29 * (((arr_1 [i_0] [i_0]) ? (arr_1 [0] [i_1]) : var_9)))))));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_14 [i_3] = arr_9 [i_3];

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_2] [i_2] [i_4] [i_3] [i_4] [i_4] = ((-(arr_10 [i_3] [i_5])));
                        var_15 += ((!(((arr_4 [i_2]) && var_7))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_20 [i_3] [i_4] [i_3] = -17;
                        arr_21 [i_2] [i_3] = (((!6410666958745772688) ? (arr_11 [i_3]) : (max(((min(-15929, var_11))), (arr_3 [i_3] [i_6])))));
                        arr_22 [i_2] [i_3] [i_3] [i_6] = ((var_9 * (arr_2 [20])));
                        arr_23 [i_2] [i_3] [i_2] [i_4] |= ((((((((var_11 ? var_11 : 94))) || var_3))) >= 38469));
                    }
                    arr_24 [i_2] [i_2] [i_3] = (max((((arr_8 [i_4] [i_3] [12]) / (arr_9 [i_3]))), (((arr_12 [i_2] [i_2] [i_2] [i_2]) / (arr_8 [i_2] [15] [i_4])))));
                    arr_25 [i_3] [i_3] [i_3] = (((max(((var_8 ? 1302317194100775416 : var_10)), var_1)) >= (((((((var_4 ? var_9 : var_2))) != var_7))))));
                }
            }
        }
        arr_26 [i_2] = 3;
        arr_27 [i_2] = 9223372036854775807;
        arr_28 [i_2] [i_2] = 105;
    }
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    arr_39 [11] [11] [i_9] = (((((var_0 ? (max(var_10, var_11)) : ((var_1 ? var_10 : (arr_1 [i_8] [i_9])))))) ? ((6410666958745772688 / (arr_4 [i_7]))) : var_6));
                    arr_40 [i_7] [i_7] [i_7] = ((((4040018420 ? -var_5 : (max(var_5, var_7)))) != (!0)));
                    var_17 ^= ((min((18446744073709551604 || 0), ((var_6 ? var_8 : var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
