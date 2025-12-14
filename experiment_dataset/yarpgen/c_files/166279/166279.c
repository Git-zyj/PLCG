/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = (max(var_14, 2175102720));
    var_15 &= max((max((var_3 - var_5), ((max(var_9, var_11))))), ((((55479 != var_0) * (((var_1 + 2147483647) >> (var_5 - 182)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [0] &= (arr_0 [i_0]);
                var_16 = (max((arr_4 [i_1]), (arr_0 [i_0])));
                var_17 = (min(0, ((var_4 ? ((max(95, var_7))) : ((var_8 ? var_9 : -33))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = -1401922829;
                            var_18 = ((16368 ^ (arr_1 [i_0])));
                            var_19 = ((((min(-1, (arr_9 [i_0] [i_1] [i_2] [i_3])))) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_3])));
                            arr_12 [i_0] [i_1] = ((((((min(49167, (arr_0 [i_1])))) ^ (arr_10 [i_0] [i_1] [i_2] [i_3]))) & (((arr_2 [i_1] [i_1]) >> (arr_2 [i_1] [i_2])))));
                        }
                    }
                }
                var_20 = arr_4 [i_1];
            }
        }
    }
    #pragma endscop
}
