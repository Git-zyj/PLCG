/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_0, (((!(((148 ? var_2 : var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0 + 1] = ((~((max(114, 1)))));
                var_21 = (((!var_19) || ((((arr_2 [i_0 + 2] [i_0 - 2]) ? (min((arr_4 [i_0] [7]), 51985)) : (!511))))));
            }
        }
    }
    #pragma endscop
}
