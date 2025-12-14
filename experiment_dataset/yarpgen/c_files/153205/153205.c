/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((var_6 % (arr_1 [i_0] [8])));
                var_12 *= 1;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 += ((~(((arr_3 [i_0 - 1] [i_0 - 1]) ? var_1 : (arr_3 [i_0 - 1] [i_0 - 1])))));
                    var_14 += var_9;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] = (((2054456867 & var_3) ? (arr_7 [i_0] [i_1] [8]) : (-3870048974 / -var_0)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_15 = (arr_2 [i_5] [i_3]);
                                var_16 *= 3870048985;
                            }
                        }
                    }
                    arr_20 [i_1] [1] [i_3] [i_0] = var_6;
                    var_17 += (arr_5 [i_0]);
                }
                arr_21 [i_0] = (((((((arr_19 [i_0] [i_1]) > 1)) ? ((var_9 ? var_2 : (arr_11 [i_0] [i_0] [i_0]))) : (!424918340))) * (((arr_8 [i_0 + 1] [i_0 + 1]) << (arr_8 [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
