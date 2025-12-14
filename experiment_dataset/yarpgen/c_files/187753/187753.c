/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((6423988837948873427 | 17047856446988732587) % ((3856229743628618710 ? 17047856446988732587 : 6559620035417851162)));
                var_19 = (-(min((arr_3 [i_1 - 2]), (arr_4 [i_0 + 1] [i_1 - 2]))));
            }
        }
    }
    var_20 = (~var_0);
    #pragma endscop
}
