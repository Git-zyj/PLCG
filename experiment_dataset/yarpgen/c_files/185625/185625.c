/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0 + 1] |= 0;
        arr_3 [i_0 + 1] = var_17;
        arr_4 [i_0] = ((((max(1, (arr_1 [i_0 - 2] [i_0 + 3])))) >> (var_2 - 494271619)));
        var_18 = (min(var_18, (((~((6386 ? (arr_0 [i_0 + 2]) : var_11)))))));
        arr_5 [i_0 + 2] [i_0 + 1] = 1;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_19 = var_17;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_20 ^= (min((~1), ((~(arr_12 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_2 + 1])))));
                                arr_20 [i_5 - 1] [i_2] [i_3] [i_2] [i_1] = (((arr_12 [i_5 - 2] [i_5 - 3] [i_5 - 2] [i_5 - 1]) % (((arr_16 [i_1 - 1] [i_2 - 2] [i_2 - 1] [i_2]) ? (arr_11 [i_2] [i_1 + 1] [i_5 - 2]) : (arr_11 [i_2] [i_1 - 1] [i_5 - 3])))));
                            }
                        }
                    }
                    arr_21 [i_2] [i_1] [i_2] [i_3] = 2047;
                }
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
