/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((((max((max(var_14, var_11)), 246))) ? ((-9862 ? 9862 : ((9849 ? var_6 : var_1)))) : (((max(55671, ((min(-16384, 1)))))))));
                    var_15 = (((((((1 ? (arr_0 [i_2]) : var_3))) ? (max(var_3, 203)) : (arr_7 [i_2] [i_1] [i_2 + 3]))) > (!var_14)));
                }
            }
        }
    }
    var_16 = ((-((max(1748270884, 499300356365693543)))));
    var_17 ^= var_3;
    #pragma endscop
}
