/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (19037 ? ((~(min(7510977894505066797, var_1)))) : 0);
    var_18 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [0] [i_3] [i_3] &= var_8;
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 + 2] [i_2] = (max(((var_6 > (arr_7 [1] [1] [i_0] [i_4]))), (max(1, 1))));
                            }
                        }
                    }
                    var_19 *= ((((max((max(var_0, var_4)), 1))) ? ((((max(-124, 1099511627775))) ? -var_15 : (((max(1, var_5)))))) : (arr_3 [i_0 + 1] [6] [i_0 + 1])));
                    var_20 = ((((((arr_1 [i_0 + 1] [i_0 + 1]) | 3023502661))) ? (max(1, -1079565590)) : -1079565590));
                }
            }
        }
    }
    var_21 = (var_1 / var_16);
    #pragma endscop
}
