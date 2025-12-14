/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(2370339608, 2271590064)), ((((8 / var_5) != 0)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = 94;
        var_15 = (((arr_2 [i_0] [i_0]) ? (!var_11) : (arr_2 [i_0] [i_0 - 3])));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_16 += (((arr_1 [i_1 - 2]) != 32326));
        arr_6 [i_1] = var_0;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = ((((-3 && (arr_8 [i_2] [i_4]))) ? ((((!(arr_8 [i_2] [i_3]))))) : ((-1 ? 208863357916438830 : var_2))));
                    var_17 = (arr_12 [i_2] [i_3] [i_4]);
                    arr_18 [i_4] [i_3] [i_3] [i_2] = ((((((var_12 ? (arr_14 [i_2] [i_2] [i_2] [i_2]) : var_8)))) ? (arr_13 [i_2] [i_2]) : (((!(arr_8 [i_3] [i_3]))))));
                    arr_19 [i_3] [i_2] [i_2] [i_3] = (((arr_12 [i_4] [i_3] [i_2]) ? ((max(-1104052597, (arr_7 [i_4])))) : var_1));
                }
            }
        }
        arr_20 [i_2] = (((((~var_12) ? ((~(arr_7 [i_2]))) : -18)) ^ ((max((!var_3), ((!(arr_8 [i_2] [i_2]))))))));
        arr_21 [i_2] [i_2] = ((!((((arr_10 [i_2] [i_2]) ? var_4 : (arr_14 [i_2] [i_2] [i_2] [i_2]))))));
        arr_22 [i_2] = (arr_15 [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    arr_32 [i_5] [i_7] [i_7] = ((7298384201415782574 & ((((arr_24 [i_5 - 1]) ? (arr_24 [i_5 - 2]) : 78)))));
                    var_18 = (min(var_18, (((81 ? (((!(arr_24 [i_5 - 2])))) : (3 <= 170))))));
                }
            }
        }
    }
    var_19 = min((((0 ^ 192) % (((var_7 ? 1 : var_11))))), var_6);
    #pragma endscop
}
