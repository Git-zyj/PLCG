/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0 + 2] [i_1] = ((((var_1 ? var_14 : (((!(arr_4 [i_1] [i_1]))))))) ? var_7 : ((((min((arr_1 [i_2 - 2] [i_1 + 1]), 4294967295))) ? (~-1) : (arr_2 [i_1] [i_0 - 1] [i_1]))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_16 ^= (arr_1 [0] [i_1]);
                        var_17 = (max(var_17, (((+(((!0) ? var_3 : (0 | 5))))))));
                    }
                }
            }
        }
    }
    var_18 *= ((~(((!102) ? -4524368280331583912 : (14344 >= var_14)))));
    #pragma endscop
}
