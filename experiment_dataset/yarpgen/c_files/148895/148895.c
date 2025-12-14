/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!(var_4 / var_13))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 ^= ((!(((!var_0) && (var_3 || var_9)))));
                    var_16 = ((((~(arr_5 [i_0 - 1]))) & var_8));
                }
            }
        }
    }
    var_17 = var_11;
    var_18 *= (var_7 + var_1);
    var_19 = var_13;
    #pragma endscop
}
