/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~(var_4 ^ var_10))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 ^= ((((((min(0, (arr_1 [i_0] [i_0]))) - var_5))) ? var_6 : -5142908604297418424));
                var_13 = ((((-19320 ? 881893796 : var_10))));
                arr_8 [i_0] = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
