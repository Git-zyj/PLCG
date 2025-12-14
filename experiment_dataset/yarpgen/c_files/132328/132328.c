/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_2 ? (0 / 1593888915) : (min(var_11, 1593888905))))) - ((var_1 ? var_6 : (0 * 0)))));
    var_13 = (max(15, 57));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 += 1;
                                var_15 -= (((((53452 <= (min(var_0, (arr_5 [i_1] [i_0])))))) >> ((((~(arr_7 [i_4] [i_4 + 1] [i_4] [i_4]))) - 6966414985916289847))));
                            }
                        }
                    }
                }
                arr_13 [i_1] = var_0;
                var_16 -= (((((var_7 < (1 && var_6)))) | (min((arr_5 [20] [i_1]), (arr_5 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
