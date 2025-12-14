/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-2147483637 == 65526);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [0] |= (max((arr_6 [i_0] [12] [12] [i_2]), (((((min((arr_5 [i_0]), (arr_1 [i_0] [i_1])))) | 96)))));
                    var_14 = (max(var_14, (((255 <= 65308) > (min((266 + 128), var_6))))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_15 ^= (arr_7 [i_2]);
                        var_16 = (((((arr_7 [i_3 - 1]) ^ (arr_0 [i_3 + 2]))) ^ (65281 - 18446744073709551615)));
                    }
                    var_17 += 25;
                }
            }
        }
    }
    #pragma endscop
}
