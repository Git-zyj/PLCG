/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~0) + 2147483647)) >> (var_11 + 1848566533)));
    var_15 = max(var_7, (min(((max(var_3, var_9))), var_13)));
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [11] [i_1] [i_0] [i_0] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [12] = (min(188805795936194964, 7086));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [10] [i_0] = 0;
                                arr_15 [i_0 + 1] [i_0 + 1] [i_3] [3] = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 ^= (arr_2 [8]);
                                arr_24 [i_6] [1] [10] [i_0] [i_6] = ((((max((-32767 - 1), 2833030478))) ? (((var_8 ? -929196892 : var_5))) : var_8));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_2] [1] = (arr_1 [i_2]);
                        var_18 = (max(var_18, (((arr_20 [i_7] [i_1] [i_2] [i_7] [i_2] [i_1] [i_1]) ? (arr_1 [i_0]) : var_4))));
                    }
                }
            }
        }
    }
    var_19 = (~var_1);
    #pragma endscop
}
