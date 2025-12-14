/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 ^= (((-(arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = var_5;
        var_16 = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 = -20797;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = ((~(((arr_11 [i_1] [i_2] [i_2] [i_2]) ? 29989 : (1 ^ 191)))));
                                var_18 *= ((((max(var_0, (max(var_0, var_13))))) == (arr_11 [i_4] [i_2] [i_4] [i_2])));
                                arr_17 [i_5] [i_1] [i_3] [i_1] [i_1] = (((((arr_3 [i_2] [i_3 + 1]) - var_5)) == (((((((arr_14 [i_1] [4] [4] [i_4] [i_1]) - var_9))) ? 1 : 808729174)))));
                                arr_18 [i_5] [i_1] [i_3] [0] [i_2] [i_1] [i_1] = var_8;
                                arr_19 [i_5] [i_1] [i_3 - 1] [i_1] [i_1] = ((((249 ? 255 : 255))));
                            }
                        }
                    }
                    arr_20 [i_3] [i_1] [i_3] [i_3] = (min(((max(17383, -555397310))), (arr_4 [i_1] [i_1])));
                }
            }
        }
        var_19 = var_8;
    }
    var_20 = var_6;
    var_21 = (min(var_2, ((-var_6 ? var_11 : var_10))));
    #pragma endscop
}
