/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [16] [8] [i_2] [i_0] [i_0] [13] = (((var_12 && var_14) * (((arr_8 [i_0]) ? (arr_2 [10]) : (arr_8 [i_2])))));
                        arr_13 [i_2] [6] [i_2] &= var_9;
                        var_20 = 56266;
                        var_21 *= ((((((arr_5 [i_1] [i_2]) ^ 17179852800))) && 41293));
                    }
                    var_22 += ((((((arr_3 [i_1 + 2]) ? (((25284 ? -5111293069471451306 : 25284))) : (1586482880140823725 * var_7)))) ? (min(var_14, var_14)) : (arr_8 [i_0])));
                    var_23 = (min(var_23, ((min(((((arr_4 [i_1 + 2] [i_1 - 3]) == (arr_4 [i_1 - 2] [i_1 - 4])))), (arr_4 [i_1 - 1] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
