/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 ? 1 : (((1 ? 72057594037927935 : 1881342097)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((((((-(arr_0 [i_1]))) ? (((min(1, 1)))) : ((220376586799350970 ? 1700775845195899606 : 20))))));
                arr_5 [i_0] [i_0] [i_0] = ((160 + (((((849541383639574745 ? 1 : 42879))) ? 11 : ((max(-29239, 160)))))));
            }
        }
    }
    #pragma endscop
}
