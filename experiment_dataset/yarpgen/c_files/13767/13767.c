/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((53383 ? (arr_1 [i_0] [i_1]) : 73));
                var_10 = (((arr_3 [i_1] [1] [i_1]) - (((arr_0 [i_1]) ? var_7 : 6))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_11 = (min(var_11, ((((~2032) * 0)))));
                            arr_17 [i_2] = ((16547 ? 48665 : 12152));
                            arr_18 [i_2] [i_2] [i_4] [i_2] [i_2] [i_5] = ((+(((53364 % 1016) % ((min(1, 12150)))))));
                            var_12 = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_24 [i_6] [i_2] [i_6] [i_7] = (arr_9 [i_2] [i_2] [i_2]);
                            var_13 = 53378;
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_3, 1016));
    var_15 = ((53384 ? (((0 ? 22 : (-9223372036854775807 - 1)))) : (max(((max(63, 8231114763271060455))), 18446744073709551615))));
    var_16 = var_9;
    #pragma endscop
}
