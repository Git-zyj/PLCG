/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_15, (--9)));
    var_20 ^= ((((((((var_12 << (var_1 - 42161))) == var_4)))) >= ((var_10 ? (var_2 % var_17) : 708974667))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((((var_16 >> ((((~(arr_2 [i_0] [i_0]))) + 7)))) ^ ((3257231070 ? 33534 : (arr_2 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = ((((((arr_3 [i_0]) >= (((min((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))))) & var_14));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (arr_1 [i_2] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] = (arr_9 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_23 = min(((var_17 ? (arr_13 [i_0] [i_1 + 1] [i_3] [i_4] [i_4] [i_2] [2]) : (arr_11 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] [i_4]))), (arr_13 [i_0] [i_1 + 1] [i_2] [i_0] [i_1 + 1] [i_1] [i_3]));
                                arr_15 [i_2] [i_0] [3] [i_0] [i_0] = (((((arr_12 [i_2] [i_3] [i_2] [i_2]) && var_0)) ? ((var_17 & (min((arr_11 [i_3] [i_1] [i_2] [i_3] [i_4] [i_2]), (arr_12 [i_0] [i_0] [i_2] [i_2]))))) : (((-(arr_8 [i_2] [1] [i_2]))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] |= var_0;
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = -var_5;
                                var_24 *= ((var_0 ? (arr_7 [i_1] [i_4]) : (((((-1214999775 ? var_1 : 11225))) ? ((min(15, -1214999760))) : ((-1214999764 ? var_10 : var_10))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            arr_20 [13] = var_14;
            var_25 = ((32767 != (((!((min(var_1, (arr_1 [i_0] [i_5])))))))));
        }
    }
    #pragma endscop
}
