/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 -= -3949065357973577409;
        var_19 = (((min(((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [6]) : (arr_2 [i_0] [4])))), (-8970757211397744824 / var_5))) == (((13 ? ((((arr_0 [6]) >= 4211724329))) : (30 >= var_12))))));
        var_20 = min(((~(max((arr_2 [i_0] [i_0]), var_5)))), 0);
        var_21 = ((((((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [12])))) ? (arr_2 [i_0] [i_0]) : (((arr_2 [i_0] [i_0]) * (arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_22 = (((((arr_5 [i_1] [i_1 - 2]) ^ (arr_5 [i_1] [i_1]))) & (((arr_4 [i_1 + 1]) | (arr_4 [i_1 - 1])))));
        var_23 = (max(var_23, (((((+(((arr_4 [i_1]) / var_4)))) * (((min(2147483643, var_3)))))))));
        var_24 = ((((((arr_4 [i_1 - 2]) ? var_6 : (arr_4 [i_1 - 1])))) ? (!var_14) : ((~(arr_4 [i_1 - 1])))));
        var_25 = (2490598522 & 123490212489924087);
        arr_6 [i_1] = var_17;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [i_2] [i_4] [i_2] = (min(2151806978, ((((((arr_5 [i_2] [i_4]) * var_0)) ^ (arr_15 [i_2] [i_2] [i_2] [i_5]))))));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = (min(((min((arr_17 [i_2] [i_3] [i_4] [i_5] [i_6]), var_12))), (arr_17 [i_2] [2] [i_4] [i_5] [i_6])));
                            var_27 = 2;
                        }
                    }
                }
            }
        }
        var_28 = (((arr_19 [i_2] [i_2] [i_2]) ? ((((((arr_8 [i_2]) * 3465157021))) ? 1 : (var_12 * 0))) : (((arr_22 [i_2] [i_2]) | (((min(65535, var_17))))))));
    }
    var_29 = max(((var_6 ^ ((var_3 ? var_16 : 40)))), var_8);
    var_30 = var_2;
    #pragma endscop
}
