/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_15 = var_3;
                        var_16 = (((((min((arr_4 [6] [i_2] [i_3]), 12448991169528063936)))) >> ((((~(arr_3 [i_0]))) - 27))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_14 [i_0] [14] [i_0] = (((min((arr_2 [i_0 + 2] [i_1 + 1]), (arr_2 [i_0 + 1] [i_1 + 1]))) / (((arr_2 [i_0 - 2] [i_1 - 2]) * 1049030846))));
                        arr_15 [15] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = (max((((~(arr_7 [i_4])))), (((max(var_4, (arr_2 [i_0] [i_1]))) ^ ((min(1049030846, (arr_3 [i_0]))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_17 = ((((!((!(arr_6 [i_0 - 1] [i_0 + 2] [i_0]))))) || (((((min(var_9, var_10))) ? (arr_5 [i_1] [i_1] [i_1 + 1]) : (arr_12 [i_0] [12]))))));
                        var_18 = ((~(-var_12 & var_3)));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_19 *= ((((-(arr_18 [i_5] [i_1] [i_0] [i_0] [i_0 - 1]))) != ((774443179 ? 1 : -1049030847))));
                            var_20 = ((((var_2 ? 2343495566 : (arr_5 [i_6] [i_1 - 1] [i_0]))) * (arr_2 [i_1 + 1] [i_6])));
                            var_21 ^= (((max((arr_11 [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_5]), (arr_11 [i_1 - 1] [0] [i_0 - 1] [0]))) / ((2716049888 ? ((18446744073709551601 ? 1586018868 : -8715475898805671544)) : ((min((arr_2 [i_0] [i_0]), var_7)))))));
                            var_22 = (arr_4 [i_1] [i_1] [i_6]);
                            arr_21 [i_6] = ((max(((var_10 ? (arr_9 [i_6]) : (arr_6 [i_0] [i_2] [i_0]))), (arr_5 [i_0] [i_1] [i_0]))) / (((((max(-2324, 127))) ? var_7 : (arr_11 [i_0] [i_0 + 2] [i_2] [i_5])))));
                        }
                        var_23 = (min(var_23, -1049030847));
                    }
                    arr_22 [i_2] [i_2] [i_2] [10] = ((-(arr_12 [i_0] [i_1])));
                    var_24 = (((min((~4281414653047970307), (max((arr_6 [i_0] [i_1] [i_1]), var_9))))) ? ((max(((~(arr_16 [11] [i_1] [i_2] [i_2] [i_1] [11]))), (arr_19 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])))) : 8);
                }
            }
        }
    }
    var_25 -= ((((((127 | var_12) ? -126 : (-9223372036854775807 - 1)))) ? var_7 : ((774443198 & (min(var_11, 943616934))))));
    var_26 = (((3495147978 ? 3669 : -7965632001888339868)));
    #pragma endscop
}
