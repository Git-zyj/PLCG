/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((-108 - -113) + (arr_2 [i_0 - 1]));
                var_15 = (max(var_15, (((1 ? 1 : 31)))));
                arr_6 [i_1] = ((-(arr_0 [i_1])));
                var_16 ^= (((((arr_2 [i_0]) ^ (arr_3 [i_0 - 4] [i_0 + 1] [i_0]))) % (1 <= 4294967294)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_11 [4] = (((arr_7 [i_2]) != (arr_9 [i_2] [i_2])));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_14 [i_2] [16] [16] = (arr_8 [i_2]);
                    var_17 = (max(var_17, (((var_8 ? (((65535 ? var_6 : var_1))) : (arr_8 [i_2]))))));
                    var_18 = (max(var_18, 156));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_18 [i_2] = -815;
                    arr_19 [0] [0] = (((((((((arr_16 [i_2] [i_2]) ^ 4294967295))) / (arr_15 [i_5] [i_2] [i_2])))) ? (arr_10 [i_2]) : 1));
                    var_19 = (((((-(arr_13 [i_2])))) ? (arr_10 [i_2]) : -1155540733304669063));
                }
            }
        }
    }
    var_20 &= var_2;
    var_21 = (var_11 | var_8);
    #pragma endscop
}
