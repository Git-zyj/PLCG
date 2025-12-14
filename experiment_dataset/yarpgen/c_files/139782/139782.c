/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1 - 1] [i_1 - 1] = 54622;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [18] |= (((-(arr_7 [i_1 - 1]))));
                                arr_19 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1] [i_0] = ((((arr_0 [i_1] [i_1 + 1]) ? -1410311228 : (arr_9 [i_0] [i_0] [i_2 - 1] [i_4 - 1]))));
                                var_13 = (max(var_13, ((-(((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [4] [i_1 + 1]) : (arr_4 [i_1 + 1] [12] [i_1 + 1])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((((((var_4 + 2147483647) >> (var_8 - 11471954363289383671))) % 168))) ? var_9 : (((((var_2 ? var_6 : var_6))) ? ((255 ? var_2 : 1)) : var_9))));
    var_15 *= var_4;
    var_16 -= ((var_5 ? ((min(var_4, -96)) : ((168 ? var_0 : 47)))));
    #pragma endscop
}
