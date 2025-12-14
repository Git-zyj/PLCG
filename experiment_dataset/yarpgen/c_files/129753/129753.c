/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((var_1 ? (0 || var_4) : (((arr_0 [i_0] [i_1]) ? (arr_0 [i_1] [i_0]) : (arr_0 [1] [20])))))) ? (((arr_4 [16] [i_1] [i_1]) ? ((var_5 ? 0 : var_13)) : (((103 ? (arr_1 [i_0] [i_1]) : -16))))) : ((((!((((arr_3 [i_0]) ? var_9 : (arr_4 [i_1] [i_1] [1])))))))));
                var_15 &= ((+(((((((arr_5 [21] [i_1]) % var_10))) || (((var_11 ? var_8 : var_11))))))));
            }
        }
    }
    var_16 = (((((var_3 ? var_9 : var_4)) & -1)));
    var_17 &= var_8;
    var_18 = ((var_5 ? var_12 : var_0));
    #pragma endscop
}
