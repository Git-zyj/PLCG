/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 + 1] = ((-183 ? (max(-109, 1048575)) : 13242));
                arr_6 [i_1] [i_1] [i_0] = (max(((-(arr_1 [i_0 - 3]))), ((max((arr_3 [i_0 + 2] [i_0 - 2]), (arr_3 [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }
    var_10 = var_3;
    var_11 = var_1;
    var_12 = var_1;

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_13 = ((1 < ((4294967295 * (((5976221335988166512 ? (arr_2 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))))))));
        var_14 = (min(var_14, (((((max((arr_1 [i_2 + 4]), (arr_0 [i_2 + 1] [i_2 + 1])))) > (((arr_0 [i_2 + 1] [i_2 + 4]) - (arr_1 [i_2 + 1]))))))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_15 = (((124 >> (-1 + 14))));
                        arr_20 [i_5] [i_4 + 1] [i_4 + 1] = (-109 ^ -7840457215602045672);
                        var_16 = (((!(~109))));
                    }
                }
            }
        }
        var_17 = (arr_9 [i_3]);
        var_18 = var_8;
        arr_21 [i_3] [i_3] = ((var_0 ? (arr_13 [i_3] [i_3] [i_3]) : (((arr_16 [i_3]) ? (arr_13 [i_3] [i_3] [i_3]) : (((var_8 ? var_8 : 150)))))));
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_26 [i_7] = arr_23 [i_7];
        arr_27 [i_7] = (max((arr_24 [i_7]), var_2));
        arr_28 [i_7] = (((((max(7636384074455207566, 7840457215602045672)) - 7840457215602045672)) ^ (arr_22 [i_7])));
    }
    #pragma endscop
}
