/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((var_10 | ((4294967295 ? 1489350649 : 9137949723004375967))))));
    var_20 = 87;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = ((168 ? -8701849282774213335 : 3381682426433669543));
                                var_22 ^= ((~(min((-127 - 1), 15740735723609673723))));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((117 ? (arr_8 [2] [2] [i_2] [i_1]) : (((var_16 % (arr_8 [0] [i_1 + 2] [i_1] [i_1 - 1]))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_24 ^= (arr_22 [i_5] [i_5] [i_5] [i_5]);
                            arr_25 [i_7] [i_6] [3] [i_7] = (((35184371564544 || var_12) && (((~((59713 ? var_4 : var_8)))))));
                        }
                    }
                }
                arr_26 [i_5] [i_6] [5] = 1;
            }
        }
    }
    #pragma endscop
}
