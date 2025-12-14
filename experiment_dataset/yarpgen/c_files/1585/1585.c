/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((var_13 ? var_2 : -109));
    var_15 = (min(var_15, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (((((!3540915488833707091) ? (88 & 13744561969286432119) : var_12)) & (!var_10)));
                    var_17 = -109;
                }
            }
        }
    }
    var_18 = ((!((max(((max(var_5, var_6))), (max(16646144, var_3)))))));
    var_19 = (max(var_19, ((var_6 ? (0 - 102) : (((((var_8 ? var_5 : var_7))) ? var_12 : (min(8611166026090796158, 5581542934075271153))))))));
    #pragma endscop
}
