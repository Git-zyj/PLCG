/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 += (7270847891293984950 % (((195 ? 192 : 2706143351))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 -= (~255);
                        var_14 = (min(var_14, (24 > 198081203)));
                    }
                }
            }
        }
        arr_11 [i_0] = 3;
        arr_12 [i_0] = ((!((((arr_5 [i_0] [i_0] [i_0]) ? (arr_6 [i_0]) : 131064)))));
        var_15 = (((arr_6 [i_0]) ? 6210194936312817894 : (((arr_3 [1]) | 61))));
    }
    var_16 &= -9223372036854775802;
    var_17 = ((((max((var_3 || 1), -9223372036854775802)))) - var_10);
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                arr_18 [i_5] [i_5] [i_5] = 0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_18 ^= var_5;
                            var_19 = (min(var_19, ((((~34) ^ (arr_22 [i_5]))))));
                            arr_24 [i_7] = -7565622327120402444;
                        }
                    }
                }
                var_20 += (max(((var_2 ? -2136 : (max(-2137282542122148247, 3888217099)))), (!73)));
                var_21 = (((min((1 >= 32764), ((13 != (arr_23 [i_4] [21] [i_5] [i_5] [i_5]))))) ? ((((((((arr_20 [i_4] [i_5] [i_5]) ? 58357 : -32765))) && 74)))) : (min(198081196, (9857808638675239595 & var_7)))));
            }
        }
    }
    #pragma endscop
}
