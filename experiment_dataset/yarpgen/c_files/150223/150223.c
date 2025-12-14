/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((((min((arr_2 [i_0 - 4]), var_1))) ? (((arr_2 [i_0 - 4]) ? 161 : var_3)) : (arr_2 [i_0 - 4])))));
                var_13 = var_3;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_14 = -1;
                            var_15 = 6872;
                            var_16 ^= (!var_7);
                            arr_8 [i_3] [1] [1] [i_0 - 3] = -604718507;
                        }
                    }
                }
                arr_9 [i_0] = (((1159235397 ? 17579 : ((-17579 ? 17848 : -17559)))));
            }
        }
    }
    var_17 = var_5;
    var_18 = var_2;
    var_19 += (((((8191 ? var_10 : ((1 >> (var_2 + 98928991)))))) ? -17605 : ((var_6 ? var_7 : (3928880542 <= -17605)))));
    var_20 = ((((var_5 ? ((min(var_5, var_6))) : var_9)) << var_1));
    #pragma endscop
}
