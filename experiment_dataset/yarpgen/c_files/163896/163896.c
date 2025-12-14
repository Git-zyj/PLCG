/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 24592;
        arr_3 [i_0] = (~27640);
        var_16 = (((((max(65535, 9455)))) ^ (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] = 3062448976;
        arr_8 [i_1] = ((24566 + (((arr_0 [i_1] [i_1]) ? (arr_0 [i_1] [i_1]) : 306413913))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_17 += ((-(((arr_12 [i_3] [i_2]) ? 3451841789 : 0))));
            arr_17 [i_2] [i_2] [i_3] = (((!-9451) ? 1 : 3451841771));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_18 = 37557;
                            var_19 = ((18446744073709551615 | (arr_19 [i_2] [i_2] [i_2])));
                            arr_26 [i_6] [i_3] [i_2] [i_2] [i_6] = ((!(arr_15 [i_4])));
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_24 [i_5] [i_5] [i_5] [i_5]);
                            arr_28 [i_2] = -30233;
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, 96));
        arr_29 [i_2] [i_2] = (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]);

        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            var_21 = ((~(max(var_2, 4962165952289491233))));
            arr_32 [i_2] [i_2] = (arr_18 [i_7] [i_7] [i_7]);
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            var_22 = ((min(843125506, (1 ^ 32479))));
            arr_35 [i_2] [i_2] [i_2] = (((arr_34 [i_2] [i_2]) + (arr_22 [i_2] [i_2])));
            var_23 ^= (((arr_12 [i_2] [i_8 + 4]) + -24567));
            var_24 = (min(var_24, 1));
        }
    }
    var_25 = -var_0;

    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_38 [i_9] = (32479 | 5298972680265650721);
        arr_39 [i_9] = (((arr_37 [i_9]) ? (arr_36 [i_9] [i_9]) : (arr_36 [i_9] [i_9])));
        var_26 = 507;
    }
    var_27 |= (~18446744073709551615);
    var_28 &= var_14;
    #pragma endscop
}
