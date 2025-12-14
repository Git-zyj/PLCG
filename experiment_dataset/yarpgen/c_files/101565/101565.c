/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-6935890138116784839 >= 18446744073709551615);
    var_19 = (((((57360 ? 207 : 10))) || (!var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_20 ^= (arr_3 [i_1 + 3] [14] [i_0]);
                var_21 = (max(var_21, -113));
            }
        }
    }
    #pragma endscop
}
