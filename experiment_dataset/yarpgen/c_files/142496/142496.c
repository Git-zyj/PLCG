/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((max((var_7 / 1), var_6)) + ((-(~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) != (min(-1182814242582536961, 11489320550467145402))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 &= ((((!0) ? (((arr_12 [i_0] [18] [18] [i_0] [i_0] [i_0] [i_0]) ? 0 : var_4)) : (arr_11 [i_0] [i_1] [11] [i_3] [i_4] [i_0] [i_0]))) | ((((max((arr_4 [i_4] [i_4] [i_4]), var_3))) ? (min(var_0, 18446744073709551611)) : (((min((arr_9 [i_0]), 1)))))));
                                var_15 = 0;
                                var_16 = (3352068633990833658 < (((((~var_8) < ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_1] [i_1]) : (arr_6 [i_3] [i_3] [i_3] [i_3])))))))));
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_1] &= 2802166233;
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_23 [1] [i_5 + 2] [i_5] [i_5] [i_5 + 2] = (((((var_10 ? var_5 : (arr_11 [i_0] [i_5] [i_5] [4] [i_7] [2] [i_7])))) / 1));
                                var_17 = (min(var_17, (((!((min((arr_18 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5 + 2]), (arr_18 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 3] [i_5 - 3])))))))));
                                var_18 = ((((((~(arr_2 [i_0]))))) ? (((-var_2 - ((144 ? var_2 : (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (max((((-(arr_4 [20] [i_1] [i_6])))), (((arr_15 [i_6] [i_6] [i_6]) + 2107019393595896174))))));
                                var_19 = var_8;
                                var_20 += var_3;
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_0] = ((-((((!1492801062) >= (min((arr_0 [i_0]), var_5)))))));
            }
        }
    }
    #pragma endscop
}
