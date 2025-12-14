/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_0, var_11));
    var_21 = var_6;
    var_22 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_23 = (((((~(arr_0 [i_0])))) >= (max(var_16, ((min(var_10, var_17)))))));
                var_24 = (max((arr_3 [i_1 + 1] [i_1] [i_1]), ((((((arr_3 [i_0] [i_0] [20]) ? (arr_2 [i_0]) : (arr_2 [i_1])))) ? (((arr_1 [11]) ? 26064 : 130)) : (arr_3 [i_0] [i_1] [i_1 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_0] [i_0] [i_3] [i_2] [i_2] = ((~(arr_4 [i_0] [i_1] [i_1 - 2] [i_3])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [8] = ((((((!(arr_7 [i_0] [i_1] [i_2] [i_3]))))) | 8588436793326435567));
                        }
                    }
                }
                var_25 *= (arr_3 [i_0] [i_1 - 1] [i_1 - 1]);
                arr_10 [i_1] = (arr_4 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    var_26 = var_18;
    #pragma endscop
}
