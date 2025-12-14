/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(arr_3 [i_0] [2])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [9] [i_2] [i_3] [i_4] = (min(((max(19259, 146))), ((-((min(var_6, 60)))))));
                                arr_15 [i_1] [i_4] [i_4] = ((-(arr_1 [3])));
                            }
                        }
                    }
                }
                var_19 = (min(((((((-24 && (arr_4 [i_0] [i_0] [1])))) != var_8))), 26825));
                var_20 |= min(24, -24);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_21 = arr_6 [i_6] [i_5] [i_1] [5];
                            var_22 &= var_16;
                            var_23 = ((((min((~var_15), 24))) != var_16));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (arr_23 [i_7] [3]);
        arr_25 [1] [i_7] = (max(35078, -53));
        arr_26 [i_7] = (!-11248);
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    var_24 = (min(var_24, 1));
                    arr_31 [i_9 + 1] [i_8] [i_9 + 1] = 1;
                    arr_32 [5] [i_9 + 1] = var_5;
                    var_25 = (max(var_25, ((max((min(7466812962847186660, ((max(var_8, var_1))))), (-32767 - 1))))));
                }
            }
        }
        arr_33 [5] [i_7] &= (((max(1797270391, 25380)) != (((((!(arr_28 [i_7] [i_7]))))))));
    }
    for (int i_10 = 3; i_10 < 19;i_10 += 1)
    {
        var_26 = (max(var_26, (((var_16 ? -1333965180481694381 : (1 - 65535))))));
        var_27 -= ((~(16383 > 25387)));
        arr_36 [i_10] [i_10 - 2] = (arr_34 [10] [10]);
        var_28 = (min(var_28, var_10));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_29 -= 3885787080;
        arr_40 [0] = (~218);
        arr_41 [i_11] = 255;
    }
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        arr_44 [i_12] [i_12] = (min((((-5636 || (arr_30 [i_12] [i_12] [i_12] [i_12])))), -797277161));
        arr_45 [i_12] = ((max(37, 2082151643570159126)));
    }
    #pragma endscop
}
