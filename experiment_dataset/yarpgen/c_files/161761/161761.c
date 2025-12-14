/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 *= ((+((((0 | -9223372036854775806) == var_12)))));
        arr_2 [i_0] [i_0] = (var_3 || var_10);
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_1] = ((((min((arr_9 [i_1 + 1]), (arr_9 [i_1 - 1])))) - 16953));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_13 [i_1] [i_3] [i_1] = var_12;
                    var_14 ^= ((-639766196 && (arr_1 [i_1 - 2])));
                    arr_14 [i_3] = (!1330297805);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] = -11553;
                            arr_20 [i_5] = ((((((841969883785790194 != (arr_17 [i_1] [i_1] [i_1 - 1] [i_1]))))) - ((1 ? 254 : 8458396880721378596))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
