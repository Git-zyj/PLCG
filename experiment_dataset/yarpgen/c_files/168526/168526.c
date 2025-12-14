/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-6163772945498301178 ? var_7 : (((var_4 <= (min(var_11, var_3)))))));
    var_15 = ((((~194) ? (-10528 & 1167) : (5 & 21462))));
    var_16 = (!var_9);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] &= ((((((arr_7 [i_3 + 2] [i_1] [i_2 - 1] [i_4 + 3]) ? var_7 : 41))) ? ((~(arr_10 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_4 + 3]))) : ((min((arr_17 [i_3 + 3] [i_4] [i_2 - 2]), var_1)))));
                                arr_19 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = ((~(((arr_1 [i_0]) ? var_7 : ((max((arr_17 [i_0] [i_1] [i_0]), var_11)))))));
                                var_17 *= (arr_2 [i_4 + 4] [i_2 + 1]);
                                arr_20 [i_0] [i_0] = ((+(((!((((arr_9 [12] [i_0] [i_4]) ? (-32767 - 1) : 138))))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_2] [i_0] = ((-(((arr_17 [i_2] [i_1] [i_0]) ? 803675622 : 1))));
                    arr_22 [i_0] [i_1] = (((arr_0 [i_0]) && (arr_0 [i_0])));
                }
            }
        }
    }
    var_18 = var_4;
    #pragma endscop
}
