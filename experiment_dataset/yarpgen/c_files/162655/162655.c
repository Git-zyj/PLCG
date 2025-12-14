/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(((((var_10 >> (var_2 + 11693)))) ? (~var_12) : 3298616649630047115))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= 224;
                    arr_7 [0] [0] [i_2] [i_2] = var_6;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [8] [i_3] = 10144;
                        var_15 = (min(var_15, (((~(((arr_2 [i_0] [i_0 - 2]) ? var_8 : 19606579394994373)))))));
                    }
                    arr_11 [i_2] [i_0] = (((~15148127424079504500) ? (min(((max(-48, 4))), 3298616649630047143)) : (!18446744073709551601)));
                }
            }
        }
    }
    var_16 = var_11;
    #pragma endscop
}
