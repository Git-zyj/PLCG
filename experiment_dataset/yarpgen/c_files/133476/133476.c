/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 117));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (min(var_12, ((min((((((arr_1 [i_0] [i_1]) + (arr_0 [i_0] [i_0]))))), (var_4 / var_9))))));
                arr_6 [i_1] [i_1] = (((((var_6 ? 1445006740832911163 : (arr_5 [i_0] [i_1] [i_0]))) | 12288)));
                var_13 *= ((+(min(((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))), (((arr_5 [7] [7] [i_0]) / (arr_1 [i_1] [i_0])))))));
            }
        }
    }
    var_14 &= var_3;
    var_15 = ((~(min((min(var_9, 130)), (~var_9)))));
    #pragma endscop
}
