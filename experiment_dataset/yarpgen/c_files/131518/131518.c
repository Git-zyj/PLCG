/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 >> ((((var_3 ? var_4 : ((var_4 ? var_2 : -7377904269695721155)))) - 43973165))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((((min(-98, var_11))) ? -85 : (~var_10)));
                    arr_8 [i_0] [i_1] [i_0] [20] = ((4155491689 >> ((((17527 ? 236 : 5)) - 221))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((-7 ? (arr_4 [i_0]) : var_9));
                                var_17 = (arr_1 [i_1]);
                                var_18 ^= min(29302, ((3749243031 >> (((min(var_7, var_1)) - 26)))));
                                var_19 = (min(var_19, 3547289285));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                var_20 -= (((((((arr_15 [i_5]) <= 747678024)))) <= ((3391390344 << (3630404658 - 3630404638)))));
                var_21 &= (!-5204138314793962209);
            }
        }
    }
    var_22 = 245002399;
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {
            {
                var_23 = (min(var_23, (((min(747678023, 3630404666))))));
                var_24 = (((((-(arr_23 [i_7 + 2] [i_7 + 2] [i_8 - 4])))) ? (arr_23 [i_7 - 1] [i_7 - 4] [i_7]) : ((min(10, (arr_23 [i_7 - 2] [i_7 + 2] [i_8 + 1]))))));
                var_25 = ((var_3 >> (5204138314793962214 - 5204138314793962192)));
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_26 *= 1871470298;
                                var_27 = (!var_9);
                                var_28 = ((((-(arr_30 [i_8 - 3] [i_9 - 3] [i_9]))) == ((32756 >> (62 - 57)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
