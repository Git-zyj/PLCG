/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= -8852060551746548592;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((((((((arr_2 [i_0]) ? (arr_0 [i_1]) : var_5))) ? (arr_1 [1]) : var_10))), -8852060551746548592)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_16 = (((((min(-8852060551746548592, var_3) + 9223372036854775807)) >> (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_4 + 3]) - 13767)))));
                                arr_13 [i_3] [i_1] [i_2 - 1] = ((+((-8852060551746548592 ? (arr_0 [i_2 + 1]) : (arr_5 [i_1] [i_2] [i_3] [i_4])))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [6] |= ((18446744073709551615 % (arr_9 [i_0 + 1])));
                    arr_17 [i_0] = (((arr_6 [i_0] [i_1] [i_5]) ? 1346926353452595142 : var_7));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_17 = ((-((24 ? 8852060551746548589 : var_5))));
                    arr_22 [i_0] [i_1] = (arr_18 [i_1] [i_0 - 1]);
                }
                var_18 = (((min(-1346926353452595143, -55)) & (arr_7 [5] [5] [5] [i_1])));
            }
        }
    }
    #pragma endscop
}
