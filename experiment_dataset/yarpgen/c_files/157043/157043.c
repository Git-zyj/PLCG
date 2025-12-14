/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(((var_10 ? var_0 : 13), var_11))));
    var_13 &= ((((var_6 ? (~7) : ((max(-1, var_5))))) * (((-((max(var_2, var_11))))))));
    var_14 = (max(var_14, (((-8 - ((((var_6 && var_5) ? (!var_6) : (31 & var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = ((((min(((max(1, var_8))), 10))) ? (((((var_1 ? 1977666035 : (arr_9 [i_1]))) * ((((arr_15 [i_1]) >> (5982304893073412253 - 5982304893073412224))))))) : (min(11, -198))));
                                arr_17 [1] [i_1] [i_2] [i_3 - 1] = ((((((((var_7 ? var_8 : (arr_15 [i_1])))) ? (50 * var_9) : (arr_9 [i_1])))) ? ((199 ? 10 : ((((var_10 >= (arr_2 [3] [i_3]))))))) : (max((arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [4] [i_3] [i_3]), ((var_8 ? 5982304893073412253 : (arr_2 [i_0] [i_4 + 2])))))));
                            }
                        }
                    }
                }
                var_15 = -593606165401327034;
            }
        }
    }
    #pragma endscop
}
