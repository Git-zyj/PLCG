/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_11;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_2] = ((-4888 == (((!(!-737558457))))));
                    arr_9 [i_2] = (min((arr_4 [i_1] [i_1]), -var_3));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [i_1] [i_3] = (max(43645, 44789));
                    arr_13 [i_0] [i_1] = ((~(arr_7 [i_3] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_3] [i_4] [i_0] = ((-var_11 ? (((1 ? (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_11 [i_4] [i_4] [i_4 + 1] [i_4])))) : (var_6 + var_0)));
                                arr_21 [i_1] [i_1] [i_4] = (max(16982364474864943957, ((min(-122, 48423)))));
                                arr_22 [i_1] [i_4] [i_4] [i_5] = (((min(((min(var_2, 59125))), (~2807642599))) * 31230));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    arr_25 [i_0] [i_6] [i_6] = (arr_18 [i_0] [i_0] [i_1] [i_1] [i_0]);
                    arr_26 [i_6] [i_1] [i_1] [i_1] = (max(var_13, (arr_6 [11] [11] [i_6])));
                    arr_27 [i_6] [i_6] = (arr_10 [i_6] [i_1] [i_0]);
                }
                arr_28 [i_0] = (max((min(((min((arr_19 [i_1] [i_1] [i_0] [i_1] [i_0]), -793331656))), 7551344413561551852)), (((-((min(var_7, var_14))))))));
            }
        }
    }
    var_15 = (!var_3);
    var_16 = 9223372036854775797;
    #pragma endscop
}
