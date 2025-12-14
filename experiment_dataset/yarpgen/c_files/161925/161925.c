/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((var_15 >> ((((arr_0 [i_0] [i_0]) >= var_11)))))) % (((((5 ? (arr_1 [i_0 - 1]) : (arr_1 [15])))) ? (~-10) : (var_7 ^ 10)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] = (((((((min(11, -11))) + 2147483647)) << (((((arr_9 [i_4] [3] [i_1 + 3] [i_0]) ? 11 : -15223)) - 11)))));
                                arr_16 [14] [i_3] [i_0] [i_0] [i_0] [i_0] = -9223372036854775804;
                                arr_17 [i_0] [i_0] = ((!((min((arr_7 [i_4 + 1] [i_3] [i_0]), (!var_12))))));
                            }
                        }
                    }
                }
                var_17 = ((((((arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 3]) ? 30 : (arr_9 [i_0 + 1] [i_0 + 1] [i_1 + 3] [i_1 + 2])))) ? (arr_12 [i_0 - 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1]) : (arr_12 [i_0 - 1] [6] [2] [i_1 + 1] [i_1])));
                arr_18 [i_0] [i_0] = ((!(((arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0]) != 6394193622507706438))));
            }
        }
    }
    #pragma endscop
}
