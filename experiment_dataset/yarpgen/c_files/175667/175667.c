/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(61178, (min(8157, var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((61189 ? 4357 : 4357)), (((((((arr_1 [i_1]) ^ var_17))) || (arr_4 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((min(((~(arr_10 [i_1] [i_1] [i_2 + 2] [19]))), (arr_5 [i_0] [2] [2]))))));
                                var_22 *= (((arr_7 [i_0] [i_1]) ? (max(var_4, (arr_7 [i_1] [i_3]))) : var_3));
                            }
                        }
                    }
                }
                var_23 = ((((arr_9 [i_1] [i_1] [i_1] [i_0]) << (((arr_0 [i_0]) - 39754)))));
                var_24 = (max(var_24, 4357));
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
