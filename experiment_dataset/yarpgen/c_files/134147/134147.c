/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 << (235 - 235)));
    var_13 = var_2;
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = 785669017334145689;
                var_16 = (min(var_16, ((min((((((-(arr_5 [i_0] [i_0] [i_1]))) & (arr_1 [i_1] [i_0])))), (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
