/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_4 && var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_20 = (((0 ? 12387000317847846312 : 0)));
                var_21 = (min((arr_2 [i_1 - 1]), ((max((arr_1 [i_0]), (~126))))));
            }
        }
    }
    #pragma endscop
}
