/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (1 ? ((((38298 / 119) ? 27237 : (27246 == 6726585511106926087)))) : ((1 ? var_5 : 1)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (max(var_0, ((((max(245, (arr_4 [i_0]))))))));
                var_14 = (max(var_14, ((min(-27238, ((min(241, 38282))))))));
            }
        }
    }
    #pragma endscop
}
