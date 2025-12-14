/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_18 = (((arr_4 [i_0] [i_0] [i_2]) ? var_4 : (arr_4 [i_0] [i_0] [i_2])));
                    var_19 -= ((+(((arr_2 [2]) % (((arr_7 [i_0] [i_0] [i_0]) >> (var_7 + 32134)))))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_20 = ((-1 - (1 * 11980)));
                        var_21 += (max((arr_3 [i_2 + 2] [i_0 + 1]), (~-4317)));
                        var_22 = ((((max((arr_6 [3] [i_0]), (arr_5 [i_3] [9])))) < (arr_8 [i_3] [i_3 - 1] [15] [i_3] [15] [i_3])));
                        var_23 = (((((((arr_6 [i_0 + 2] [i_2 - 1]) >= (arr_6 [i_0 + 1] [i_2 + 1]))))) & (-4511119841837579249 - 255)));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_24 = var_0;
                        var_25 = (((arr_3 [i_0 - 1] [i_1]) << (((arr_3 [i_1] [i_1]) - 18246))));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_5] [i_1] [i_1] = ((((~(arr_7 [1] [i_1] [16]))) >= (((-2147483647 - 1) & 4511307852296085721))));
                    var_26 -= ((var_14 ? ((((-2147483647 - 1) != 31))) : (((arr_14 [i_0] [i_0] [i_1] [i_5]) ? (-2147483647 - 1) : (arr_6 [1] [i_1])))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_27 = (arr_0 [i_1] [i_1]);
                    var_28 = (arr_11 [i_0] [i_0]);
                }
                var_29 = arr_16 [4] [i_0];
                var_30 -= (0 == 98);
                var_31 = (arr_21 [6] [i_1] [i_1]);
            }
        }
    }
    var_32 = ((var_13 + ((var_15 ? 255 : ((9185645986441239917 ? 0 : var_1))))));
    var_33 -= (((~-4511119841837579237) ^ var_9));
    #pragma endscop
}
