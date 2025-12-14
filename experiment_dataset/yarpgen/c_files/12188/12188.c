/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = 3;
        var_14 = (max(var_14, (arr_1 [6])));
        var_15 = (max(var_15, (arr_0 [0])));
    }
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((max(562932773552128, -1)))));
                                var_18 = (max(var_18, (((var_7 ? (((((min(var_4, (arr_12 [i_1] [i_1] [9] [i_1])))) ? 19200 : (arr_0 [i_1])))) : ((var_5 ? (arr_7 [i_1]) : (arr_10 [i_1]))))))));
                                var_19 -= ((~(min((-562932773552128 != 0), (arr_18 [i_1])))));
                                var_20 = ((-(((arr_9 [i_2]) ? (arr_9 [i_1]) : (arr_9 [i_1])))));
                            }
                        }
                    }
                }
                var_21 = (((1822656488 > 1) ^ var_6));
                var_22 = (1 / 14832116130473282605);
            }
        }
    }
    #pragma endscop
}
