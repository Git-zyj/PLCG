/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!var_12) ? var_2 : -8)));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_15 ^= 7;
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_11 [2] [2] [i_0] [i_2] [i_0] [5] [i_0] = ((((min((arr_6 [i_0 - 3] [i_0 - 2] [i_0]), (arr_2 [i_0])))) ? (((min((arr_2 [i_3]), (arr_8 [i_4]))))) : ((((var_10 ? var_1 : 1))))));
                            var_16 = var_11;
                        }
                    }
                }
            }
            var_17 = ((-(140 / 3)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_18 = (min(var_18, (43250 * 1)));
            var_19 = ((arr_9 [i_0 + 1] [2] [5] [i_0 + 1] [i_0 - 1]) && -19902);
            var_20 = ((~((var_12 & (arr_8 [i_0 + 1])))));
            arr_15 [i_0] = (((((arr_8 [i_0]) && 1)) ? var_0 : (var_2 / -19917)));
            var_21 -= (arr_12 [i_5] [i_5]);
        }
        arr_16 [i_0] = ((-8 ? (((min(9, 125)))) : (((56 || (((806622997 ? 28721 : 117))))))));
    }
    var_22 = (min(var_22, var_4));
    var_23 = -19902;
    var_24 = (var_10 + 155);
    #pragma endscop
}
