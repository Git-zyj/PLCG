/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((65313 | 355) << ((((((2965622370084440726 ? var_8 : var_5)) + 118856869)) - 19)))), var_8));
    var_18 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] = var_8;
                    var_19 = ((((((((56206 * (arr_0 [i_0] [i_1])))) | (max((arr_5 [i_0] [i_1 - 2] [i_1 - 2] [i_0]), var_1))))) ? ((((arr_0 [i_1 + 3] [i_0 - 3]) >= ((782185956 ? 0 : var_15))))) : (((!(arr_3 [i_0]))))));
                    var_20 = ((var_15 >> (var_0 + 201380966)));
                    var_21 = ((((((~var_9) ? var_7 : var_9))) != (arr_4 [i_0] [i_1] [i_0] [7])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                var_22 = (min(var_22, var_14));
                arr_13 [i_3] [3] [i_4] = ((!(((((min(var_3, var_6))) ? 946490805 : var_6)))));
                var_23 &= (arr_9 [i_3]);
            }
        }
    }
    #pragma endscop
}
