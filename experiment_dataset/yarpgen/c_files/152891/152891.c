/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 & (((var_8 ? var_4 : (~var_1))))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_4 [20] = (!32767);
        arr_5 [i_0] = ((((min(4032879162, (!var_8)))) ? (~-32755) : (((((arr_3 [i_0]) | var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_12 [i_0] [1] = (((((~19964) ? (max(11460046219471217361, (arr_6 [i_1] [i_0 + 1]))) : (3201715014956945948 ^ 6113220364246674970))) | ((((arr_7 [i_0 + 2] [i_0 + 1] [i_0 + 2]) << (arr_7 [i_0 - 1] [i_0 + 2] [i_0 - 1]))))));
                    arr_13 [i_0] = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 ^= ((~((((((-1 ? 6113220364246674964 : 2147483646))) || 354472589)))));
                                var_13 -= ((((-(arr_6 [i_0 - 1] [i_1]))) - (4294967287 & -14936)));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 17;i_7 += 1)
            {
                {
                    var_14 = (6102158584667089900 + -6102158584667089907);
                    arr_29 [i_5] [i_6] [i_5] = (min(((min((max((arr_11 [i_6] [i_6]), -42)), var_4))), (((arr_15 [i_7 - 1] [i_6] [i_7 - 1] [i_6] [21] [i_7]) ? (((!(arr_16 [i_5] [i_6] [i_7])))) : (arr_11 [i_7 + 3] [i_7 + 2])))));
                    arr_30 [i_5] = (min(32754, ((var_4 ? (var_3 + -2747) : 2680803495))));
                    arr_31 [i_5] [i_5] = (min(var_8, (~var_0)));
                    arr_32 [2] [2] [i_5] = (((~-6113220364246674944) ? ((var_9 ? var_8 : (max(12962846225522472195, 3652789612779117185)))) : (((min((!6113220364246674970), (arr_28 [i_5] [i_7 + 3] [i_7 + 3] [i_6])))))));
                }
            }
        }
        var_15 = (max(var_15, ((max((-1 * -17), (((arr_24 [i_5] [14]) / (arr_24 [i_5] [6]))))))));
    }
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_48 [i_8 + 1] [7] [i_11] [7] = (min(-103, (~34757)));
                            var_16 = (~-2747);
                            var_17 = -10677;
                            arr_49 [i_8] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 - 2] [i_8 - 1] = ((0 ? (((arr_19 [i_8 - 3] [i_9]) ? ((1 ? -6102158584667089901 : 60)) : -1)) : 32760));
                        }
                    }
                }
            }
            var_18 = (min(var_18, ((max((max((arr_1 [i_8 + 1]), var_9)), var_6)))));
            var_19 = (min(var_19, 2047311775));
        }
        arr_50 [i_8] = ((-((-(min(3948655257, 3180033782))))));
    }
    #pragma endscop
}
