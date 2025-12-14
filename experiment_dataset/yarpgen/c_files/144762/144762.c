/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_5 ^ (((((1382955317 ? var_6 : -26059))) ? 26058 : 8388604)));
    var_11 = var_3;
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_0 - 2] = (min(((((max(8388604, 9223372036854759424)) > 9223372036854792192))), (((arr_1 [i_1]) ? (max((arr_0 [i_0] [11]), 9223372036854759421)) : (min((arr_2 [10] [i_1]), var_3))))));
                var_13 *= (max(-14, ((((min(2394, -58))) ? -26072 : 249))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 -= (((arr_2 [i_2] [i_0]) + -var_0));
                    arr_7 [i_0] [i_1] [i_2] = (((((~(arr_5 [i_2])))) ? (-14 != 32745) : (arr_1 [i_0])));
                }
                var_15 ^= ((((arr_6 [i_0] [i_0] [i_1 + 2]) ? 231 : (9223372036854759424 | 8388604))));
            }
        }
    }
    var_16 = -1;
    #pragma endscop
}
