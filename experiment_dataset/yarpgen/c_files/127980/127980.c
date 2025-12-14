/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    var_20 = 1;
    var_21 = (max(var_21, (((((min(((var_16 ? 1 : 1)), 112))) ? (min(((var_7 ? var_12 : 9)), 32768)) : var_8)))));
    var_22 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [10] [i_2] = (arr_8 [15] [1] [1] [15]);
                    arr_10 [i_0] [i_1] [i_2] [i_1] = (((arr_5 [15] [0]) || ((min((((arr_1 [i_0] [i_1]) ? 1 : (arr_4 [i_2] [i_0]))), (arr_8 [i_0] [i_0] [1] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
