/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = 4227858432;
                arr_8 [i_1] = ((-4419312293668795274 ? ((-(arr_1 [10] [i_1]))) : (arr_1 [9] [i_1])));
                var_16 &= (((182 << (((((arr_6 [i_0] [i_1]) + 5434080977103810937)) - 10)))));
                arr_9 [i_0] [i_0] = (((((~-4419312293668795282) && (((0 & (arr_0 [i_0] [i_1])))))) ? (212 >= 1) : 32767));
                arr_10 [i_0] [i_0] [7] = (arr_5 [i_0] [i_1]);
            }
        }
    }
    var_17 = (max((max(((max(-115, 13))), var_4)), (-1 || 0)));
    #pragma endscop
}
