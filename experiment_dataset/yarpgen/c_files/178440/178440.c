/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 *= (min(((((max(var_0, var_1))) ? 39298 : var_8)), -var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 = 0;
                            var_16 = (arr_1 [i_1 + 2] [6]);
                        }
                    }
                }
                var_17 = (arr_5 [i_0]);

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_18 = (((max((arr_4 [i_0] [i_1 + 2]), var_2)) / (((max(239, 231))))));
                    var_19 = ((((max((((arr_7 [i_4]) <= (arr_0 [i_4] [i_1 + 2]))), (arr_6 [i_1 + 1])))) > ((((max(49152, (arr_9 [i_1] [i_1 - 1] [5] [5]))) != (arr_7 [i_0]))))));
                    var_20 = ((((arr_7 [i_1]) <= (min(1048572, var_5)))));
                    var_21 += ((((((!((min(1811064509, -51))))))) + (min((arr_4 [i_1 - 1] [i_1 + 2]), (arr_4 [i_1 + 2] [i_1 + 2])))));
                    var_22 ^= max((arr_11 [i_4] [i_1] [1] [i_0]), ((max((min(var_2, (arr_7 [8]))), var_2))));
                }
                arr_12 [i_0] = (~1);
            }
        }
    }
    #pragma endscop
}
