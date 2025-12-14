/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = min((min(var_2, ((0 ? var_2 : -1)))), ((~(((!(arr_7 [i_0] [i_2] [i_2])))))));
                    var_12 ^= ((-((-((var_5 ? (arr_6 [i_2] [1] [14] [i_0]) : (arr_2 [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
