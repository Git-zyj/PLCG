/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_17 = (min(var_17, (((var_4 ? 112 : (arr_3 [i_1] [4] [i_2]))))));
                    var_18 = ((((((arr_4 [i_2] [i_1]) ? 32 : (arr_4 [i_1] [i_2])))) ? 112 : 32752));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] = var_13;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [7] [i_0] [i_0] [i_0] [i_0] = (arr_17 [i_0 + 3] [i_1] [i_3] [5] [i_5]);
                                arr_19 [i_0] = 16383;
                                var_19 ^= var_16;
                                var_20 += ((-(((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 2])))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (((!((((min((arr_16 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0]), var_3)) / (arr_5 [i_0 + 3])))))))));
            }
        }
    }
    var_22 = ((var_8 != ((((var_9 ? var_7 : var_2)) & ((max(170, 0)))))));
    var_23 |= var_13;
    #pragma endscop
}
