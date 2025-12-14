/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] &= ((-(arr_1 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, (arr_5 [i_0 + 2] [i_0] [i_0 - 2])));
                        var_20 = (min(var_20, (((-(~0))))));
                        arr_12 [i_0] [i_1] [i_0] [i_1] = (((!1) ? (~2407) : (arr_8 [i_3 + 1] [i_1])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            {
                arr_17 [i_4] = 61933;
                var_21 = (~-1);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            {
                var_22 = ((((95 ? 1 : 127)) < (max(1242, ((975764 ? 1 : 6353))))));
                arr_23 [11] [i_6] = (max(((min((arr_22 [i_6]), var_7))), (((((~(arr_13 [i_7])))) ? (max((arr_13 [i_6]), 31252)) : (arr_22 [i_6])))));
                var_23 += 9544;
                var_24 = (max(var_24, ((max((max(3113334154, (arr_16 [i_6] [i_7 + 1] [i_6]))), ((min(1995017405, 1081201509))))))));
                arr_24 [i_6] = ((((((975764 == 1) ? (min(-1995017406, 2147483647)) : -1073741824))) && 53630));
            }
        }
    }
    var_25 = ((var_18 ? (((~(-1995017420 || 415948020)))) : ((95 ? ((1 ? var_17 : 675111684)) : (((min(var_14, 74))))))));
    #pragma endscop
}
