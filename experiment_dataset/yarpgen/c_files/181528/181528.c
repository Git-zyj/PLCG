/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((max(((min(var_2, var_5))), ((108 ? 69 : 98))))) ? (var_7 == var_10) : ((-50 ? (~32767) : var_11))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = var_4;
                                var_14 += -15497;
                                arr_12 [18] [9] [1] [2] [11] [i_1] = (!32);
                                var_15 = (((123 | 76) ^ (arr_6 [i_1] [i_4 - 1])));
                                var_16 -= (arr_5 [i_4] [1] [15] [1]);
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_2] [i_2] = (((max(-1319, 63757))));
                    arr_14 [i_0] [i_0] [i_1] [i_1] = 25931;
                    arr_15 [i_1] [i_1] [i_2] = ((912949958 * (((arr_4 [i_1]) ? var_11 : ((min(-32756, var_5)))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 ^= -32756;
        var_18 = (min(var_8, ((+((((arr_8 [i_5]) <= 0)))))));
    }
    #pragma endscop
}
