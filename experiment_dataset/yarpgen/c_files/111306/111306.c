/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(789035244, ((~(-8718188648269048144 + 31)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = var_14;
                arr_4 [1] = ((31 ? 146 : -1459201419));
                arr_5 [i_0] = ((((((~var_12) ? var_11 : (arr_1 [i_0])))) && ((((arr_3 [i_0] [i_1] [i_1 - 1]) ^ (18135 | -385536985))))));
            }
        }
    }
    #pragma endscop
}
