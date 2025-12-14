/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] = ((((var_5 ? ((27162 << (var_8 + 121))) : 0)) ^ var_3));
                            arr_10 [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_2 - 2] [i_0]);
                            var_14 = ((!((((-1898785026 + 2147483647) << (21876 - 21876))))));
                            arr_11 [i_0] [8] [i_0] [4] = (max(((+(((arr_5 [i_0] [i_1 - 2] [i_2 - 1] [1]) ? var_7 : 0)))), ((min((!1), (!var_9))))));
                        }
                    }
                }
                var_15 -= (max(var_1, ((~(~var_1)))));

                /* vectorizable */
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    var_16 = 1898785025;
                    var_17 = (min(var_17, (((0 ? 13434 : (arr_2 [i_1 + 1] [i_1 - 1] [4]))))));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_18 *= var_0;
                    var_19 = (((arr_7 [i_1 - 3] [i_1] [i_5] [i_0]) ? -123 : ((min(var_10, (arr_8 [i_0] [i_1]))))));
                }
            }
        }
    }
    var_20 = var_6;
    var_21 = var_10;
    #pragma endscop
}
