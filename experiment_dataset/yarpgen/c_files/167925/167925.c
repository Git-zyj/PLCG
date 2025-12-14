/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_17 = (arr_3 [i_1]);
                    var_18 = (max(((min(130413911, (arr_3 [i_2])))), ((max((arr_2 [i_1 - 1] [i_2 + 1] [i_2 + 1]), var_12)))));
                    arr_8 [i_2] [i_1] [i_2 - 1] = var_1;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 = (max(-21, -32));
                    var_20 = (((var_16 && var_11) ? (max(130413913, 9848443089076685310)) : (((((min(-6719620625449111011, var_14))) ? (((min((arr_11 [i_0]), (arr_3 [1]))))) : (max((arr_1 [i_1] [i_1 - 2]), (arr_11 [i_3]))))))));
                    var_21 &= (((max((arr_2 [i_1] [i_1 - 2] [i_1 - 2]), (max(var_15, -32746)))) | (((((1 ? (arr_7 [i_0] [i_0] [i_0] [1]) : var_1))) ? ((0 ? (arr_12 [i_3] [15] [0] [12]) : -32746)) : (((48243 ? 31896 : var_5)))))));
                    var_22 |= ((130413913 * (max(0, ((3887895156 ? -8433653783776509305 : var_15))))));
                    arr_13 [3] [2] [10] [i_0] = -130413895;
                }
                var_23 = ((((max((arr_11 [i_1 + 1]), 2539))) ? (((-32743 * (arr_1 [15] [15])))) : ((max((arr_12 [i_1 - 1] [i_1 - 2] [i_1] [i_1]), -130413887)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            {
                var_24 *= ((((max((arr_4 [i_5 + 2]), -1))) ? (177 || var_6) : (max((var_4 * var_0), (((~(arr_7 [i_4] [i_4] [1] [i_4]))))))));
                var_25 -= min(((-9223372036854775805 | (arr_5 [i_4 + 2]))), (arr_5 [i_4 + 1]));
            }
        }
    }
    #pragma endscop
}
