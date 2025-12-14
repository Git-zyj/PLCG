/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 74;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [9] [1] [9] = (max(((((max(var_0, 32764))) ? (min(var_5, var_15)) : (arr_6 [i_0]))), (((!(arr_2 [i_1 + 1]))))));
                arr_8 [i_0] [14] [i_0] = ((!((((((!(arr_1 [13])))) % (85 || 1))))));
            }
        }
    }
    #pragma endscop
}
