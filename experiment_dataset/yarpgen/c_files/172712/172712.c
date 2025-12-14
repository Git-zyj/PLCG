/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = ((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]));
        var_15 ^= (!var_7);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = arr_5 [i_0] [i_0] [i_0];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 *= -2147483646;
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_9 [12] [i_3] [i_2] [i_0]) ? (arr_1 [i_0]) : var_7));
                            }
                        }
                    }
                    var_17 = (arr_6 [i_0]);
                    var_18 &= (((arr_3 [i_1] [i_0]) ? (((2039215968 ? 3261766571709691608 : 1032827459248987055))) : (9014238485532124257 % var_9)));
                }
            }
        }
    }
    var_19 ^= ((-8164170300639151539 ? (max(-8164170300639151539, 96)) : 253));
    var_20 = (max(-var_12, (((!(var_8 || var_5))))));
    #pragma endscop
}
