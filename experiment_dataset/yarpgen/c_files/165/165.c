/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_12 [11] = (((((arr_1 [i_0 - 1]) ? var_9 : (arr_7 [i_1] [i_1 - 1]))) / (~8921042001058204767)));
                    var_11 = ((~(arr_8 [i_1 - 1])));
                    arr_13 [i_0] = (arr_4 [i_1 - 1] [i_2]);
                    var_12 *= ((var_10 / (arr_9 [8] [8])));
                    arr_14 [i_2] [i_1 - 1] [i_0 + 1] [i_0] = ((((7 ? (arr_3 [i_0 - 2]) : (arr_4 [i_2 - 1] [i_2 - 2]))) / 1857906131));
                }
            }
        }
    }
    var_13 = (((((var_8 ? 1582416178 : -1)) > var_0)));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_19 [i_3] [20] = ((min(504403158265495552, var_5)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_14 = 17216010529677611436;
                            var_15 = var_0;
                            var_16 = (min(var_16, (((~((504403158265495552 ? 2165009902 : 5)))))));
                            var_17 = (max(var_17, 857185073380146308));
                            var_18 = ((~(1 ^ 17589559000329405308)));
                        }
                    }
                }
                var_19 = var_1;
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
