/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_20 = ((-(((arr_0 [i_0]) ? 1 : (((arr_0 [i_0]) + (arr_1 [i_0] [i_0])))))));
        var_21 = (min(((((arr_0 [i_0 + 2]) && (arr_0 [i_0 - 1])))), (arr_0 [i_0 - 4])));
        arr_2 [i_0] [i_0] = 256;
        arr_3 [i_0] = (((arr_0 [i_0]) ? (max(((~(arr_0 [11]))), ((((arr_0 [i_0 - 2]) ? -1279327150 : 1279327149))))) : (((((~(arr_1 [i_0 - 4] [i_0 - 4])))) ? (arr_0 [i_0]) : (((arr_1 [i_0 + 1] [i_0]) ? (arr_1 [i_0] [i_0 + 3]) : (arr_1 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = ((((min(287948901175001088, (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 1279327149))))) ? (((-((15546636338222774129 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))))) : (((arr_4 [i_1] [i_1]) % (arr_5 [i_1] [i_1])))));
        var_23 = ((!((min((arr_4 [i_1] [i_1]), (arr_4 [11] [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_24 |= ((max((((arr_11 [i_1]) ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : -5809598373611522168)), (arr_9 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1]))));
                    arr_12 [i_2] = 31744;
                    arr_13 [5] [i_2] = (min((((1279327137 ? (arr_6 [i_1]) : (arr_11 [i_2])))), (((arr_5 [i_3] [i_1]) ? (arr_4 [i_1] [i_3]) : (arr_7 [i_2])))));
                }
            }
        }
        var_25 = 255;
    }
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        var_26 = ((((!(~-1279327150))) ? ((((arr_9 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]) ? (arr_9 [i_4 - 1] [i_4 - 3] [i_4 + 2] [i_4 + 1]) : (arr_9 [i_4 - 2] [i_4 + 2] [i_4 - 1] [i_4 - 3])))) : (max((((arr_14 [i_4] [i_4 - 3]) ? (arr_10 [i_4 - 2] [13]) : (arr_5 [i_4 - 2] [i_4 - 3]))), (!16855174860491659961)))));
        arr_16 [i_4] = -1099377410048;
    }

    for (int i_5 = 4; i_5 < 9;i_5 += 1)
    {
        var_27 = (min(((max(0, (arr_18 [i_5 + 1])))), 3549940377619034083));

        /* vectorizable */
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_28 = (min(var_28, ((((arr_6 [i_5 - 2]) ? (arr_6 [i_5 - 1]) : (arr_21 [i_5 - 2]))))));
            var_29 = (arr_17 [5] [i_6]);
            var_30 &= ((19325 ? 15 : (arr_15 [i_5])));
        }
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        arr_25 [i_7] = (arr_7 [i_7]);
        var_31 = (min(var_31, (arr_23 [12])));
    }
    var_32 = (min(var_32, (((((!((min(46227, var_15))))) ? var_18 : ((min(((var_14 ? var_11 : -1279327151)), var_0))))))));
    #pragma endscop
}
