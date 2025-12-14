/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((((-9223372036854775807 - 1) || var_14))) + var_5))) ? ((~((1121876130 ? 3 : 4294967292)))) : ((((-421007136 ? 3892443932803951174 : 3892443932803951162))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 = ((((max((((arr_0 [i_0]) ? var_1 : 48204)), (arr_0 [i_0])))) ? ((((9223090561878065152 ? 23 : 18446744073709551598)) | -1059014775)) : ((((!((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 = ((-(arr_6 [i_2] [i_2] [i_2 + 1])));
                    var_19 ^= (((arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) ? (((arr_5 [i_1] [i_1] [i_1] [i_2 + 1]) ? (arr_5 [i_1] [i_2] [i_2] [i_2 + 1]) : (arr_5 [i_1] [i_1] [i_1] [i_2 + 1]))) : (((arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) ? (arr_5 [i_2] [i_2] [i_2] [i_2 + 1]) : (arr_5 [i_2] [i_2] [i_2] [i_2 + 1])))));
                    arr_7 [i_0] [i_1] [i_0] [i_0] = var_8;
                }
            }
        }
        arr_8 [i_0] = ((((max((arr_6 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))) ? (max((arr_6 [i_0] [i_0] [i_0]), (min(9223090561878065152, (arr_0 [i_0]))))) : 1));
    }
    var_20 = var_9;
    var_21 = ((var_12 / (max(var_7, -var_5))));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        var_22 = (arr_0 [i_3]);
        var_23 = (max(var_23, (arr_4 [i_3 - 1])));
        arr_12 [i_3] = ((-541255339 ? 4294967272 : (arr_1 [i_3 + 1] [i_3 + 1])));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = (max(var_24, ((((arr_5 [i_4] [i_3] [i_3] [i_3]) ? (arr_11 [i_3 + 1] [i_4]) : var_2)))));
            var_25 = ((var_3 ? var_3 : (arr_14 [i_3] [i_3] [i_3 - 1])));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_26 = (max(var_26, ((((1073676288 ? -11022 : 1295911222807637113))))));
            arr_19 [i_3] = ((((((arr_3 [i_3] [i_5] [i_3]) ? (arr_10 [i_3] [i_3]) : (arr_11 [i_5] [i_3])))) ? (arr_15 [i_3 - 1]) : (arr_18 [i_3] [i_3 - 1])));
        }
    }
    #pragma endscop
}
