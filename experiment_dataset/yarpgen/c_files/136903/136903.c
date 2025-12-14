/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((min((min(var_6, 3586529556506803681)), var_8)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (min(var_9, 3586529556506803681));
        var_15 ^= 4294967295;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_1 + 1] = -0;
            var_16 = (max(var_16, (arr_5 [i_1 + 3])));
        }
        var_17 = (max(var_17, (((((max(((min(255, 1810968861))), 4025082750))) + var_5)))));
        arr_12 [i_1] = ((((arr_3 [i_1 + 1] [i_1 + 3]) - 19)) - 122);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 = (((18446744073709551607 / var_0) & var_10));
        arr_15 [i_3] = ((-1419850943 + 2147483647) >> (var_6 - 219));
        var_19 |= 4;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    {
                        arr_25 [i_6 - 1] [i_4] [i_4] [i_3] [i_4] [i_3] = var_6;
                        arr_26 [i_3] &= (((arr_22 [i_3] [i_6 + 3] [i_6] [i_6 + 1] [i_6 + 1] [i_3]) ? (arr_22 [i_3] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_3]) : (arr_24 [i_3] [i_6] [i_6] [i_3] [i_6 - 1] [i_3])));
                    }
                }
            }
        }
        arr_27 [i_3] = (!(arr_8 [i_3]));
    }
    #pragma endscop
}
