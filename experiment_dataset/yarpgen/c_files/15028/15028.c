/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((((min(17264, 170))) ? var_9 : ((var_9 ? 18 : 44))));
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 ^= 22756;
                                var_21 = (arr_9 [i_0] [i_0] [i_0] [i_2] [i_3] [0]);
                                var_22 ^= -62;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_23 = (~-3030);
                        var_24 = (min(-2, 2147483647));
                        arr_18 [i_0] [i_1] [i_2] [4] |= (max((((((~var_10) + 2147483647)) << (((arr_6 [9] [i_1] [i_0] [i_5]) - 10)))), (arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_25 = (max(var_25, (((((var_12 ? 40212 : (arr_9 [5] [i_6] [i_0 - 2] [i_0] [i_0] [i_0]))) + ((max(10, (var_10 && var_10)))))))));
                        arr_23 [i_6] [i_1] [i_2] [i_6] [i_2] [i_2] &= 2147483629;
                        var_26 = (max(var_26, ((min(((min(-21, (!-117)))), -22)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_27 += ((((!(arr_10 [i_0] [i_1] [0] [i_7] [i_7]))) ? (~-809443254) : var_6));
                        var_28 ^= (((arr_0 [i_0 - 1] [i_1]) == 16739891918935428724));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_8] = (arr_5 [i_0 - 2]);
                        var_29 = -68;
                        var_30 &= ((-(min(1, ((0 ? var_12 : (arr_26 [1] [1] [i_2] [i_2] [i_2] [i_2])))))));
                    }
                }
            }
        }
    }
    var_31 -= ((~(!var_1)));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            arr_42 [i_10] = -33;
                            var_32 |= 2962055503;
                            var_33 ^= (((max((max(1841231820461332442, -47)), (!-56027224))) + (arr_38 [i_9])));
                        }
                    }
                }
                var_34 = var_1;
            }
        }
    }
    #pragma endscop
}
