/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(17759, (~var_1)))) == var_12));
    var_14 = var_10;
    var_15 = var_7;
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 ^= (arr_1 [i_1]);
                arr_4 [14] = var_3;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    var_18 = (min(var_18, (((((max((arr_5 [i_0] [i_0] [i_1] [i_2 + 1]), (arr_5 [i_2 - 1] [i_0] [i_0] [i_0])))) * (arr_5 [i_0] [i_0] [i_1] [i_2]))))));
                    var_19 |= (((-17737 + 2147483647) >> (((arr_3 [i_2]) + 22769))));
                    var_20 = var_5;
                    arr_7 [6] [i_0] [i_0] &= (((((arr_3 [i_2 + 2]) * (arr_3 [i_2 + 1]))) <= (arr_3 [i_2 - 2])));
                    var_21 *= (var_0 && var_0);
                }
                var_22 = ((4837350814197105375 - (((arr_2 [i_1] [i_1] [i_1]) - (((arr_0 [i_0]) ? 17737 : 8987839484916743468))))));
                var_23 = (min((((arr_0 [i_0]) | var_11)), (arr_2 [10] [10] [i_1])));
            }
        }
    }
    #pragma endscop
}
