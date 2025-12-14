/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [18] [i_1 + 1] [i_2 - 1] = ((((2348008239 ? 0 : 45)) & var_10));
                    var_18 += var_11;
                    var_19 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
