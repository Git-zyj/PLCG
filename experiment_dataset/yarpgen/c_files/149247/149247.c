/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-1137220520 + 2147483647) >> ((((min(((min(var_2, var_4))), var_12))) - 77))));
    var_21 = (((max(var_14, ((var_0 ? var_0 : -8488132855572739169)))) % var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 *= min(var_1, 11297769330217803658);
                arr_8 [i_0] = (!((max((arr_7 [i_0] [i_1]), (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
