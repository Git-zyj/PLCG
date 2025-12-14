/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_18 -= ((~((((var_15 * 8388607) > ((var_15 ? (arr_3 [8]) : var_15)))))));
                arr_5 [i_0] [i_0] [i_0] = (((((var_15 ? (arr_4 [i_0] [i_0]) : (((arr_0 [i_0]) ? (arr_4 [i_0] [i_0]) : var_4))))) ? ((8877 ? 54 : 10601429404705475603)) : ((max(-var_13, (((var_7 ? 5 : 0))))))));
                arr_6 [i_1] [i_1] [i_0] = var_2;
            }
        }
    }
    var_19 = (-2147483647 - 1);
    var_20 = (max((!var_12), var_5));
    #pragma endscop
}
