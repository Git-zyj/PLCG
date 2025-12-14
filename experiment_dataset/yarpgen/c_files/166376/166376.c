/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_10 = (((((var_9 ? 617617625 : (arr_4 [i_1 - 3])))) ? (-5556408566402634856 + -1) : ((max(255, (var_7 ^ -2147483646))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] [i_3] [i_3] = (617617625 ? var_5 : (max((arr_5 [i_3 - 4] [i_1 - 2] [i_1 - 2]), (arr_5 [i_3 - 2] [i_1 - 1] [i_1 + 1]))));
                                var_11 -= var_8;
                                var_12 = (arr_11 [i_3] [i_2] [i_0]);
                                arr_15 [i_0] [i_3] [i_0] [11] [i_3] [i_0] = ((((((((11 ? (arr_13 [i_0] [i_1] [i_0] [i_2] [i_3] [1] [i_4]) : 254))) ? 255 : -2745651656462044217))) ? var_0 : (3919335186 ^ -12)));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_1] = (min(8319331588760278270, 1569071938));
                    arr_17 [i_0] [8] [i_0] = (min((8060803504251216785 <= 3677349671), 3677349669));
                    var_13 = ((247 ? 34 : (-2147483647 - 1)));
                }
            }
        }
    }
    var_14 |= var_9;
    #pragma endscop
}
