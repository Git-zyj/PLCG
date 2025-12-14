/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_10 = arr_6 [i_0] [1] [1] [i_0];
                    var_11 = (((((!((min((arr_0 [i_1]), var_3)))))) << (((!(!-16))))));
                    var_12 = var_6;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_13 ^= ((~((-2 ? (arr_6 [i_3] [i_3] [i_3] [i_4]) : var_5))));
                var_14 = (min(var_14, (!var_6)));
                arr_11 [11] [i_4] [i_4] = min(0, (arr_3 [i_4] [i_3]));
            }
        }
    }

    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        var_15 = (max(((!(((arr_13 [i_5] [i_5]) > (arr_13 [i_5] [i_5]))))), ((!(arr_12 [i_5 - 1] [i_5])))));
        var_16 ^= (max((!var_9), ((max((arr_13 [i_5] [18]), (arr_13 [6] [6]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 7;i_7 += 1)
        {
            {
                var_17 = (max(-26, -13));
                var_18 |= ((var_8 << ((((~((-110 ? var_6 : var_4)))) - 3569123027173893314))));
                var_19 = (((arr_10 [i_7 - 3] [i_7 - 3]) ? var_7 : (((arr_13 [i_6] [i_7]) ? (87 > 1314037152776057195) : (arr_4 [i_7 - 2] [i_7 - 2] [i_7 + 3])))));
            }
        }
    }
    #pragma endscop
}
