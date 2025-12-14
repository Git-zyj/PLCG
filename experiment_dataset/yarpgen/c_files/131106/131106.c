/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((min((max(var_4, 343284177)), (1 || var_9)))) ? (((var_0 >= ((3951683119 ? -2218168579094917215 : 3951683121))))) : var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((((max((arr_1 [i_0]), ((-1556479715 ? 3951683119 : (arr_10 [i_0] [i_1] [14] [i_3] [i_4] [i_0])))))) ? (min(-1, 1252650116)) : (((-9223372036854775807 - 1) + 58395))));
                                var_19 = ((3 ^ (arr_4 [i_0])));
                                var_20 = ((!((min((!1), var_1)))));
                            }
                        }
                    }
                    var_21 = (max((~9223372036854775807), (((4294967288 ? var_5 : (arr_3 [i_0] [i_1] [i_1]))))));
                    arr_14 [i_0] [i_1] [i_2] = ((((arr_10 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_10 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 + 1]))));
                }
            }
        }
    }
    #pragma endscop
}
