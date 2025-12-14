/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((4188846225 ? 104 : -23))) ? ((((((arr_1 [i_0]) ^ var_14))) & (13808264210984299787 & var_8))) : (((32758 * (min(-1923234115, (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 1] [i_2 + 3] = ((-1923234115 ? var_15 : ((~((9 ? 12504862604829004739 : 48))))));
                    arr_8 [i_0] [i_1] [i_2] = ((((((!(5941881468880546877 <= -472945459))))) * (max(197146551853847875, 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = 3470137436;
                                arr_14 [0] [0] [0] [1] [i_4] = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_9;
    var_20 = (((max((13 | 0), (-95 * 37914))) / ((-var_13 ? -472945459 : var_7))));
    var_21 = ((var_7 <= (~var_4)));
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_19 [i_6] [i_5] &= ((!(1 * 32753)));
                arr_20 [5] [5] = -831176993533130322;
            }
        }
    }
    #pragma endscop
}
