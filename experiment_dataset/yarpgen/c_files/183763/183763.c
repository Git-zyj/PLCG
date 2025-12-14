/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 ^= (max((max((arr_1 [i_2 - 1]), (arr_1 [i_2 - 1]))), (max((arr_5 [i_2 + 1]), (arr_5 [i_2 + 1])))));
                    var_18 = (((arr_6 [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) ? (min(var_9, (arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2]))) : (((arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ^ (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [1])))));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_19 = ((!(((~(arr_6 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [11] [i_3 - 2] = (max(((min(((min(33004, 1))), (arr_7 [i_1])))), ((((~(arr_0 [i_0]))) + -33030))));
                    }
                }
            }
        }
    }
    var_20 &= ((32535 ? 32506 : 1193491178));
    var_21 = (((1 < (var_5 && var_1))));
    var_22 = (min((((((var_0 ? var_0 : 17))) ? (((9187343239835811840 ? var_9 : var_15))) : (8 * 1))), var_9));
    #pragma endscop
}
