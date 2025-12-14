/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(73, 7709508143885271753));
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = 3793612142;
                var_23 = (((((var_11 ? var_8 : (arr_5 [i_0] [i_0] [i_1])))) || (((arr_3 [i_1 - 1]) > (arr_3 [i_1 - 1])))));
                arr_7 [i_0] = var_3;
            }
        }
    }
    var_24 = (max(var_24, var_19));
    #pragma endscop
}
