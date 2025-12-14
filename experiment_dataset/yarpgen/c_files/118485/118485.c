/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((((0 << ((var_7 ? 9 : var_11)))) == ((var_10 ? -var_16 : ((max(0, 0)))))));
    var_19 ^= 246;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 |= ((var_14 * (((((41429 ? 22531 : var_16))) ? ((0 ? var_16 : var_17)) : ((var_14 ? var_10 : var_11))))));
                var_21 = (max(((((min(65535, 71))) ? (41429 & 41429) : ((var_9 ? var_12 : 13211)))), ((max((min(var_17, -1)), ((-57 ? 246 : 255)))))));
                arr_5 [i_1] [1] [1] &= 0;
                var_22 = ((((var_4 ? var_1 : 0)) - ((3 ? 0 : 6237))));
            }
        }
    }
    #pragma endscop
}
