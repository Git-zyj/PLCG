/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~2147483647);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 *= 122;
                        var_22 = (40 <= 4438755390432677984);
                        arr_11 [i_0] [i_0] [i_0 - 3] = (~-8221);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_0] [1] [0] [i_0] = 1;
                        var_23 = 139;
                        arr_15 [i_0] [6] [i_0] = 5;
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_5] = ((~(217 / 38)));
                        var_24 = (max(var_24, 4185400012));
                    }
                    var_25 = (max(var_25, (!3733810830)));
                    var_26 = (max(var_26, ((((!(~0)))))));
                    var_27 = 18446744073709551615;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            {
                var_28 = (min(var_28, (-1506702065 / 1645057231)));
                var_29 = (+-1177014782);
            }
        }
    }
    var_30 = 1;
    #pragma endscop
}
