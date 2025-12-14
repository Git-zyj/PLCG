/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = (var_0 < var_5);
                                var_10 = ((0 ? 15686491817984310387 : 15));
                                var_11 = (((((41272 ? (-127 - 1) : 10965653252606478553))) ? 2760252255725241228 : ((var_7 ? 10965653252606478538 : (arr_9 [i_2])))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [15] [i_2] = (!var_4);
                    arr_17 [i_1] [i_2] [i_2] [i_0] = -var_9;
                    var_12 &= ((((((min(7481090821103073062, 1))) ? (arr_11 [i_2 - 1] [i_2 - 1] [i_2] [i_2]) : 11781981816121047827)) == (arr_9 [22])));
                    var_13 = (((~2301210422) ? 44348 : (min(1, var_3))));
                }
            }
        }
    }
    var_14 *= var_8;

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_15 = (max(var_15, var_9));
        arr_21 [i_5] = var_5;
        var_16 = arr_11 [i_5] [i_5] [i_5] [i_5];
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_17 = (min(((((arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 3] [i_6 + 1]) | (arr_11 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 + 3])))), ((5533510468647840487 ? (arr_11 [i_6 + 1] [i_6 + 1] [i_6 + 3] [i_6 + 2]) : 2760252255725241229))));
        arr_25 [i_6 + 3] [i_6 - 1] = (((!var_9) >= (arr_24 [i_6])));
    }
    #pragma endscop
}
