/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_8 ? (1796524341 * 10109079124215596131) : (((535064065 ? 225 : 29422))))));
    var_20 = ((((((min(var_7, var_1)) + 2147483647)) >> ((((min(148, var_15))) - 136)))));
    var_21 = (((13 ? 1136472618 : -964989064)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_22 = ((!(arr_0 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_12 [13] [i_1] [i_0] [i_1 - 2] = (arr_9 [i_0] [i_0] [i_0]);
                    var_23 = (((((~((max((arr_2 [i_0]), 255)))))) ? ((~(var_6 ^ 1016))) : (~26393)));
                    var_24 = (min(var_24, 0));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_25 ^= ((arr_8 [5]) ? (arr_10 [10] [i_0] [i_1] [i_3]) : (!71));
                    arr_15 [i_0] = min(((-(-2108488396 - 13564))), ((((arr_5 [i_0] [14]) <= (max((arr_7 [i_0] [i_1] [i_3]), 13564))))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_26 ^= (arr_17 [i_0] [i_1 - 2] [i_4]);
                    var_27 = (arr_0 [i_1 - 2] [i_0]);
                }
                var_28 &= ((4294966279 ? 29 : (1104905476 == -5)));
                var_29 = ((~(((!(((-(arr_0 [i_0] [i_1])))))))));
            }
        }
    }
    var_30 = (min(var_30, ((min(1016, 6046)))));
    #pragma endscop
}
