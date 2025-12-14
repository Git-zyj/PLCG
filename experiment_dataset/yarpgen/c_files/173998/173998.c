/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((!var_15) && ((min(var_4, ((var_8 ? var_8 : var_3)))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = (~var_8);
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((((18446744073709551590 ? (arr_1 [i_1 + 1] [i_1]) : var_8)) % (((max((arr_4 [i_0 + 2] [i_1]), 1))))));
                }
            }
        }
    }
    #pragma endscop
}
