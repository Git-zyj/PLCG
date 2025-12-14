/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (max((var_10 < 55311), var_4));
                    arr_8 [i_0] = ((65531 ? 55311 : -109));
                }
            }
        }
    }
    var_16 += ((((((((2124240076 ? var_13 : var_13))) ? ((55315 >> (55311 - 55285))) : -1))) ? ((((6808650710704860620 >> (-6808650710704860620 + 6808650710704860627))))) : var_8));
    #pragma endscop
}
