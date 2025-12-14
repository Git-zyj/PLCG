/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_2] [i_2] = ((((var_8 >> (((arr_5 [i_2] [i_0]) - 117)))) ^ ((max((arr_5 [i_2] [i_0]), (arr_5 [i_2] [i_1]))))));
                            var_19 = (min(((max((arr_1 [i_3] [i_0]), -1231397407))), -0));
                            var_20 = (~2058246285);
                        }
                    }
                }
                var_21 = (max(var_21, (arr_8 [i_1] [i_0] [i_0] [i_0] [i_0])));
                var_22 += (!(((((max(0, -1242018196987166057))) ? var_13 : (arr_4 [8] [8] [i_1])))));
                var_23 = (max(((((((var_12 & (arr_8 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? -var_14 : (var_17 | var_6)))), (min((min((arr_4 [i_1] [i_0] [i_0]), (arr_1 [i_1] [i_1]))), (((var_5 < (arr_9 [i_1] [i_1] [i_1] [i_1] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
