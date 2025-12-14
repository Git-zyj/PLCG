/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (((((-(arr_8 [i_2 + 1] [i_0 + 1] [i_2 - 2])))) ? (max(1, (max(10756078521548960631, 0)))) : var_2));
                    var_14 = (min(var_11, ((((arr_6 [i_0] [i_0 + 1]) <= (((var_1 ? -3189 : (arr_0 [i_0])))))))));
                }
            }
        }
    }
    var_15 = ((4294967295 ? -123282490869776441 : 4173));
    var_16 = var_12;
    #pragma endscop
}
