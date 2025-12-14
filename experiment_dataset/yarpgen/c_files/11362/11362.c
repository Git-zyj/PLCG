/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 && (((var_8 ? (!var_1) : 7)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = ((((((arr_0 [i_0]) | ((~(arr_2 [i_0])))))) ? (((arr_1 [i_0 - 2]) ? (arr_2 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (max((arr_1 [i_0]), (arr_0 [i_0])))));
        var_19 ^= (((max((((arr_2 [i_0]) ? 1 : (arr_1 [i_0]))), (arr_2 [i_0 + 2]))) ^ (((((((arr_1 [i_0 + 1]) + 9223372036854775807)) >> (((arr_2 [i_0]) + 11538)))) | (((~(arr_2 [i_0]))))))));
        var_20 = (((((!(arr_1 [i_0 + 2])))) % (arr_0 [i_0 + 2])));
        var_21 = (min(((+((((arr_1 [8]) > (arr_2 [i_0])))))), (arr_2 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_3] [i_1] [i_2] [i_0] = ((~((-((max((arr_10 [i_0 + 1] [i_2] [14] [i_3] [i_2] [i_2]), (arr_0 [i_0]))))))));
                        var_22 -= ((+(((arr_0 [i_0 - 2]) >> (((arr_8 [i_0]) - 2160256942488349193))))));
                        arr_13 [i_1] [i_1] = ((((~(arr_4 [i_0 - 1]))) < (((arr_4 [i_0 - 2]) ? (arr_3 [i_1]) : (arr_5 [i_0 - 2] [i_1])))));
                    }
                }
            }
        }
    }
    var_23 = (max(var_9, var_7));

    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] |= (((((+((min((arr_15 [i_4] [i_4]), (arr_16 [14]))))))) || ((min((arr_14 [i_4]), (arr_14 [i_4]))))));
        var_24 ^= (arr_14 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_25 = (((arr_14 [i_5]) ? 2438959348242693567 : (arr_19 [i_5])));
        var_26 = (max(var_26, (((~(((arr_18 [i_5] [i_5]) / (arr_14 [i_5]))))))));
    }
    #pragma endscop
}
