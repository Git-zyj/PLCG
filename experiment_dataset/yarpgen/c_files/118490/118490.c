/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((((~(arr_0 [i_0])))) ? (~33292288) : ((((arr_1 [i_0 - 1]) ? (arr_0 [i_0]) : 10)))));
        arr_4 [16] &= ((1 ? ((var_5 ? (arr_0 [0]) : ((var_3 >> (3553905318141855557 - 3553905318141855553))))) : (arr_0 [0])));
    }
    var_12 = var_6;
    var_13 = ((var_8 ? (((0 && (((6119388404215154711 ? 1 : var_5)))))) : ((~((min(var_5, 1)))))));
    var_14 ^= ((max((((var_11 ? var_5 : var_10))), (max(var_6, var_4)))) < (~0));

    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = ((!(((~var_3) > ((1 ? -8744764236397536334 : (arr_5 [i_1])))))));
        arr_9 [i_1] = (((((((arr_5 [i_1]) > 156)))) ? (((45991 * ((1 ? 1 : 1))))) : (!1)));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_12 [12] [i_2] &= (((max((min(8744764236397536337, 1)), var_11)) != 38));
        arr_13 [i_2] = (((1 - 1) - (arr_10 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_21 [8] [i_3] |= (max((((arr_14 [i_4] [i_3]) ? (arr_14 [i_3] [5]) : (arr_14 [i_3] [i_4]))), (((((min(var_2, var_11))) - -1)))));
                    arr_22 [i_2] [i_2] = (min((~-8744764236397536352), (!8744764236397536351)));
                }
            }
        }
    }
    #pragma endscop
}
