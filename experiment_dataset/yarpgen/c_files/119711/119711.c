/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 | (!var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [13] [11] [i_3] [i_0] = (((7075 << (((arr_5 [i_3 - 1]) - 63)))) ^ 1);
                            arr_11 [i_3] [i_1] [i_3] = (1 ^ 2905237166);
                            arr_12 [i_1] [i_1] [1] [i_3] [i_3] = ((((arr_1 [i_3 + 1] [i_3 - 1]) ? ((~(arr_7 [i_0]))) : (arr_8 [i_0] [i_3 - 1] [i_3] [15] [i_3]))));
                            arr_13 [4] [4] [i_2] [i_3] [i_1] &= ((((((!(((var_5 ? var_3 : (arr_6 [i_0] [i_1] [i_2] [i_3])))))))) ^ ((1389730130 ? var_1 : var_13))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (((((((arr_6 [i_0] [i_0] [10] [i_1]) != var_8)))) & (((max(2905237166, (arr_6 [i_0] [i_1] [i_1] [i_1]))) << (arr_2 [i_1])))));
            }
        }
    }
    var_18 = (-127 - 1);
    #pragma endscop
}
