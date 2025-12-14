/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((~(min(4294967295, (arr_0 [i_1 - 1] [i_0 - 3])))));
                var_13 = (((((~(~var_10)))) ? (min((((arr_3 [i_1]) ? (arr_1 [i_1] [i_1]) : 4294967279)), ((((arr_1 [i_1] [i_0]) ? var_7 : var_6))))) : ((min((((arr_5 [i_1] [i_0]) ? var_6 : var_10)), var_1)))));
            }
        }
    }
    #pragma endscop
}
