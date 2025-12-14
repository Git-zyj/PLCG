/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (min(5605229100765750398, 5605229100765750412));
    var_12 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_13 = (((var_8 ? 1 : var_3)));
                        var_14 = ((1 ? ((-5605229100765750395 ? var_7 : 116)) : (~var_10)));
                    }
                    var_15 = (min(var_15, (arr_6 [i_2] [i_1] [9] [1])));
                    var_16 = ((-(((!((min((arr_0 [i_2]), (arr_1 [1])))))))));
                }
            }
        }
    }
    var_17 = ((var_1 ? (((!(78 ^ -7053412779646295834)))) : ((max(32, 16384)))));
    #pragma endscop
}
