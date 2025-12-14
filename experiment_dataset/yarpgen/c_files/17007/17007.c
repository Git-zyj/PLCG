/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = min(3004342155622918989, (min(((9448183977291015492 ? (arr_4 [i_1]) : var_4)), ((var_16 ? (arr_5 [0] [i_1 - 1]) : 15442401918086632642)))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = 8998560096418536123;
                }
            }
        }
    }
    #pragma endscop
}
