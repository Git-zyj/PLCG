/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((((~(arr_1 [8])))) >= var_3))))));
                arr_5 [i_0] [i_0] = ((((min((7 > var_12), (max(-1, 14352000074863259246))))) ? 6917529027641081856 : (arr_1 [i_0])));
            }
        }
    }
    var_16 |= ((!(var_5 == var_7)));
    #pragma endscop
}
