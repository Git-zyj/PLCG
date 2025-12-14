/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((~((var_2 ? var_6 : var_9))))) ? (((!(((var_11 ? var_9 : var_10)))))) : ((((min(106, var_8))) ? var_8 : var_17))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = max(((((arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]) > var_4))), (min(((var_14 ? var_16 : (arr_6 [i_0] [i_0]))), (((arr_3 [i_3] [i_3 - 2]) ? var_13 : var_6)))));
                        var_20 &= (min(var_15, ((1227109716 ? -var_8 : var_11))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((((!((((arr_0 [i_0] [i_0]) ? (arr_6 [8] [i_4]) : var_7)))))) >= ((-(arr_12 [i_4] [i_5] [i_5] [i_4]))))))));
                        var_22 ^= (arr_2 [i_0] [i_0]);
                        var_23 -= ((+((-4426989835668526485 ? (((arr_16 [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_9 [i_6] [i_6] [i_6]))) : (arr_12 [i_0] [i_4] [i_5] [i_6 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
