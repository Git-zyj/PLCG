/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((!(((~((var_13 ? var_15 : 9)))))));
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = 9;
        arr_3 [i_0] [i_0] = ((((min(((18081 ? var_15 : 47455)), var_8))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_20 ^= ((((min(18081, (arr_12 [i_0] [1])))) | ((((min(1090186037, 3413273012))) ^ (min((-9223372036854775807 - 1), (arr_6 [i_0])))))));
                            var_21 -= (((-3814426417031321427 ? var_3 : -1786273932)));
                            var_22 -= (3682529899998660482 > 0);
                            var_23 -= ((((!((3682529899998660499 && (arr_5 [i_0] [i_1]))))) ? (max(7690614300928636609, (arr_10 [i_0] [i_1] [14] [i_3] [i_0]))) : (((((min(14764214173710891116, 9223372036854775807))) ? var_4 : (((arr_0 [i_0]) * 160)))))));
                        }
                    }
                }
            }
            var_24 = (((-2951344062361428516 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 201)));
        }
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {
        var_25 = (~var_2);
        var_26 = ((max(1921812133753666105, -666718117)));
    }
    #pragma endscop
}
