/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((15 ? 1 : 5004901943968832561));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = var_7;
                var_19 = ((2097151 ? (max(var_4, 5004901943968832561)) : ((((arr_0 [i_1]) - (arr_0 [16]))))));
                var_20 -= (((arr_2 [i_0] [i_0]) ? var_13 : ((((min(288230376151187456, 9048638821468375014))) ? (!-590424384) : ((var_10 ? var_6 : var_8))))));
                arr_6 [i_1] [i_1] = ((!((max(((5004901943968832561 ? var_8 : (arr_5 [i_1] [4] [i_1]))), 7218063425245014174)))));
            }
        }
    }
    var_21 = var_1;
    var_22 = ((max(-2251799813554176, (min(var_0, 2251799813554166)))));
    var_23 -= var_0;
    #pragma endscop
}
