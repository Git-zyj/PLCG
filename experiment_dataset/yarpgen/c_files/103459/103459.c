/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_10 ^= (((var_0 > (arr_1 [1] [i_0]))) ? ((((arr_1 [i_0] [i_0]) >= ((min(var_9, (arr_1 [i_0] [i_0]))))))) : -var_9);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_11 = (min(var_11, (arr_1 [i_0] [i_0])));
            var_12 ^= var_0;
            var_13 ^= -var_8;
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_14 *= (!var_7);
                            arr_14 [i_4] [i_1] [i_1] [i_3] [i_4] |= (var_6 || var_0);
                            var_15 = (max(var_15, ((var_8 != (((((var_2 ^ (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]))))))))));
                        }
                    }
                }
            }
            var_16 = ((((((var_0 ? var_1 : var_7)) ? (var_4 / var_6) : (((var_2 != (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1]))))))));
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_17 *= (((((((var_7 % (arr_17 [i_0] [i_0] [i_5] [i_6 - 1])))) ? -var_9 : ((-(arr_17 [i_0] [i_0] [i_5] [i_6]))))) != (arr_10 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6])));
                    var_18 *= 108;
                }
            }
        }
    }
    var_19 *= (((((!(!8885)))) * (!var_9)));
    #pragma endscop
}
