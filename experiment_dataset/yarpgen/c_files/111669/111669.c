/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (!7);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 |= 0;
                    arr_6 [i_0] [i_0] [i_2] [i_2] = (((arr_0 [1]) > var_8));
                    var_21 = 39780;
                    var_22 = ((4294967295 ? (arr_2 [i_0]) : 4294967294));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 += var_16;
                                arr_12 [i_0] [i_0] = ((arr_7 [0]) ^ var_3);
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = ((arr_1 [i_0]) ? 16646144 : (arr_1 [i_0]));
        var_24 ^= arr_0 [i_0];
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_5] [11] = (max(((-(arr_22 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]))), (((arr_22 [i_6 + 1] [9] [i_6 - 1] [i_6 - 2]) ? (arr_22 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 1]) : (arr_22 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 2])))));
                    var_25 = (arr_15 [i_5]);
                    var_26 -= ((((min((arr_16 [i_6 + 1] [i_6 - 2]), 1))) ? ((min(33403, (arr_17 [i_7])))) : (((min(0, 1))))));
                    arr_24 [i_7] [i_7] [11] [i_7] = (((((arr_19 [i_6 - 2] [i_6 - 2] [i_6 + 1]) != (arr_19 [i_6 - 2] [i_6 - 1] [i_6 - 1]))) ? (arr_19 [i_6 - 2] [i_6 + 1] [i_6 - 1]) : (arr_19 [i_6 + 1] [i_6 - 2] [i_6 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
