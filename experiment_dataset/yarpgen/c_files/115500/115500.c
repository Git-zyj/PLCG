/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_18 = ((((arr_0 [i_0 - 4] [i_0]) + (arr_0 [i_0 + 1] [i_0]))) - -29);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_19 = (min((arr_7 [i_0] [i_2 - 2] [i_3]), 189));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_20 = ((((min((arr_5 [i_0] [i_0] [i_0 - 4] [22]), (arr_5 [i_0] [i_0] [i_0 - 4] [i_0 - 4])))) ? (arr_5 [i_0] [20] [i_0 - 1] [i_0]) : (max(var_7, (arr_5 [i_0 - 1] [i_0] [i_0 - 4] [i_0])))));
                            arr_15 [i_3] [i_2] = (-32767 - 1);
                            arr_16 [i_4] [i_2] [i_3] [i_2 + 1] [i_2] [i_0 - 1] = 15472;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 |= ((52 ^ ((69 << (197 - 181)))));
                            var_22 ^= var_9;
                            arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_2] = 7;
                        }
                        var_23 = (((((1 ? 50057 : ((10 ? 62 : 0))))) ? (max((arr_8 [i_2] [i_1 - 2] [i_0 - 2] [i_2]), var_11)) : var_16));
                    }
                }
            }
        }
        arr_22 [i_0] = var_3;
    }
    var_24 = var_6;
    #pragma endscop
}
