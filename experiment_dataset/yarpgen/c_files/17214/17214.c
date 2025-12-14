/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((!var_2) ? ((-((var_15 ? var_6 : 196739792044480625)))) : var_3));
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (max(-63, (var_5 < var_17)));
                    arr_9 [i_0] [i_1 - 1] [8] [i_1 + 1] = (((72 >> ((var_16 >> (2305267079 - 2305267063))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = ((-((1989700216 ? 1989700193 : 63728))));
                                var_21 *= (-18891 ? (min(1377080422, var_3)) : (((min(-94, -48)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
