/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((var_8 % var_0) << (var_11 - 161)))), (max(var_9, (max(var_2, 9))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((var_0 ? (((arr_1 [i_0]) % 4294967286)) : var_9));
        arr_3 [i_0] [i_0] = 4294967286;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((min(4294967286, 4294967292)))) ? (var_1 * var_5) : ((var_4 ^ (arr_6 [i_2 - 2] [i_2] [i_2 - 2]))))))));
                    arr_11 [i_0] [i_1] [i_2 - 3] [i_1] = (~var_8);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] &= ((var_7 ? (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_2));
                                arr_18 [i_0] [i_1] [i_2] [i_1] [4] = (min((~0), (((7 || (3 / 32767))))));
                            }
                        }
                    }
                    arr_19 [i_0] = (2853181337746784598 || 1075555637);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_24 [i_5] [i_5] = (arr_4 [i_5] [i_5]);
        arr_25 [i_5] = (arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [13] [5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        arr_34 [i_5] [i_6] [i_6] [i_7] [i_8] [i_6] = (arr_9 [i_8] [i_7] [i_6]);
                        arr_35 [i_5] [i_6] [i_7] [i_6] [i_5] [i_8] = ((((((arr_31 [i_7]) / var_6))) || ((((arr_1 [i_5]) % (518544305 << 2))))));
                    }
                }
            }
        }
        arr_36 [i_5] = ((1 << (((arr_21 [i_5]) - 88))));
        arr_37 [i_5] [i_5] = (((0 > 4294967289) || (var_0 << 4294967293)));
    }
    var_14 ^= 16338;
    #pragma endscop
}
