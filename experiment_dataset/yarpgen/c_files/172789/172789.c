/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(3465841124472314533, 39217));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_1] [i_2] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] [0] [i_0] &= var_3;
                                var_12 *= (((~946017135) & 1));
                            }
                        }
                    }
                    var_13 = (!((((((var_6 ? (arr_9 [8] [16] [i_2]) : (arr_10 [i_2] [i_2])))) ? var_1 : ((var_0 >> (var_4 - 38516981)))))));
                    var_14 = (((~-24) >= ((((var_6 == 127) | var_5)))));
                }
            }
        }
        arr_20 [i_0] = ((var_4 == (arr_12 [i_0] [i_0] [i_0] [10])));
        var_15 = (max(var_15, ((max(((((min(var_8, 63840))) * (arr_9 [i_0] [i_0] [i_0]))), (~65535))))));
        var_16 = (min(593815998585411603, (arr_10 [8] [i_0])));
        arr_21 [i_0] = var_1;
    }
    for (int i_5 = 4; i_5 < 17;i_5 += 1)
    {
        arr_24 [i_5] = 18446744073709551615;
        var_17 += min((arr_22 [i_5]), ((52127 ? ((6625 ? 593815998585411603 : var_2)) : (((arr_22 [i_5]) ? 593815998585411632 : 7)))));
    }
    #pragma endscop
}
