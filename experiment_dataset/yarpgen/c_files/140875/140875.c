/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = (max(var_0, var_10));
                    var_18 = (((((max(3557067302, 18446744073709551615)) ? 18446744073709551603 : ((252 ? 18446744073709551615 : 18446744073709551615))))));
                    var_19 ^= min(22852, ((((arr_0 [i_0 - 3]) || 0))));
                    var_20 *= (min(((15615735566420241374 ? (arr_3 [i_0 - 3] [i_0 + 2]) : (arr_3 [i_0 - 4] [i_0 - 3]))), (~65526)));
                    var_21 = 42687;
                }
            }
        }
    }
    var_22 = (((((!(var_2 > var_3)))) + -var_5));
    #pragma endscop
}
