/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((((((arr_0 [i_0]) + (arr_0 [i_0])))) + ((2058509286 + (arr_0 [i_0]))))))));
                arr_5 [i_0] [i_0] [18] = (!var_12);
            }
        }
    }
    var_16 |= max(((-27033 ? 1 : 2932457326)), var_2);
    #pragma endscop
}
