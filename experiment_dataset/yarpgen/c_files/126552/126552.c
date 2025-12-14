/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((1 ? (((~(~-31842)))) : var_7));
    var_16 = (((((((var_6 << (var_6 - 13189817912337242050)))) ? (((var_3 ? 1 : -31828))) : ((var_0 ? var_2 : var_5)))) >= (((min(var_7, var_9)) / var_0))));
    var_17 -= var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 -= ((!((min(-31842, (arr_5 [i_2] [i_2]))))));
                    var_19 = (max(var_19, (~-var_6)));
                    arr_9 [i_0] [0] [i_2] [0] = ((var_11 ? (min(var_9, ((55297 ? -4 : 6676)))) : (((arr_5 [i_0] [i_1 - 1]) ? ((min(1, -7))) : var_8))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                arr_17 [i_3] [i_3] [i_4] = var_13;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_20 = (!((!(!var_9))));
                            var_21 *= -82;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
