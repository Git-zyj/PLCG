/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 -= var_0;
                    var_12 = (min((((((-29695 ? var_9 : (arr_6 [i_2])))) ? ((29705 ? var_8 : (arr_2 [i_0]))) : ((-29695 ? -29709 : 511)))), ((((max(var_0, -11249))) ? -29688 : (~29705)))));
                    arr_8 [4] [8] [i_0] = ((var_5 ? ((-11249 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 1]))) : ((max(-4780, (arr_5 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_0] [i_4 - 2] [i_4 + 3] [i_2 - 1] = (((arr_5 [i_2 + 1]) ? (((((var_6 ? (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4 - 2]) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3])))) ? var_8 : ((7749 ? -4801 : 19702)))) : ((min((min(1, -29677)), (max((arr_3 [7]), var_7)))))));
                                arr_15 [i_1 - 1] [i_1 - 1] [9] = arr_3 [3];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
