/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= -var_10;
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 |= (((((59793 ? 179 : var_2))) < ((((min(56, var_12))) ? ((var_11 ? (arr_0 [1]) : 8824)) : (((-(arr_3 [i_0] [20] [20]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_3] [i_3] [i_2] [i_2] = (max((arr_7 [i_0] [i_0] [i_2] [i_3]), ((56 ? (arr_1 [i_0]) : (arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                            arr_10 [i_0] [i_0] [i_2] [i_0] = (((!(var_1 && 1008))));
                            var_18 = (max(var_18, 200));
                        }
                    }
                }
                arr_11 [i_0] [i_0 + 1] [i_0] = ((((((max(var_0, (arr_7 [i_0] [i_0] [i_1] [i_1])))))) ? var_8 : -var_12));
            }
        }
    }
    #pragma endscop
}
