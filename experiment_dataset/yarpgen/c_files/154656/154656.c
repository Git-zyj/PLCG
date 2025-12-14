/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (((((max(var_8, -487136243)))) && (((((-18595 ? -18595 : 18609))) || 1081007839))));
                    arr_9 [9] [0] = ((!(((min(var_18, (arr_6 [i_0])))))));
                    var_22 = 1985940264;
                }
            }
        }
        arr_10 [i_0] [i_0] = (((arr_7 [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((((-2147483647 - 1) - -10420)) + -16))));
        var_23 ^= 29063;
        arr_11 [i_0] = ((~((~(~var_12)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_24 -= (((((var_9 ? (arr_7 [i_0] [i_5]) : 24))) ? (max((arr_18 [i_3] [i_4]), (arr_12 [i_3] [i_3] [i_5]))) : -39));
                        var_25 += (((arr_3 [i_4]) && (arr_3 [i_0])));
                        var_26 -= (min((~-17607), (((max(-1, var_15)) + -19))));
                        arr_23 [i_5] [i_5] [i_5] = (max(var_2, (((var_14 + (arr_21 [i_0] [i_3] [i_4] [i_5]))))));
                        var_27 = ((-1081007839 + 2147483647) << (95367424 - 95367424));
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, 21));
    var_29 = (~(max((~var_2), ((var_5 ? -26040 : 32741)))));
    var_30 = (var_1 ^ var_3);
    #pragma endscop
}
