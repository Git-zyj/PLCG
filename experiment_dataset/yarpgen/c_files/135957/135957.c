/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = ((min(7596820482118016320, 54279)));
                    var_21 = 20779;
                    var_22 = (min(var_22, 11147));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_3] [i_3] = (((((-var_17 ? (!-992049835) : ((0 ? var_6 : (arr_12 [i_3] [i_4] [i_4])))))) ? (((max(var_0, -27126)) * (arr_11 [i_3] [i_4]))) : ((max(1877391254, 9223372036854775807)))));
                arr_16 [i_4] [5] [i_3] |= (9223372036854775806 >= 232);
                var_23 = var_5;
            }
        }
    }
    #pragma endscop
}
