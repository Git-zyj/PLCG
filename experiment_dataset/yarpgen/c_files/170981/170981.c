/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -65535));
    var_16 = (((~13637157001644216576) + ((~(min(var_12, var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((~(((((1 << (var_8 - 3686697329)))) ? (2695288608 >> 0) : (arr_3 [i_0] [i_0] [i_0])))));
                var_18 = (max(var_18, (((((arr_0 [i_0]) & (arr_3 [i_1] [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
