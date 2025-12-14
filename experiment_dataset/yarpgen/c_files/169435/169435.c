/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 -= (arr_2 [i_1]);
                arr_5 [i_0] [i_1] = -23588;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [1] [i_1] [i_1] [i_3] [i_2] [i_1] = (min(((6871951187110998568 ? (~var_4) : var_8)), var_5));
                            var_13 += (((((~834840631249845001) ? 0 : 39)) ^ ((~(~1)))));
                            var_14 = var_11;
                            arr_11 [i_0] [i_0] [i_2] [i_1] = (73 | var_2);
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_0] = -31500;
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_16 [i_4] = (arr_3 [i_4] [i_4] [i_4]);
        var_15 = (((((var_1 ? var_1 : (arr_3 [i_4] [i_4] [i_4])))) ? (((arr_7 [i_4]) ? var_10 : (arr_0 [1]))) : (((~(arr_1 [13] [i_4]))))));
        arr_17 [10] [i_4] = (2074436034 ? (arr_7 [i_4]) : (arr_7 [i_4]));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (((((arr_18 [i_5]) || (arr_18 [i_5]))) ? (((((arr_19 [i_5]) == var_2)))) : (~var_9)));
        arr_22 [i_5] = ((+((var_5 ? ((((arr_18 [i_5]) ? 46 : -32))) : var_7))));
        arr_23 [i_5] = ((3506850158 ? (-127 - 1) : (((56 != (min(10, -32753)))))));
        var_16 += ((((min(9223372036854775787, (((var_4 ? var_6 : 2113887040)))))) ? (arr_19 [i_5]) : ((((arr_20 [i_5] [i_5]) ? 39 : var_6)))));
    }
    #pragma endscop
}
