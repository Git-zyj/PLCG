/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (((((arr_2 [i_2 - 2]) ? 6970667402812263673 : (arr_2 [i_2 - 2]))) ^ (arr_2 [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 ^= (((6970667402812263673 ? 7936 : -627)));
                                var_19 = (max(((1341809299 ? -817927005277788108 : -817927005277788108)), ((((arr_11 [i_2 + 2] [i_2 + 2] [i_2]) ? (arr_12 [i_2] [i_2 + 2] [i_2] [i_2] [i_2 - 2]) : (arr_11 [i_2] [i_2 + 2] [i_2]))))));
                                var_20 = arr_4 [i_0] [i_1];
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((max(var_5, -19508)))) == (max(((14251931041415165134 ? -817927005277788108 : 27)), (var_2 % var_12)))));
    var_22 = ((var_4 ? var_9 : var_15));
    var_23 = (max(var_7, ((var_13 << (((((-32767 - 1) ? var_15 : var_16)) - 3877022963))))));
    #pragma endscop
}
