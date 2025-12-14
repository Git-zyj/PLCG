/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((arr_3 [i_1]) != (arr_3 [i_1])));
                var_17 = -2147483644;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_18 = ((((min((var_2 / var_3), ((-1596317210537731426 ? 118 : (arr_1 [i_3])))))) ? (((min((arr_3 [i_1]), var_5)) % var_0)) : (min(var_5, ((1596317210537731403 ? (arr_0 [i_2] [i_1]) : var_5))))));
                            arr_8 [i_0] [i_0] [i_1] [i_0] = (max(((((arr_7 [i_3] [i_1] [i_1] [i_3 + 1]) ? (((arr_6 [i_0] [i_0] [19] [19]) ? (-2147483647 - 1) : 24)) : (arr_7 [i_0] [i_1] [i_2] [i_1])))), (((arr_7 [i_3 + 1] [i_1] [i_3 - 1] [i_3]) ? 0 : ((((arr_1 [23]) ? -120 : var_7)))))));
                            var_19 = var_3;
                            var_20 = (min((min((arr_7 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 1]), (arr_7 [i_3 - 1] [i_1] [i_3] [i_3]))), ((((arr_7 [i_3 - 1] [i_1] [i_3] [i_3]) != 1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 = 128;
                            var_22 = ((((min((((arr_6 [i_0] [i_0] [i_0] [12]) - var_15)), (arr_12 [i_1] [6] [i_1] [0])))) ? (((arr_1 [i_5 + 4]) % 536870910)) : ((((((var_1 ? var_2 : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? ((min(-24966, (arr_6 [i_5 + 4] [i_4] [i_1] [i_0])))) : 69)))));
                            var_23 = ((min(((var_9 ? 125 : (arr_1 [i_1])), (arr_9 [i_1] [i_0])))));
                            arr_13 [i_0] [i_1] [i_4] = (arr_2 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((min((12 & var_15), (var_14 | var_14)))) ? (((((min(var_13, var_0)) > var_10)))) : (((var_9 ? var_9 : var_8)))));
    #pragma endscop
}
