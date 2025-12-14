/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (-(min(-2430536250034743107, 1)));
                arr_5 [i_0] = ((!(65527 && 1)));
                arr_6 [i_0] [i_0] [i_0] = -4;
                arr_7 [2] &= ((((((arr_1 [i_0 - 1]) + (var_15 - var_12)))) ? ((((var_1 ? 1 : (arr_1 [i_1]))))) : (((var_9 < var_15) ? (((1 >> (((arr_0 [i_0]) - 168))))) : (-1924949281 + var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [i_1] [i_1] [i_2] = ((((((1924949276 ? 0 : 1))) && ((max(-287662833, var_13))))));
                            arr_15 [i_0] = (((arr_1 [i_3]) ? var_13 : ((((max(0, -1))) ? ((3292944560179666449 ? var_11 : 7)) : (((1346882402 ? 0 : 2147483639)))))));
                            arr_16 [i_0] [i_0] [i_1] [i_2] [7] [i_3] = ((((((((-1066587232434680468 ? (arr_11 [i_0] [i_0]) : var_4))) ? (min(15190756736339097950, 1223233908)) : ((((arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [18]) ? 100 : -459686016)))))) ? (((arr_13 [i_2 + 1] [i_2 + 4] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 + 1]) | (((21 ? (arr_10 [19]) : var_5))))) : (((((((arr_13 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_3]) + var_15))) ? var_9 : (arr_8 [i_0]))))));
                            arr_17 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = (arr_9 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_18 = ((~(((!(-1924949281 + var_8))))));
    var_19 = (((((var_16 ? (min(var_1, var_14)) : (27298 || -70)))) == ((var_0 ? (-5181500625520199224 / var_13) : ((-27309 ? var_2 : 3255987337370453671))))));
    #pragma endscop
}
