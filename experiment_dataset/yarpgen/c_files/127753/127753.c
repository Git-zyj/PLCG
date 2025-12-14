/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = (max(var_15, ((var_11 ? var_0 : ((15 ? var_11 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((-((((((arr_3 [i_0] [i_0] [i_0]) ? (arr_3 [i_0] [14] [i_0]) : (arr_3 [i_0] [12] [i_0])))) ? (max(var_14, -9223372036854775790)) : (arr_2 [i_0 - 1])))));
                arr_5 [8] |= ((((((!var_3) ? (((arr_2 [i_1]) % var_13)) : ((max(4, (arr_4 [i_1]))))))) * (arr_1 [10])));
            }
        }
    }
    #pragma endscop
}
