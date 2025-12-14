/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (-3755523649565615818 == var_8);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_13 = var_1;
        var_14 = var_10;
        var_15 += (22351 * -53);
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_16 ^= ((-var_3 && (arr_3 [i_1 + 1])));
        arr_5 [i_1] = (((min((arr_2 [i_1 + 1]), var_7))) ? ((min(var_4, 8581038588567453517))) : (~15519));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 |= (62110 + 56997);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_18 *= (~65533);
                                arr_16 [i_1] [10] |= (17563315732012539215 - 10471786518918580512);
                                arr_17 [i_1] [i_2 - 2] [0] [i_4 + 1] [i_5] &= -22347;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_19 -= ((2530845947 ? ((((min((arr_20 [i_1] [i_2 - 2] [i_3] [i_6 - 2] [i_7 + 1]), 22318))) ? (arr_7 [i_7] [i_7]) : (arr_20 [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6]))) : 22359));
                                var_20 = max(1, 80);
                            }
                        }
                    }
                    arr_22 [0] [0] &= (((((((min(var_10, -22318))) ? (((arr_21 [0]) ? (arr_18 [i_1 - 2] [i_1] [i_1] [i_1] [22] [14]) : var_11)) : (((-66 ? 15516 : 22346)))))) ? (((((var_11 << (var_5 - 199125758)))) ? (77 >= 1) : 8525)) : ((9 ? 22346 : 56874))));
                }
            }
        }
        arr_23 [i_1] = 22346;
    }
    var_21 = (min(10471786518918580500, (-28677 >= 91)));
    #pragma endscop
}
