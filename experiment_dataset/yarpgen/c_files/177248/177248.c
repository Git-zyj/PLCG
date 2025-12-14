/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_9;
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((35 ? 0 : 1))) > (((((-20 ? (arr_3 [i_1] [i_1] [i_1]) : (arr_3 [i_1] [i_1] [i_1 + 3])))) ? var_1 : (((min(54, (arr_4 [i_0])))))))));
                arr_6 [i_1] = (((arr_1 [i_1]) >= ((~((1 ? 2 : (arr_1 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
