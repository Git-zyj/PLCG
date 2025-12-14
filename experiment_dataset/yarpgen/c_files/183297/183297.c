/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_2 ? var_11 : 1469884112)), var_2));
    var_14 -= (max(-731519968, 0));
    var_15 = (((!2825083184) ^ (-64 > 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (arr_5 [i_0]);
                var_17 = (((arr_2 [i_0]) >= (((var_0 < var_12) ? (arr_4 [i_0] [i_0] [i_1]) : 44109))));
                var_18 = (min(var_18, ((((((((max(var_5, (arr_3 [i_1] [i_1] [i_0])))) ? (arr_2 [i_0]) : var_11))) ? (((7 >> (((((-2147483647 - 1) - -2147483635)) + 39))))) : (((arr_0 [i_0]) + (min(var_9, var_2)))))))));
                arr_6 [i_0] = ((137 ? -2938038798 : ((((((arr_5 [i_0]) ? (arr_1 [i_0] [10]) : -1)) << (-731519968 + 731519995))))));
            }
        }
    }
    #pragma endscop
}
