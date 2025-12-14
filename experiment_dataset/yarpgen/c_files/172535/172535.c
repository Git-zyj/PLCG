/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = var_13;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] &= (arr_1 [i_1]);
            var_17 = 37926;
            arr_7 [i_0] [i_1] = (!9870153826163238039);
            var_18 = ((((var_3 ? 9870153826163238039 : (arr_3 [i_1] [i_0] [i_0]))) <= (arr_5 [i_1] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_19 = var_10;
                            var_20 *= (((arr_4 [i_2 - 1] [i_2 - 1]) || (arr_4 [i_2 + 1] [i_2 + 1])));
                            var_21 -= var_10;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_22 = var_1;
            var_23 -= ((((-((-(arr_16 [i_0]))))) << ((var_14 ? (8576590247546313563 && var_12) : (arr_10 [i_5] [8] [i_5] [6] [i_0] [i_5])))));
        }
        var_24 = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
