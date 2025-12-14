/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (!44493)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = ((((arr_0 [i_2 + 1]) ? (arr_4 [i_1]) : var_6)) >> ((((~((var_7 ? 3593277365 : -188180653)))) - 701689875)));
                    var_16 = ((-(arr_3 [i_0] [i_1] [i_2 - 1])));
                    var_17 = ((((((var_12 ? (arr_2 [i_0]) : 4063232)))) % ((((min((arr_6 [i_1] [i_1] [i_1]), (arr_0 [i_0]))) != var_0)))));
                    var_18 = (min(var_18, var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((min((arr_13 [i_2 - 1] [i_3 - 1] [i_0]), 868893793)) >> ((((min((arr_13 [i_2 + 1] [i_3 - 1] [i_0]), (arr_13 [i_2 + 1] [i_3 - 1] [i_0])))) - 16161)))))));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_4 + 1] = (min(((-(min(-66, var_6)))), (arr_13 [i_2] [i_2] [i_1])));
                                var_20 = (min(((min((arr_2 [i_4 - 1]), (arr_2 [i_4 - 1])))), (((arr_2 [i_4 + 1]) % (arr_2 [i_4 + 1])))));
                                var_21 = (max(var_21, 2666016843));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
