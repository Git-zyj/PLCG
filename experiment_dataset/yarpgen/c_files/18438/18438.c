/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] [i_2] = ((!var_8) || ((((((min((arr_0 [i_0]), (arr_4 [i_0] [i_1] [i_2]))))) ^ (min((arr_1 [i_0]), var_1))))));
                    var_17 = (((((arr_6 [i_0] [i_1] [i_2 - 1]) ? (((arr_1 [i_2]) ? 2598740161 : (arr_2 [16]))) : var_2)) * (min((arr_3 [i_0] [10]), (arr_4 [i_0] [i_2 + 2] [i_2 - 3])))));
                    var_18 = (max(var_18, ((min(((var_7 ? ((var_5 + (arr_1 [i_2]))) : (arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1]))), (min((((arr_3 [i_0] [i_0]) / var_16)), (((-6205741186142457686 ? (arr_4 [i_0] [i_0] [i_2 + 2]) : (arr_4 [15] [15] [i_2])))))))))));
                    arr_8 [10] [i_1] = (arr_5 [12] [i_1] [i_2]);
                }
            }
        }
    }
    var_19 = var_13;
    #pragma endscop
}
