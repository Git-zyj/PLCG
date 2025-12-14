/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((min(var_2, var_5)) <= (((48390 ? 0 : var_11))))) ? var_4 : (((((((var_8 ? 17145 : 19996))) || (-7 / 69)))))));
    var_15 = (!6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [7] [i_2] = (((~var_7) ? ((var_8 ? var_0 : var_6)) : (((max(-14, -32760))))));
                    arr_8 [i_1] = (((!-9) * (0 && 1709166991)));
                    arr_9 [i_0] [i_1] [i_0] = ((~((var_0 ? var_10 : var_0))));
                }
            }
        }
    }
    var_16 = ((0 ? (min((-7 / -2147483633), ((30284825 ? var_2 : -14400)))) : (((-var_3 ? ((2925219498 ? 22358 : 0)) : (117440512 != 3283250088454938140))))));
    #pragma endscop
}
