/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ^ (min(9223372036854775807, 9223372036854775807))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    var_17 = ((!((((arr_8 [i_2 + 3] [i_1 + 2] [i_1 + 2]) ? 1 : (arr_8 [i_2 + 3] [7] [i_1 - 3]))))));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] = ((-(max(51, 9326791670081669143))));
                        var_18 += (((arr_8 [i_1] [i_1 - 3] [i_0 + 1]) <= var_2));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 = var_1;
                        var_20 = (max((arr_3 [i_0 - 1] [i_2 - 1]), (arr_3 [i_0 - 1] [i_2 + 2])));
                        var_21 = (max(((1756916646 ? 9223372036854775807 : (arr_14 [i_0 + 1]))), (arr_14 [i_0 - 1])));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_22 = ((-(--255)));
                        var_23 |= (max(-9223372036854775807, 9326791670081669143));
                    }
                    var_24 = ((-(((max(var_4, 2198))))));
                }
            }
        }
    }
    var_25 &= (((((!((max(var_8, 215)))))) >= ((((((-9223372036854775807 ? var_15 : var_3))) >= -var_7)))));
    var_26 |= (min(var_8, ((((min(var_8, -431209289))) ? var_14 : (var_8 >= var_0)))));
    #pragma endscop
}
