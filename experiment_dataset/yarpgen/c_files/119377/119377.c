/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, 4783130655707149321));
                        var_14 ^= (((((-(arr_7 [i_0] [i_1] [i_0])))) ? (((!var_7) ? ((((-4783130655707149321 < (arr_3 [0]))))) : ((-(arr_12 [i_0] [i_0] [i_0] [i_0]))))) : -1));
                    }
                }
            }
        }
        var_15 = var_12;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_20 [i_0] [i_0] [i_0] = -8398855421894144596;
                        var_16 = (((arr_12 [i_6 + 1] [i_6] [i_6] [i_6]) / var_1));
                    }
                }
            }
        }
        var_17 = (max((max(((9860347649009197285 ? 2939151203 : (arr_4 [i_0]))), ((((arr_0 [i_0]) ? var_9 : var_11))))), (((87 ? -var_2 : var_4)))));
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                {
                    var_18 ^= ((-((~(arr_7 [i_9] [4] [i_7])))));
                    arr_29 [i_9] [i_7] [i_7] = (min(var_2, -var_12));
                    arr_30 [i_8] [i_8] [i_7] [i_7] = (max(((((max(33159, var_11))) ? (var_7 + var_4) : -var_3)), (((((max((arr_1 [i_7 - 1]), var_4))) < ((103 ? -89 : var_5)))))));
                }
            }
        }
    }
    #pragma endscop
}
