/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (-32 > 9223372036854775788)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_17 = ((-(arr_2 [i_2 - 1] [i_2 + 1])));
                            var_18 = ((!(((-168439440 ? 1006632960 : (-32767 - 1))))));
                            var_19 = (((!(arr_0 [i_0] [i_0]))));

                            for (int i_4 = 2; i_4 < 16;i_4 += 1)
                            {
                                var_20 = (arr_10 [i_4] [i_4 - 1] [i_3] [i_3] [i_2 - 1] [i_1] [i_0]);
                                var_21 = (!152);
                            }
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_5] [i_0] [i_5] = 362;
                                var_22 += ((((arr_10 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2] [i_2 - 2] [i_2 + 1] [i_1]) >= (arr_10 [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_1]))));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_23 *= ((~(arr_6 [i_6] [i_2] [i_1])));
                                var_24 = 0;
                                var_25 = (max(var_25, (!-1)));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                var_26 ^= ((((((-9223372036854775807 - 1) >= 65174))) & (arr_6 [i_0] [i_1] [i_2 - 2])));
                                var_27 |= ((~(arr_7 [i_0] [i_2 - 2] [i_2])));
                            }
                        }
                    }
                }
                var_28 *= 127;
                arr_18 [i_0] [i_0] [i_0] = 43554;
            }
        }
    }
    var_29 += var_0;
    var_30 = var_11;
    #pragma endscop
}
