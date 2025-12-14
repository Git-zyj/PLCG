/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (i_0 % 2 == zero) ? ((((((-1254130697 ? 4125207110946617172 : -580895061) << (((((arr_2 [i_0] [i_0]) + 280974738)) - 50))))))) : ((((((-1254130697 ? 4125207110946617172 : -580895061) << (((((((((arr_2 [i_0] [i_0]) + 280974738)) - 50)) + 360754728)) - 18)))))));
                var_18 = ((1 << (1254130704 != 1254130702)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = var_2;
                            arr_12 [i_3] [i_0] [i_0] [i_0] = 3648712912;
                            var_20 = ((((((3372817003 <= 1860706825) ? (((arr_10 [i_0] [i_3] [i_2] [i_1] [i_1 + 2]) - 1254130719)) : (arr_8 [i_0] [i_1] [i_1 + 1] [i_0] [i_2] [i_2])))) ? var_2 : (((arr_8 [i_1 + 4] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_10 [i_1 + 4] [i_3] [i_3] [i_3] [i_3]) : (arr_5 [i_1 + 4] [i_3] [i_3] [i_3])))));
                        }
                    }
                }
                var_21 -= (((~-1084676717) > var_16));
            }
        }
    }
    var_22 = 223789173;
    var_23 = (((((-((var_4 ? var_11 : 275799345))))) ? var_16 : var_4));
    #pragma endscop
}
