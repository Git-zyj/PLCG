/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 *= ((((!((min(48, (arr_5 [i_0] [i_1] [i_2] [i_3])))))) ? ((min((arr_2 [i_0] [i_1]), (((((arr_6 [i_0] [i_4] [i_2] [i_0]) + 2147483647)) << (244 - 244)))))) : ((-(arr_3 [0] [i_1] [i_4])))));
                                var_15 = (~-9223372036854775786);
                            }
                        }
                    }
                    var_16 = (((8 > 5919) ? (((min(9223372036854775786, 9223372036854775786)) * (((((arr_7 [i_1] [i_1] [i_1] [i_1]) >= var_6)))))) : ((-(min(48823, 9223372036854775786))))));
                    var_17 = (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    arr_13 [i_0] [10] [10] [11] = (((((arr_7 [i_0] [i_0] [i_1] [1]) ? (arr_7 [i_0] [i_2] [i_2] [i_1]) : (arr_7 [i_0] [i_1] [5] [i_2]))) - var_1));
                }
            }
        }
    }
    var_18 = -var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_5] [i_6] = (((arr_17 [i_6 + 1] [i_6 + 1]) ^ var_5));
                var_19 = (!((((arr_17 [i_6 + 1] [i_6 + 1]) ? -9223372036854775786 : (arr_17 [i_6 + 1] [10])))));
            }
        }
    }
    var_20 = -var_11;
    #pragma endscop
}
