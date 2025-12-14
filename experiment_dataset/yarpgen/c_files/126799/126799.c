/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((min(var_3, var_7)) >= (max(var_1, var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = (((((~(arr_10 [i_0] [i_0])))) ^ (min(var_7, (arr_11 [i_0 - 1] [1] [1])))));
                                var_15 = (min((-2147483647 - 1), 65024));
                            }
                        }
                    }
                    var_16 += (arr_3 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_17 += ((min((arr_7 [i_5] [i_6]), (arr_7 [i_6] [i_5]))));
                var_18 = (max((((((var_7 ? (arr_14 [i_6] [i_6] [i_5] [i_5] [i_5] [i_5]) : var_11))) ? -var_10 : (min((arr_14 [i_6] [i_6] [i_5] [i_6] [i_6] [i_5]), var_9)))), ((min((-2147483647 - 1), 1)))));
                arr_19 [i_5] = (arr_1 [i_5]);
                var_19 = (arr_15 [i_5]);
            }
        }
    }
    var_20 ^= var_9;
    #pragma endscop
}
