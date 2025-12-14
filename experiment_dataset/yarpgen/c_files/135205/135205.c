/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= (!838093621);
                var_13 += arr_4 [i_1];
                arr_6 [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 + 1] = (max((max(var_8, (arr_2 [i_1 - 3]))), (arr_2 [i_1 - 2])));

                            for (int i_4 = 2; i_4 < 15;i_4 += 1)
                            {
                                var_14 ^= (arr_16 [i_4] [i_3] [i_3] [i_3] [i_4] [i_3] [i_0]);
                                arr_18 [i_0] [i_2] [i_3] [i_1] = (((~-1767035072) ? 4323455642275676160 : ((((arr_13 [i_4] [i_1] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4 - 1]) & (arr_13 [i_4] [i_1] [i_4 + 3] [i_4 + 2] [i_4 - 2] [i_4 + 2]))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 18;i_5 += 1)
                            {
                                var_15 &= ((!(2147483645 && 4261257829)));
                                var_16 = (max(var_16, (((~(((arr_8 [i_0]) ? (arr_0 [i_1]) : (arr_2 [i_5]))))))));
                            }
                            var_17 = -3001266161563973722;
                        }
                    }
                }
            }
        }
    }
    var_18 = (((!var_1) || ((-3001266161563973746 || (7983193241253470776 && 66)))));
    #pragma endscop
}
