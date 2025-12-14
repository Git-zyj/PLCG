/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_2 [i_1])));
                var_19 = (min(var_19, ((max((arr_0 [i_0] [i_1 - 2]), ((((arr_4 [1] [1]) < -93))))))));
            }
        }
    }
    var_20 = (min(var_20, (((~((~((104 ? 119 : 0)))))))));
    #pragma endscop
}
