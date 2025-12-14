/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 17;
    var_16 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 &= 67108848;
                    arr_11 [i_0] [i_1] [i_2] = ((!(((2147483647 ^ ((-67108848 ? 18446744073709551607 : 9223371487098961920)))))));
                    var_18 = (max(var_18, (((((((max(3711674201281061210, 2916854986721006543)) % var_10))) ? ((max(39470, 0))) : 31)))));
                }
            }
        }
    }
    var_19 = -1;
    #pragma endscop
}
