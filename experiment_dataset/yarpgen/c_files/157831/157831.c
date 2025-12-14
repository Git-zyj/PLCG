/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_3);
    var_12 = var_6;
    var_13 *= (~11680573855385674367);

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [14] &= (min((min(11680573855385674367, 9223372036854775807)), (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((((max(-1, (arr_1 [i_0])))) & (~359325930346229911)));
        var_14 |= (+((+(((arr_0 [i_0] [i_0]) ? var_8 : (arr_0 [i_0] [i_0]))))));
        arr_5 [i_0] = (max((~9223372036854775796), ((((((arr_1 [i_0]) ? 1 : (arr_2 [i_0] [i_0])))) ? (((min(var_5, var_10)))) : (((arr_1 [i_0]) ? var_8 : var_6))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = ((var_5 ? ((((max((arr_7 [i_1]), var_1))) ? (arr_6 [i_1]) : (arr_7 [i_1]))) : ((max((max(55, 4)), (((-1543820108 ? (-32767 - 1) : (arr_6 [i_1])))))))));
        arr_8 [10] |= 17135428883351199100;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_18 [1] [i_1] [i_3] [i_1] = (max((((arr_12 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2]) : (arr_12 [i_3 + 2] [i_3 + 1] [i_3 - 2]))), ((max((arr_12 [i_3 - 1] [i_3 + 2] [i_3 + 2]), (arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 2]))))));
                        var_16 = (min(var_16, (!15023)));
                        var_17 = (max((min((arr_6 [i_4]), var_9)), ((~(min(var_2, (arr_14 [i_1] [i_1] [i_1] [i_1])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
