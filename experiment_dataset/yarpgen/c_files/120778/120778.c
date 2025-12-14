/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 -= 11391;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_21 = (max(var_21, (arr_7 [i_0] [i_1] [i_2 + 1])));
                            arr_14 [13] [i_1] [0] [5] [11] = (arr_10 [i_2 - 2] [8] [i_3]);
                            var_22 = (arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 2]);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [i_3] [i_2] = 0;
                            arr_19 [i_3] [8] [i_3] [i_3] [i_3] = (arr_11 [i_2 + 2] [i_2] [i_2] [11] [i_2 - 2] [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = (max(var_23, 167));
                            var_24 = 21;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_25 ^= (arr_10 [i_2 - 2] [i_2 - 2] [2]);
                            arr_25 [12] [i_1] [i_2] [1] [i_7] = var_2;
                        }
                        var_26 = 11;
                        arr_26 [19] [i_1] [i_2] [i_1] = 47961;
                    }
                    arr_27 [i_0] [i_0] = 97;
                }
            }
        }
    }
    #pragma endscop
}
