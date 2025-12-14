/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-(~var_11))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [2] [2] &= ((((max(var_11, (~var_10)))) ? (((((((min(48, 34)))) >= (arr_0 [22]))))) : ((min(1, 12535429801258905442)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_1 - 2] [i_2] [i_0] [i_3] = (((arr_3 [i_0] [i_1] [i_3]) ? (arr_3 [i_0] [i_1 + 2] [i_2]) : (arr_3 [i_0] [i_1] [i_0])));
                        arr_10 [i_0 - 1] [i_1] [i_0] [i_3] [i_3] [i_2] = arr_8 [i_3] [i_3] [i_2] [i_0] [i_3] [i_3];
                        var_15 = ((~(((arr_4 [i_0] [i_0] [i_0] [i_3]) + (arr_2 [i_0] [i_2])))));
                        arr_11 [i_0] = -26;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_4] [i_0] [i_1] [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_4]) : (arr_7 [i_0] [i_1] [i_1] [6] [i_0] [i_4]))));
                        arr_16 [i_0] [i_4] [i_2] [i_4] |= 1;
                        var_16 = ((!(((arr_12 [i_0 + 2] [i_0 + 2] [i_0]) >= (arr_3 [i_0] [i_2] [i_0])))));
                    }
                    var_17 = (min(var_17, (((-48 | (-127 - 1))))));
                }
            }
        }
    }
    var_18 = ((((((98 && var_6) ? var_3 : ((max(56, var_10)))))) ? (((!(!var_9)))) : var_10));
    #pragma endscop
}
