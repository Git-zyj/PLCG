/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (min(var_16, ((max(16209464698067482716, 30)))));
            arr_7 [8] |= (((arr_4 [i_0] [i_1]) != (var_7 <= var_14)));
            var_17 += (arr_5 [i_1] [i_1]);
            arr_8 [6] &= ((max(-127, (arr_6 [i_0 + 1] [i_1]))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_18 *= (arr_0 [8]);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_19 *= ((~(arr_6 [i_2] [i_3])));
                            var_20 -= var_12;
                        }
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 17;i_6 += 1)
        {
            var_21 = (max(var_21, (arr_22 [4])));
            var_22 = (max(var_22, (arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
        }
        var_23 &= (max(16209464698067482703, (((((~(arr_22 [14]))) >= (!128))))));
    }
    var_24 = var_6;
    #pragma endscop
}
