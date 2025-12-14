/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, -19));
                    arr_8 [i_0] [4] [6] = -3805832807;
                    var_20 += ((((((((var_14 ? 602501916 : var_17))) ? (max(var_0, var_17)) : ((max(5529688020097206664, 27992)))))) ? (arr_1 [i_1]) : (arr_4 [i_0] [i_1] [i_2 + 2])));
                    var_21 = ((1769432191 % -11) && var_13);
                }
            }
        }
    }
    var_22 *= var_2;
    var_23 = ((var_0 ? ((var_3 % ((1331580714405924936 ? -14378 : 92)))) : ((((var_11 ? -14378 : var_7))))));
    var_24 = ((var_5 / (((~var_12) ? (1355206475 - -247600919) : ((14378 ? var_2 : var_6))))));
    var_25 = -20227;
    #pragma endscop
}
