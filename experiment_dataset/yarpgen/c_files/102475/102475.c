/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;
    var_15 = (max(var_15, 9303106915417861821));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((((((max((arr_6 [i_0] [i_0]), -19089))) + 2147483647)) << (12610 - 12610))) - ((((9303106915417861821 << (((arr_5 [i_0]) - 34796)))))))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (((!9143637158291689789) >> (-4128768 - 4290838517)));
                        var_18 -= (((((124 ? (((min((arr_5 [i_3]), 217)))) : (~var_0)))) && var_3));
                        var_19 -= ((-9143637158291689795 ? -124 : (((19088 & 3992235280) ? (~-1596824581) : (((arr_3 [i_3] [i_1]) & 20280))))));
                        arr_12 [i_1] [4] [i_1] [i_2] [i_2] = 3818710536;
                        var_20 = (arr_2 [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 += (((((var_3 ? (arr_10 [i_0] [8] [i_4] [i_2] [i_0]) : (((2677613338 ? (arr_5 [i_1]) : var_2)))))) ? -9303106915417861817 : (((-3 % (arr_10 [i_4] [i_4] [i_2] [i_1] [i_0]))))));
                        var_22 = (max(var_22, (((!(arr_14 [i_4] [i_1] [i_0] [i_0] [i_4]))))));
                    }
                    var_23 += ((~((480 ? (952125113 - 8386560) : (((-9223372036854775807 - 1) ? (arr_9 [i_0] [i_1] [7]) : var_5))))));
                    var_24 -= (max(var_5, ((2016 + (arr_0 [i_1])))));
                    var_25 = ((var_2 ? var_5 : -19089));
                }
            }
        }
    }
    var_26 ^= var_8;
    var_27 = (max(var_27, (((124 ? var_7 : 1)))));
    #pragma endscop
}
