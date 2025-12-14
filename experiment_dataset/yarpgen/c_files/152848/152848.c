/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_3));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (((var_7 ? (arr_0 [i_0] [i_0]) : var_10)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = var_4;
                                arr_15 [4] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((var_5 % (((((arr_3 [i_0]) ? var_8 : (arr_3 [i_4]))) + var_5))));
                            }
                        }
                    }
                    var_14 *= arr_12 [i_0] [i_0] [i_1] [i_1] [i_0];
                    var_15 = ((((((arr_4 [i_2]) ? (var_9 <= var_0) : (arr_6 [i_0])))) ? (((((arr_14 [i_1] [i_1] [i_0] [i_0] [i_2]) <= (arr_1 [i_0] [i_0]))))) : (((-1319044195686767426 == 17077400509008631001) << (((((((arr_13 [6] [8]) + 9223372036854775807)) << (((arr_12 [i_0] [i_0] [i_1] [i_1] [i_2]) - 30)))) - 7981926988964369509))))));
                }
            }
        }
    }
    var_16 = (((var_6 + 2147483647) << ((((var_8 - (((var_8 ? var_0 : var_1))))) - 17518193252150530510))));
    #pragma endscop
}
