/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((max(var_2, 93)))));
    var_18 = (min(var_18, var_15));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_19 = var_13;
                    arr_8 [i_2] [i_1] [i_2] = (arr_0 [i_0 + 1] [i_0 - 1]);
                    arr_9 [i_2] [i_1] [i_1] = (((((235 ? (arr_4 [i_1] [i_0 - 1] [i_2]) : (((arr_3 [i_0] [i_2]) >> (-2753913686208673932 + 2753913686208673940)))))) ? 103 : ((-(arr_0 [i_0 - 1] [i_0 - 1])))));
                    var_20 = var_15;
                    var_21 = (min(var_21, (((2753913686208673933 ? ((min(((-1189 ? (arr_2 [i_0] [i_0 - 1] [i_2]) : (arr_5 [i_0] [i_1] [0] [i_1]))), (var_11 != -2753913686208673927)))) : (arr_3 [i_0 + 2] [i_2]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] = (-(arr_3 [i_0 + 1] [i_0 + 2]));
                    var_22 *= ((!(arr_4 [i_0] [i_0] [i_0])));
                }
                var_23 = ((((min(93, (arr_2 [i_0 + 1] [i_1] [i_0 + 2])))) * (var_8 > var_8)));
            }
        }
    }
    #pragma endscop
}
