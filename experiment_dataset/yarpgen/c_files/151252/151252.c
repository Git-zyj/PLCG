/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_18, ((8323173483425664810 ? 602886579556278147 : 0))))) ? 22 : 7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 -= (max(((-26 ? 7 : (arr_4 [i_0] [i_0] [i_0]))), (((arr_6 [i_0] [0] [i_0]) ? (arr_1 [i_0] [i_0]) : -1006))));
                    var_22 |= ((4436062908530697445 ? 249 : 10));
                }
            }
        }
    }
    #pragma endscop
}
