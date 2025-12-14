/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] |= ((+(((!var_8) ? ((16256 ? var_4 : var_9)) : (((((arr_1 [i_0] [i_1]) || (arr_0 [10] [i_1])))))))));
                arr_6 [i_1] [i_1 - 1] = ((((((((24643 ? var_0 : (arr_4 [i_0 + 3]))) < (var_1 <= var_7))))) - 524459257967219285));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [9] [i_3] [9] [i_2] = (((((var_2 % (arr_2 [i_0 + 2])))) || ((((var_9 != var_8) ? (((var_7 ? (arr_10 [i_3] [i_3 - 1] [i_3] [i_3]) : var_11))) : ((var_0 ? 5506654786270685442 : 170)))))));
                            arr_14 [i_0 + 2] [i_3] [i_2] [1] = ((!(arr_2 [6])));
                        }
                    }
                }
                arr_15 [i_0 + 3] [i_0] [i_0] = (-1567612354 ? 123 : 40896);
            }
        }
    }
    #pragma endscop
}
