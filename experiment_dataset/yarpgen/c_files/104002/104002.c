/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (((-52 * -var_7) <= (((var_9 != (min((-32767 - 1), 3371684556665190565)))))));
    var_14 = ((var_5 | ((min(var_5, 11394272522933681706)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 0;
                    var_16 += ((((-var_6 || (((2 ? 31 : 173))))) ? (((((arr_7 [i_0]) ? (arr_7 [13]) : -2317406781824592339)) & var_3)) : -26169));
                    var_17 = ((!((((((-(arr_5 [i_0] [9] [i_0])))) + 49)))));
                }
            }
        }
    }
    var_18 = ((((((17 ? 2 : -19)))) ? (((max((4095809506169320729 && var_3), (min(var_11, var_1)))))) : var_4));
    #pragma endscop
}
