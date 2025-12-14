/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_1] [i_2] = (!7);
                                var_20 = (max(var_20, (((60 == (((!(~110)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 -= (!188);
                                arr_20 [9] [i_1] [i_2] [i_1] [i_6] = (var_17 ^ -111);
                                var_22 = var_12;
                                var_23 = (min((!var_11), (min(((max(var_3, 4))), ((~(arr_8 [i_0] [i_0] [i_2])))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_0] = (min((~-106), var_11));
                }
            }
        }
        arr_22 [i_0] = -6251083509043911027;
        var_24 = (+-18446744073709551596);
    }
    var_25 = (min(1, (min((~127), (min(var_13, var_4))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    arr_31 [i_9] [i_8] [i_7] [i_7] = (~(min(-8533, (arr_23 [i_7]))));
                    arr_32 [i_7] [i_7] [i_9] = ((~(+-55382)));
                    var_26 ^= var_4;
                    var_27 = (max(var_27, ((min((~var_0), (~0))))));
                }
            }
        }
    }
    #pragma endscop
}
