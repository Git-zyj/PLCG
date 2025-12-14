/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-1 ? 28633 : 37212)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] &= 1;
                var_17 = (max(((0 ? (((47 ? -11242 : -11242))) : 9570)), 29607));
            }
        }
    }
    var_18 = ((((((6453459671711143187 ? -11242 : 109))) || (((-32756 ? 236708850497737661 : 32736))))));
    #pragma endscop
}
