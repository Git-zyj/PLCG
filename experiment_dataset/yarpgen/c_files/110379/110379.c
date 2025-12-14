/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (max(-4103, 1));
                    var_15 = (min((96597342 ^ 65534), var_8));
                    arr_6 [0] [i_2] [0] = ((((((((9223372035781033984 << (var_10 - 2818737524)))) ? ((240 ? var_13 : -249)) : 642))) ? 36305 : (min(2994551094, 8))));
                    var_16 &= (min((((arr_5 [i_0]) / (min(var_10, var_1)))), var_0));
                }
            }
        }
    }
    var_17 += var_2;
    var_18 = min((min(((var_5 ? var_11 : 36)), var_10)), (980235115 ^ -7431385944971564250));
    #pragma endscop
}
