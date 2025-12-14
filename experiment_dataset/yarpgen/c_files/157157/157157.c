/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(32767, var_6);
    var_11 = ((var_3 ? (((((7809244041323715546 ? 31245 : 1))) ? 106 : var_2)) : ((-((-4371423648911641278 + (-32767 - 1)))))));
    var_12 = (min(var_12, (((var_5 - ((var_0 ? var_4 : 4294967272)))))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = ((~(((arr_3 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        arr_4 [i_0] = (max(((~(arr_0 [i_0 - 1]))), ((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        arr_5 [i_0] = (min(((-((31268 + (arr_0 [i_0]))))), (((((min(0, var_7))) && (((var_0 ? (arr_3 [i_0]) : var_5))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_10 [i_1] [i_1] = var_2;
        arr_11 [i_1] [i_1] = -7187209386796368043;
        arr_12 [i_1] [i_1] = (((arr_6 [i_1]) ? ((((((-(arr_9 [i_1] [i_1])))) ? (((!(arr_7 [i_1])))) : (arr_9 [i_1] [i_1])))) : ((-(((arr_9 [i_1] [i_1]) | var_8))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_24 [i_5] [i_5] [8] [8] [i_3] [i_2] &= (arr_8 [i_5]);
                        arr_25 [i_4] [i_3] [i_4] [i_4] = (((arr_9 [i_4] [i_2 - 2]) ? 31245 : (var_8 - var_8)));
                        arr_26 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((!(arr_18 [i_2] [i_3] [i_4] [i_5])));
                    }
                }
            }
            var_14 = (max(var_14, 18446744073709551615));
            arr_27 [i_2] = ((-(arr_15 [i_2 + 2] [i_3] [i_2 + 1])));
        }
        var_15 ^= (1539788823 ? var_4 : ((var_3 ? -31236 : (arr_6 [i_2]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                {
                    arr_35 [i_2] [i_6] [i_7] = ((arr_32 [i_2 - 2] [i_2 + 2]) ? (((arr_13 [i_2 - 1] [i_2]) ? var_7 : (arr_23 [i_2]))) : (arr_19 [i_7 + 1] [i_6] [i_2] [i_2 + 1]));
                    var_16 = (((((var_0 ? (arr_31 [i_6] [i_6] [i_6]) : var_8))) && (31228 % var_3)));
                    var_17 = (((var_5 | var_0) ? 1362931502 : (arr_15 [i_7] [i_6] [i_2 - 1])));
                }
            }
        }
    }
    var_18 = (((102 + var_2) / var_1));
    #pragma endscop
}
