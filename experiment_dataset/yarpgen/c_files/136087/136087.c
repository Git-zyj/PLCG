/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = -var_5;
                var_13 |= ((var_6 ? 310610014795463874 : ((~(((arr_1 [i_0] [i_1]) ? (arr_0 [i_0]) : 2206779720350094140))))));
                var_14 = (min(var_14, (((-242 ? (min(((310610014795463874 ? 24 : -2206779720350094140)), 2206779720350094140)) : (((~((18446744073709551615 ? var_7 : 1))))))))));
                var_15 = ((((((!(arr_1 [i_0] [i_1]))))) == (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
