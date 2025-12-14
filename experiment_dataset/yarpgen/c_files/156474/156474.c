/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 4186495053;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [2] [i_1] [i_1] [i_1] = ((((max(37, (((arr_3 [i_2 - 1]) / 47940))))) ? (min(17, 42060)) : (((min((22872 || 3), (!-12)))))));
                    arr_9 [i_0] [i_1] [i_2] = (max((min((-9223372036854775807 - 1), 14170631411458381029)), (((!(!29))))));
                }
            }
        }
    }
    var_11 = 1;
    #pragma endscop
}
