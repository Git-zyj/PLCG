/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 * var_4) * (((((2014999464719630666 / (-9223372036854775807 - 1))) * ((var_6 ? var_2 : var_6)))))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 |= 7;
                            var_14 = (var_0 / 1);
                            arr_12 [i_0] [i_1] [i_2] = (((min(1, (~var_1))) % var_0));
                        }
                    }
                }
                var_15 &= 18446744073709551615;
                var_16 ^= ((((1 ^ (var_5 / 57230))) % var_9));
                var_17 ^= (max((((var_8 * 17475618110190723708) / 13735229849836297979)), ((((28453 ^ 1) ? -var_8 : 37069)))));
            }
        }
    }
    #pragma endscop
}
