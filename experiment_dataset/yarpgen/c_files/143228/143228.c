/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((max(((3995680004 ? (-127 - 1) : 6048)), -62))) ? ((((~-11231) ? -11235 : (min(var_4, 2417258325))))) : ((173 ? ((3146859325260957672 << (-2935130989815417241 + 2935130989815417296))) : -15599))));
                var_14 -= ((~(84 ^ var_0)));
                var_15 = (min(((15299884748448593962 ? 15591 : 3146859325260957672)), ((max(97, var_4)))));
            }
        }
    }
    var_16 = (~var_0);
    #pragma endscop
}
