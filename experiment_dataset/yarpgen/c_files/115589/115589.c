/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((((max(var_4, ((4294967295 ? var_4 : var_7))))) ? (max(var_0, var_9)) : var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((var_0 ^ (max((arr_0 [i_0]), (arr_0 [9]))))) - var_3);
                var_11 = (((((((min((arr_3 [i_0 - 2]), (arr_1 [19]))) > -1762218617)))) / ((+(((arr_1 [i_1]) - var_1))))));
                var_12 = (max((!var_7), ((((-(arr_0 [i_0]))) * (arr_1 [17])))));
            }
        }
    }
    #pragma endscop
}
