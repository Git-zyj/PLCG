/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!4978874397021484293);
                var_10 = ((!((max((1455051402433561523 == var_4), ((var_9 ? var_7 : var_3)))))));
                arr_5 [i_0 - 2] = (((arr_0 [i_0 - 1]) || ((min(0, 39)))));
                var_11 = ((-(((((arr_3 [i_1 + 1] [i_0 + 1]) + 2147483647)) >> (((arr_3 [i_1 + 1] [i_0 + 1]) + 1991917770))))));
                var_12 = (min(((var_4 ? ((max(var_0, 41))) : ((max((arr_2 [i_0] [i_1]), var_5))))), 926945221));
            }
        }
    }
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_10 [i_2] = (!16223);
                var_14 += var_0;
                var_15 = var_6;
                arr_11 [i_2] = ((!((max(-1, -34)))));
            }
        }
    }
    var_16 = ((((var_6 > (14990 % 16246))) ? var_7 : var_2));
    var_17 += var_5;
    #pragma endscop
}
