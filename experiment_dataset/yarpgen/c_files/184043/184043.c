/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_2] = (max(var_3, 18446744073709551607));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = (max((arr_5 [i_2] [1] [i_0 + 1]), ((((max(var_7, var_14))) ? 28 : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                var_15 *= ((var_0 ? (min(((max((arr_3 [i_4 - 1] [i_4] [i_3]), -4))), (min(var_2, var_11)))) : (max(((((arr_8 [2] [i_3] [i_4] [i_4]) ? var_8 : var_1))), var_2))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_22 [i_5] = (min(30, 437332231));
                            var_16 = (min(var_16, (((!(arr_7 [i_6] [i_5 + 1] [i_6]))))));
                        }
                    }
                }
                arr_23 [i_3] [i_3] [i_3] = ((max(((min(9156, var_11))), ((16625718830975033583 | (arr_13 [i_3]))))) ^ ((((arr_2 [i_3]) ? var_0 : (((max((arr_20 [i_3] [i_3] [i_3]), var_3))))))));
                var_17 = ((((((var_5 ? 41 : (arr_19 [i_4] [i_4] [i_4 - 1])))) ? (max(19, 3)) : (~var_5))));
                var_18 ^= ((((min(1713982577, -27476))) && ((((arr_17 [i_4 + 1] [i_4] [i_4 + 1] [i_4]) + var_11)))));
            }
        }
    }
    #pragma endscop
}
