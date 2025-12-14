/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = ((((~(~0))) == (arr_2 [i_1])));
                arr_5 [i_0 - 1] [i_0] [i_1] &= (((((arr_4 [i_0 - 2] [i_0] [i_0 - 1]) ? (arr_1 [i_0] [i_1]) : (var_0 >= var_5))) == 1));
            }
        }
    }
    var_13 = var_2;
    #pragma endscop
}
