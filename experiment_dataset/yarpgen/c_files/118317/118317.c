/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (((((21952 + ((-5360792538457415387 ? 4353549431222509017 : -1337158254))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((arr_1 [i_1 - 1]) ? (max((arr_3 [i_1] [i_0] [15]), 2198486384640)) : (arr_5 [i_0] [i_0] [i_0])))));
                var_14 = (((4353549431222509017 == -2129281440) ? ((((-8 != (max(16384, -4353549431222509010)))))) : (((min((arr_1 [i_0]), (arr_4 [i_0] [8] [i_1]))) - -1))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((arr_10 [i_1 - 1] [i_4 + 1] [0]) > (arr_9 [i_1 - 1] [i_4 + 1] [i_1 - 1]))))));
                                arr_14 [i_0] [i_4] [i_2] [2] [i_4] [i_3] [i_4] = ((((arr_3 [i_4 - 3] [i_4 - 3] [i_4 - 1]) ? (arr_7 [i_0] [i_1] [i_2] [i_4]) : -4353549431222509018)) - (arr_8 [i_0] [i_1 + 1] [i_1 + 1] [i_3]));
                                var_16 = (min(var_16, ((((arr_2 [i_2]) / (arr_13 [i_1 - 1]))))));
                                var_17 = (max(var_17, ((((((!(arr_9 [i_3] [i_1 + 1] [9])))) - (!-1672902795))))));
                            }
                        }
                    }
                    var_18 = (((~-1672902795) && -5360792538457415387));
                }
                arr_15 [5] [5] [5] = (-9223372036854775807 - 1);
                var_19 = ((4353549431222509018 >> ((((max((arr_9 [i_0] [i_1 + 1] [i_0]), (arr_9 [i_0] [i_1 + 1] [i_1 + 1])))) - 25979))));
            }
        }
    }
    var_20 = var_0;
    var_21 = (min((((max(14337, var_7)) + var_3)), -238));
    #pragma endscop
}
