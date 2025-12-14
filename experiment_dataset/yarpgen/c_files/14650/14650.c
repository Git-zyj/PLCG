/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((min((max(6609787075834094842, 6)), ((min(var_3, var_8))))), ((min(((max(65535, 56))), (~var_1))))));
    var_19 &= var_0;
    var_20 -= 17;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((((-(min((arr_1 [1] [i_0]), var_16))))) ^ (((arr_0 [11] [3]) ? var_1 : (arr_0 [i_0] [i_0])))));
        var_22 += ((-(~4030906333)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_4 [i_1] = 1;
        var_23 = (min((~1793938296), (((((45807 || (arr_2 [1])))) / 39))));
    }
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 22;i_4 += 1)
            {
                {
                    var_24 += ((~(arr_7 [8])));
                    arr_13 [i_2] [i_3 - 1] [i_2] = (var_12 & var_10);
                    var_25 = (((max((arr_11 [i_4 - 4] [i_3 - 2] [i_2]), var_3)) << (65535 - 65506)));
                    var_26 *= ((((min(((-(-127 - 1))), ((min((arr_6 [i_3]), (arr_6 [i_2]))))))) || 1281188879));

                    /* vectorizable */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        var_27 = (arr_8 [i_4 + 1] [i_4 - 4]);
                        arr_16 [i_2] = (arr_5 [i_2] [i_2]);

                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            var_28 = -2048501147;
                            arr_20 [i_2] [i_2] [i_2] [i_2 - 1] [1] [14] [i_2] = (209 ^ -17865);
                        }
                        var_29 = (~-1270331599294434384);
                        arr_21 [i_2] [i_3 - 2] [i_2] [14] = 44614;
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_26 [i_2] [i_2] = (max((((((min(226, var_3))) || ((!(arr_25 [i_2] [i_7])))))), (min((arr_25 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
            var_30 = (~var_4);
            arr_27 [i_2] = (max((min((arr_19 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2] [i_2] [i_2 + 1]), -1396982544)), (~0)));
        }
        var_31 = (max(var_31, (~var_2)));
    }
    #pragma endscop
}
