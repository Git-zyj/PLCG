/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_8 == 0);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = ((var_1 ? -101 : (((8789259894001987827 >= (max(var_4, 8789259894001987827)))))));
        var_14 = (min(((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_0))), (max(1986773281162753115, (((var_10 ? var_5 : (arr_0 [i_0]))))))));
        var_15 = (min(var_15, var_5));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = 14665;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_17 = (((max(var_4, (arr_9 [i_3 + 2] [i_5 - 1] [i_5 - 1]))) + (min(-2050576411, (arr_9 [i_3 + 2] [i_5 - 1] [i_5 + 1])))));
                            var_18 = var_4;
                        }
                    }
                }
            }
            var_19 = max(-1886, (arr_10 [i_1] [0] [i_1] [0] [4]));
        }
        var_20 = (max(((max((arr_15 [i_1] [8] [i_1] [i_1] [10] [i_1] [i_1]), (arr_15 [i_1] [1] [2] [i_1] [i_1] [1] [i_1])))), 2068794234));
    }
    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        var_21 = var_7;
        var_22 += (max((((arr_18 [i_6]) ? -804396487 : 11387)), 0));
        var_23 = var_2;
    }
    var_24 = ((-11362 << (((((-28147 ? var_10 : var_1))) - 40658))));
    var_25 ^= var_2;
    #pragma endscop
}
