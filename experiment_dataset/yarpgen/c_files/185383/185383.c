/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((20396 ? 30613 : 30613)));
    var_16 = ((1753202310276899284 ? 15431 : 127));
    var_17 = ((-((min(var_13, ((max(var_1, 29))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 *= (arr_5 [i_0] [i_0] [i_0]);
                            var_19 = (max(((min(((max(var_5, 1))), (max(36356, -836251405))))), ((var_3 ? ((6425030768310520389 ? (arr_1 [i_0]) : var_10)) : (((var_8 / (arr_5 [i_0] [i_1] [i_2]))))))));
                            arr_11 [0] [i_1] [i_1] [i_0] = ((-((4052199214 ? (var_10 > 1036895978) : 0))));
                            var_20 = (max((min((arr_7 [i_3 + 1] [i_3] [2] [i_3]), (min(var_7, 19657)))), (((((1 ? 19 : 0)) >> (((((arr_2 [i_0] [i_0]) ? var_5 : 193)) + 55)))))));
                        }
                    }
                }
                var_21 ^= (arr_0 [i_0]);
                arr_12 [i_1] [5] = ((!((((((-29387 ^ (arr_3 [i_0])))) * (max(1, (-9223372036854775807 - 1))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [0] [0] [i_5 - 3] [i_5] [i_5] &= (22061 ^ -11158);
                            var_22 = (min(((((-22332597 ? (arr_16 [i_0] [i_1] [i_1] [9] [i_5]) : var_7)) - (0 + 235))), 1));
                            arr_19 [i_0] [i_1] [i_4] [i_0] [i_1] = 65535;
                            arr_20 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_23 = 250;
    #pragma endscop
}
