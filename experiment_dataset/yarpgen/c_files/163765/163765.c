/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((52 + 8570) - (max(9223372036854775802, 32767))));
                arr_6 [i_1] [i_1] [i_0 - 1] = (((-(min(16524, 8845181707884474022)))));
            }
        }
    }
    #pragma endscop
}
