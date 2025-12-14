/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = var_5;
            arr_6 [i_1] = (((2032 >= 116) ? (arr_4 [i_0] [i_0] [i_1]) : var_2));
            var_13 = (3641923713 ? (arr_2 [i_1] [i_0]) : var_3);
        }
        var_14 -= ((-35947801 >= (arr_4 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 = ((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : 1394600519);
        var_16 *= (((var_3 >= var_2) ? (((((arr_4 [i_2] [i_2] [i_2]) == (arr_3 [i_2] [i_2]))))) : 3127974721));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_2] [i_2] = (~var_5);
                    var_17 |= (((arr_3 [i_3] [i_3 + 1]) >= (arr_2 [i_4] [i_3 + 1])));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_27 [i_8] [i_8] [i_6] [i_8] [i_5 - 1] [i_8] = ((139 ? 63 : 1394600515));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_18 = (((9140354263232151276 || var_5) ? ((((((arr_18 [i_6]) || -862345346)) || (arr_29 [i_5 + 3] [i_5 + 2])))) : ((((((var_10 ? 3127974744 : (arr_21 [i_5 + 4] [i_5 + 4])))) && (arr_28 [i_8] [i_8]))))));
                            arr_31 [i_6] [i_5] [i_7] [i_8] [i_6] [i_9] [i_5] = ((+(max((arr_19 [i_5 + 1]), var_9))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5] |= (min(-2032, ((16517965603895952708 + (arr_17 [i_5])))));
                            var_19 = (((((arr_29 [i_5 + 2] [i_5 + 1]) ? (arr_29 [i_5 + 4] [i_5 + 1]) : (arr_29 [i_5 + 4] [i_5 + 1]))) * (((arr_29 [i_5] [i_5 + 1]) * 0))));
                            arr_37 [i_8] [i_8] [i_8] = (1 < 1166992551);
                        }
                    }
                }
            }
        }
        arr_38 [i_5 + 3] |= ((-(max((min(524287, 18446744073709551615)), (((2147483647 ? var_8 : -1)))))));
        arr_39 [i_5 + 1] = (((4412058086786128000 + var_1) ^ (var_4 ^ var_7)));
        arr_40 [i_5 + 1] = var_10;
        var_20 += (min(var_2, ((0 ? 18446744073709551615 : 3127974745))));
    }
    #pragma endscop
}
