/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((54071 - (arr_3 [i_0] [i_0 - 1] [i_0])))) ? ((min(var_12, var_7))) : (((!(arr_3 [i_0] [i_0] [i_0]))))));
                var_14 = (103 == var_6);
            }
        }
    }
    var_15 = -25;
    #pragma endscop
}
