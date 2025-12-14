/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 ^= (((((min(31, 8589672448))) ? 14839325608803682983 : 7014490240504800043)));
        arr_4 [i_0] [i_0] = (-((~((var_15 ? (arr_3 [8] [2]) : (arr_1 [i_0]))))));
        arr_5 [0] &= (max(((min(18446744065119879167, var_12))), (((!((((arr_3 [8] [i_0 - 1]) ? var_4 : var_0))))))));
        arr_6 [i_0] = (max((((-((max(65535, var_13)))))), (var_16 & 5854080181326014299)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 = (arr_7 [6]);

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = (max(var_22, ((((min((min((arr_9 [i_2] [i_2]), var_19)), (((arr_12 [i_2] [11] [11]) ? var_12 : var_12))))) ? 8589672448 : (arr_9 [i_2] [i_2])))));
            var_23 ^= min((max((arr_7 [i_1]), (min((arr_10 [6]), var_19)))), (min((arr_7 [i_1]), var_6)));
        }
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            arr_17 [i_1] [i_3] = var_1;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    {
                        var_24 = ((!(((var_9 ? (arr_21 [i_1] [i_3 + 1] [i_3 - 1] [i_3 + 2]) : var_12)))));
                        arr_22 [i_1] [i_4] [15] [i_1] = min((max((max(var_10, (arr_9 [i_1] [8]))), (min((arr_13 [i_4] [i_1]), var_16)))), 180);
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_25 = 13148857607544824734;
            arr_26 [i_6] [i_1] = min((((arr_7 [i_1]) * ((12869278080224390718 ? 18446744073709551596 : 18446744073709551615)))), (max((arr_11 [i_1] [19] [13]), var_2)));
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_26 = (max((min(var_12, var_3)), (max(826, var_3))));
        var_27 = (-(min(8589672448, (var_16 != 8589672448))));
    }
    var_28 = ((!((max((max(var_2, var_10)), var_18)))));
    #pragma endscop
}
