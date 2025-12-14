/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= 64;
    var_11 ^= ((!(-7612987014420369394 && 1)));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = var_0;
            arr_7 [i_0] [i_0] = ((-((((arr_4 [i_0]) != (arr_4 [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0 + 1] [i_0] = (((~-7612987014420369404) * (var_1 + 1)));
                        var_12 = (max(var_12, (((1 ? 224 : 1)))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((1 << (var_8 - 53903))) + (arr_13 [i_0] [i_0])));
                        arr_16 [i_0] [i_2] [i_1] [18] [i_0] = var_1;
                    }
                }
            }
            var_13 = 1;
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_14 = (min(var_14, (((-(min(var_3, (((arr_19 [i_0] [i_4] [i_4]) ^ 70368744177664)))))))));
            var_15 = (max(var_15, 195));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_16 = (min(var_16, var_1));
                            var_17 = ((((~(arr_10 [i_8] [i_0] [i_6] [i_0] [i_0]))) | var_3));
                            arr_35 [i_7] [i_7] [i_0] [i_7] [i_7] = ((((!(arr_20 [i_6] [i_5] [16])))));
                        }
                    }
                }
            }
            arr_36 [14] [i_0] [14] = (arr_20 [i_0] [i_0 - 1] [i_0]);
            var_18 = var_8;
            arr_37 [i_0] [i_5] [i_0] = (arr_31 [i_0] [0] [i_5] [i_5] [i_5] [i_0]);
            var_19 *= 39584;
        }
    }
    #pragma endscop
}
