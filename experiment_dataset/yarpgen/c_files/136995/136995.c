/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, (((((min(256, -258))) <= var_0)))));
    var_13 += ((((var_4 ? var_11 : 6787616760631644424))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 += -60;
                var_15 = (max(32269, (((!((min(-15431, (arr_0 [i_0] [6])))))))));
            }
        }
    }
    var_16 = var_5;
    var_17 = (((((~(126 | 32247)))) ? ((min((max(var_11, var_7)), var_2))) : (((((var_8 ? var_5 : var_2))) ? 4097680121580630949 : (((var_7 ? var_4 : var_7)))))));
    #pragma endscop
}
