/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = var_4;
                var_15 = (min(var_15, (min((((arr_2 [i_1]) ? (arr_3 [i_0] [i_1] [i_0]) : var_13)), 339146191))));
                var_16 ^= 2770380462;
            }
        }
    }
    var_17 = (~var_11);
    var_18 &= ((((min(var_0, var_9))) ? ((((((var_10 ? var_7 : var_9))) ? ((var_1 ? var_13 : var_5)) : (var_6 < var_8)))) : (min((!8327653742124383882), (min(2770380462, var_1))))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_16 [i_6] [i_6] [i_2] [i_4] [i_2] [i_3] [8] = (min((var_2 != var_10), ((((var_11 ? var_7 : (arr_11 [i_2] [i_2] [i_4] [i_5]))) > (((var_10 ? var_13 : var_7)))))));
                                var_19 = (max(var_19, 16056825));
                                var_20 -= ((var_9 > var_8) ? (((((min((arr_5 [i_2]), (arr_10 [6] [i_4] [i_5] [i_6])))) ? (arr_9 [i_2 - 1]) : var_7))) : ((((min(65535, 140644947))) ? ((4154322341 ? (arr_7 [i_3]) : var_11)) : (var_7 | var_10))));
                                arr_17 [i_2] [i_5 - 2] [7] = ((((min((arr_14 [i_6 - 2] [i_2] [i_3] [i_2] [i_3]), (((1236333568 ? (arr_11 [i_2] [i_3 + 2] [i_4] [i_5]) : (arr_10 [i_2] [i_3] [i_4] [i_4]))))))) ? ((((min(117852040, (arr_8 [i_6] [i_6 - 1])))) ^ (((arr_13 [i_2 + 1] [i_2 + 1] [i_4] [i_5]) ? var_8 : (arr_13 [i_6] [i_2] [i_3 - 2] [i_2]))))) : (min((((arr_6 [i_2]) ? (arr_4 [i_6] [i_2]) : var_8)), ((((arr_5 [i_2]) ? (arr_1 [14]) : var_3)))))));
                                arr_18 [i_2] [i_3] [i_4] [i_2] [i_5] [i_5] [i_6] = 2770380471;
                            }
                        }
                    }
                    arr_19 [i_2 + 1] [i_3] [i_2] [i_4] = (arr_2 [i_2]);
                    var_21 = (arr_12 [i_2] [i_3] [i_3] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
