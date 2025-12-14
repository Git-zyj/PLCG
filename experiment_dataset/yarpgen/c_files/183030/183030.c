/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 4294967287;
    var_19 += (((3061698661 & 2828767266) > var_4));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((((68240316 ^ (arr_7 [i_2] [i_1] [i_0 - 4] [i_0]))) < var_0));
                    arr_8 [i_0 - 2] [i_0 - 2] [i_0] = min(3061698661, 18446744073709551615);
                }
            }
        }
    }
    var_21 = var_16;
    var_22 |= (var_11 == var_5);
    #pragma endscop
}
