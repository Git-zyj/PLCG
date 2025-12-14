/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 -= ((((((min(var_1, var_9)) == var_3)))));
                    arr_7 [1] [i_1] [i_2] = (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            {
                var_11 = ((+((var_2 ? ((((arr_8 [i_3]) ? var_8 : var_5))) : ((var_0 ? (arr_10 [i_4]) : var_6))))));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_12 = var_7;
                    arr_16 [i_3] [i_4] [i_5] [i_3] = ((((!((((arr_15 [i_3] [i_4 - 4] [i_5] [i_3]) << (var_5 - 160)))))) ? (arr_11 [i_4] [i_3]) : (((~351781221) ? (max(3943186074, 1053984823)) : ((4294967295 ? 3943186066 : 1053984823))))));
                    var_13 = max((arr_11 [i_3] [i_4 + 1]), (arr_10 [i_5]));
                }
                var_14 = ((+((((207 ? (arr_9 [i_3]) : (arr_12 [i_4])))))));
                arr_17 [i_3] [3] [i_3] = (((!(((var_9 ? var_5 : 351781224))))) ? var_7 : (((arr_14 [i_4 - 3] [i_4 - 2] [16] [i_3]) ? (arr_11 [i_4 - 4] [i_4 - 3]) : 3093822060)));
            }
        }
    }
    #pragma endscop
}
