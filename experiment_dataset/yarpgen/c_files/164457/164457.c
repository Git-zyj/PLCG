/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (144097595889811456 <= 287104476244869120);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 ^= (min((max(((0 >> (-144097595889811456 + 144097595889811476))), var_9)), var_7));
                arr_5 [i_0] [i_0] [i_1] = ((-(min(48, -144097595889811458))));
                var_13 += 11014235093778294793;
                var_14 += ((8192 ? ((((min(128, 0))))) : 8528628111962339745));
            }
        }
    }
    var_15 = (max(var_15, (~3135183381762157675)));
    #pragma endscop
}
