/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((~9911640299251969825) ? ((((var_1 ? var_2 : var_11)))) : (min(((var_3 ? var_15 : var_3)), 4094))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_17 = ((var_15 ? -88 : var_0));
        arr_3 [i_0] [i_0] = (((((var_7 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((arr_0 [i_0] [i_0]) ? 4294967295 : 0))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            {
                arr_11 [i_1] [2] = 55;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_17 [i_3] |= (arr_0 [i_1] [i_3]);
                            arr_18 [i_1] [i_4] [i_3] [6] = (arr_8 [i_1] [i_1]);
                            var_18 = (min(var_18, (((var_11 + ((~(min(var_14, (arr_0 [i_3] [i_3]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            arr_24 [i_6] [i_6] = (~var_15);
                            var_19 = (max(var_19, (arr_15 [i_1 + 2] [i_1 + 1] [i_2] [i_5] [i_6])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
