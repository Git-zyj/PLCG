/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((~(var_7 <= var_3)));
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (arr_0 [2] [i_0]);
                arr_5 [i_0] [9] [i_1] = ((((min(34359738368, (arr_1 [i_0])))) ? (((!((max(107, 29925)))))) : ((((((arr_3 [i_0]) ? 928393729 : var_5))) ? (arr_2 [i_0]) : (((arr_1 [i_0]) ? (arr_0 [i_0] [i_1]) : 229))))));
            }
        }
    }
    #pragma endscop
}
