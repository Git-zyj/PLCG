/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = var_11;
                        var_14 = 2741136407958532899;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = -var_4;
                        var_16 = (max(var_16, (((~(((max(var_7, (arr_8 [i_4] [i_4] [1] [i_0] [i_0] [i_4]))))))))));
                        arr_16 [i_0] [i_1] [i_1] = arr_13 [i_0] [i_1] [i_2] [i_0] [i_2];
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [18] = (arr_4 [i_0] [i_1 - 1] [i_2]);
                        var_17 += (~4264593846574273605);
                    }
                    arr_21 [i_0] [i_1 + 2] = (arr_7 [i_0] [i_0] [i_2] [i_0]);

                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        arr_26 [i_0] [i_0] = (~246);
                        arr_27 [i_0] [i_0] [i_0] = ((+(((arr_22 [i_0] [i_6] [i_6] [i_6]) ? (arr_15 [i_2] [i_2] [i_2] [i_0]) : var_8))));
                        var_18 &= (arr_24 [i_6] [i_1 - 1] [i_6 + 1] [i_1 + 1] [i_1 - 1] [i_6]);
                    }
                    var_19 = ((((((arr_6 [i_0] [i_1 - 1] [i_0] [i_0]) ? var_1 : (~-16803)))) ? (arr_8 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0]) : (~1934711770)));
                    var_20 |= (~59);
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
