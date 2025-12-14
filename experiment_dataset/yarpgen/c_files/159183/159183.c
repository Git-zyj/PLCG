/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [8] [i_2] [i_2] = (arr_10 [i_0]);
                            var_14 -= ((max(var_11, 18446744073709551615)));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_15 = (((((22654 ? var_0 : var_2))) ? ((((arr_13 [6] [i_1] [0] [8] [i_4]) ? (arr_3 [4] [9] [i_3]) : var_13))) : 25522));
                                var_16 = (arr_6 [i_3] [i_2] [i_0]);
                                var_17 = ((var_13 > ((var_7 ? 7336 : 17162201291363794248))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [5] [i_4] [i_0] = var_9;
                                var_18 = ((!(((-6370473615685110971 / (arr_0 [i_2]))))));
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1)
                            {
                                var_19 = (((((((((arr_10 [i_0]) ? (arr_5 [1] [i_1] [4]) : 8129230520332688041))) ? 1 : (~var_7)))) ? var_2 : 4294967288));
                                var_20 |= -766809511;
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_21 = (min(var_21, (((1 ? (min(var_0, var_2)) : (((((-1911212683 % (arr_18 [i_0] [1] [i_0] [i_0] [2] [i_0])))))))))));
                                var_22 ^= var_9;
                                arr_20 [i_1] [i_1] = var_7;
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                var_23 = (((((~(arr_12 [i_0] [i_1 - 1] [i_1 - 2] [7] [i_1 + 2])))) ? 480101863 : (arr_6 [7] [i_1 - 1] [i_0])));
                                var_24 = ((1919585770 ? ((-438808176 ? (arr_2 [i_1] [i_1 + 2] [i_7]) : (arr_2 [3] [i_1 - 3] [i_3]))) : 0));
                                arr_24 [7] [i_0] [i_0] [i_1] [i_0] [3] = (max(10353, 3006982794));
                                var_25 = 10681225294792726255;
                                var_26 += (((arr_4 [i_1] [5] [i_7]) ? (arr_22 [i_0] [i_1] [i_2] [9] [i_3] [i_7]) : 12721398494936285934));
                            }
                            arr_25 [i_1] [i_2] [i_1] [i_1] = (min(3389228162, (((5975 ? var_8 : 4294967295)))));
                        }
                    }
                }
                arr_26 [i_1] [i_1] [6] = ((((max((arr_0 [i_1 - 1]), (arr_13 [i_1 - 3] [9] [i_1 - 3] [9] [i_1])))) ? (((arr_13 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 2] [i_1]) ? 850462619658686980 : -10615)) : (54 && var_5)));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 8;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        {
                            var_27 += max((min(var_4, 1)), 1);
                            var_28 = (max((((~((21500 ? 8804309952928780050 : 1))))), (max(((var_12 ? var_5 : var_6)), (arr_23 [i_0] [i_1 - 2] [i_8 + 1] [i_1] [i_8 + 2] [i_9] [i_9])))));
                            var_29 += var_11;
                            arr_33 [i_1] [i_8 + 1] [3] [i_1] = min((arr_14 [2]), ((max(((3202382884755073898 ? -1 : 27845)), (arr_31 [0])))));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_9;
    #pragma endscop
}
