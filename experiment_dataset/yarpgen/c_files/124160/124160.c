/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (((var_3 >= (~var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 ^= (min((((~(arr_3 [i_0] [i_1] [i_0])))), 9745186016294380921));
                var_12 = (~((max(8, 32720))));
            }
        }
    }
    #pragma endscop
}
