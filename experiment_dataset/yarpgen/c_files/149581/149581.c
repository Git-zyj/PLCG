/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_15 = (((arr_4 [i_0]) & -0));
                    var_16 = 1;
                    var_17 = (-9223372036854775807 - 1);
                }
                arr_10 [i_0] [i_0 + 1] = var_12;
                var_18 = (max(var_18, ((max((((var_1 % var_9) ? (arr_5 [i_0 + 1] [i_0 + 1]) : (max(12591317163301208601, var_9)))), (arr_0 [i_0 + 1]))))));
                var_19 = (((((15 < ((max(5156, var_14)))))) * (arr_9 [i_0 + 1] [i_0] [i_0])));
            }
        }
    }
    var_20 = (max(((var_12 ? (5855426910408343022 * var_5) : (!var_5))), (!var_0)));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_19 [0] [4] [i_3] = ((+(((arr_9 [i_3 + 3] [i_3 - 4] [i_3 + 1]) ? 12591317163301208600 : 2080259042631192478))));
                var_21 = (min(var_21, (((((max((((arr_11 [1] [i_4]) | 7191811626143389190)), (arr_16 [i_3] [6] [i_3 - 3])))) ? (arr_17 [i_4]) : (max((((arr_12 [i_3]) ? (arr_4 [i_4]) : var_13)), (var_1 / var_4))))))));
                var_22 -= ((((((1 ? var_12 : var_8)) != ((((!(arr_13 [i_3 + 3] [i_3]))))))) ? ((max(((-71 ? var_2 : (arr_14 [1]))), (arr_11 [i_3] [i_3 + 1])))) : var_12));
            }
        }
    }
    var_23 = (max(var_23, var_5));
    #pragma endscop
}
