/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((var_9 / (((max(var_5, -104)))))));
    var_11 = (max(var_11, ((min(var_7, ((var_3 ? var_3 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (33045 & 67092480);
                arr_5 [i_1] [i_1] [i_1] = (min(((min((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2])))), (max(58939, 67092463))));
            }
        }
    }
    #pragma endscop
}
