/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = ((min(-1498973347, 1203146742)));
        arr_4 [i_0] = (!1);
        var_16 = (max(var_16, ((max((max(var_10, ((var_14 ? var_2 : 13920432752504401512)))), (arr_3 [i_0]))))));
        var_17 = (max(var_17, ((max(((max((arr_3 [i_0]), -25937))), (((max(var_1, 1564945341)) - (((min(var_9, (arr_1 [i_0]))))))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((((var_3 ? ((var_11 ? (arr_5 [2]) : (arr_5 [0]))) : -1664379557))) ? (max((!64), ((var_10 ? var_9 : 1)))) : ((~(!-1564945341))))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = ((6 >= (arr_5 [i_1])));
            var_20 = ((((max((arr_6 [i_1]), ((32238 ? -7839884500026777969 : 11150731028019756832))))) ? var_5 : var_11));
        }
        var_21 = (min(((((var_9 / var_10) * (max(1564945341, var_7))))), ((var_4 ? var_2 : (min(var_3, 2270490683860891844))))));
        var_22 = var_12;
        var_23 = (max((min(((var_1 | (arr_8 [i_1] [i_1] [i_1]))), (arr_6 [i_1]))), -1564945341));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_24 = var_11;
                        var_25 -= ((+((((arr_11 [i_3] [i_4] [i_6]) || 0)))));
                    }
                }
            }
        }
        arr_18 [i_3] = 64;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_26 = 2147483392;
        arr_23 [i_7] = ((!(152 >> 0)));
        var_27 += ((183 ? (arr_22 [i_7]) : -var_4));
        arr_24 [i_7] = var_9;
        arr_25 [i_7] = 64;
    }
    var_28 ^= ((var_8 ? (((0 >= ((max(var_7, var_8)))))) : var_4));
    var_29 = ((var_3 ^ ((var_2 ? (max(var_12, 11392209758865024)) : ((min(var_5, var_8)))))));
    #pragma endscop
}
