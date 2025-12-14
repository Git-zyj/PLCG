/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = ((((var_13 ? var_14 : (arr_0 [i_0]))) / (arr_0 [i_0 - 2])));
        arr_2 [16] = 0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_1])));
        arr_5 [i_1] = ((~(~0)));
        var_21 = (min(var_21, (~var_5)));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_22 = ((((max(-1813552544667714137, (((-4475923470860578387 && (arr_11 [i_2]))))))) || (max((!-1813552544667714137), (!16)))));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [i_5] [i_5] [i_6] = (((arr_8 [i_2] [0]) ? (((((arr_4 [i_2]) || (arr_6 [i_2]))) ? ((-1813552544667714137 ? (arr_14 [i_2]) : 0)) : 1)) : (max(((var_11 << (((arr_16 [i_2] [i_2]) + 82709163668644143)))), (((!(arr_14 [1]))))))));
                                var_23 = var_7;
                                var_24 = (arr_14 [i_4]);
                                var_25 *= arr_15 [i_4];
                                var_26 = (min(var_8, ((-(arr_11 [i_6])))));
                            }
                        }
                    }
                }
                var_27 = ((-5240688542157142357 & 257410886) >> (3812164939 - 3812164925));
                arr_20 [i_2] [i_3] = (max(((max((arr_10 [i_3]), (arr_14 [i_2])))), (((min(var_13, var_12)) >> (((~-1813552544667714137) - 1813552544667714105))))));
                var_28 -= 0;
            }
        }
    }
    #pragma endscop
}
