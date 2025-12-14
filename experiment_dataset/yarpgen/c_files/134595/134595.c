/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((!(7 * -34)));
                var_21 &= ((33 ? (min((arr_0 [i_1 + 2] [i_1 + 2]), 0)) : ((var_2 ? 2074202359318517014 : -2074202359318517026))));
                arr_6 [i_0] [i_1] = (((arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? var_11 : (min(1704495538015409134, (arr_3 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_22 = (arr_13 [i_5] [i_4] [i_2] [i_2]);
                        var_23 = ((((arr_1 [i_4 - 2]) ? (arr_4 [i_2] [i_2] [i_2]) : (var_14 / 237))));
                    }
                }
            }
        }
        arr_18 [i_2] = 33;
        arr_19 [i_2] = ((4142280979 ? ((-2074202359318517014 ? 2074202359318517026 : (((arr_2 [i_2]) << (((arr_9 [0]) - 144449855)))))) : (((min(var_8, var_16)) / (arr_12 [13] [i_2])))));
    }
    var_24 = (min(-1588, (!-var_3)));

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] [10] = (arr_3 [i_6]);
        arr_24 [i_6] = min(var_7, (arr_1 [i_6]));
        var_25 = ((-(((min(21906, 1704495538015409134)) - (-1704495538015409139 + 3080620002)))));
        arr_25 [i_6] = ((((((var_14 / 43639) ? ((109 ? 4142280976 : 1)) : (((min((arr_1 [i_6]), (arr_3 [i_6])))))))) && ((((min((arr_22 [i_6]), 152686320))) && (((arr_22 [i_6]) && -110))))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_26 = (((arr_4 [i_7] [4] [i_7]) - (((33 != (arr_20 [15]))))));
        var_27 -= (~43615);
    }
    #pragma endscop
}
