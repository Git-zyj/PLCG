/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -2198989701120;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((((((251 + var_12) ? (arr_7 [i_0] [i_0] [i_2]) : (arr_7 [i_0] [i_0] [i_0])))) ? (((((~17) + 2147483647)) >> (((~var_1) + 186)))) : ((((arr_2 [i_0] [i_1]) <= (~var_10))))));
                    var_14 += ((!(arr_0 [12] [12])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_15 = var_3;
                            arr_19 [i_3] [0] [i_4] [i_3] [i_6] = ((~(((var_5 <= (arr_11 [i_3 - 2] [i_3 + 2]))))));
                        }
                    }
                }
                arr_20 [i_3] = (((((((max(-31, 12))) ? (((min(251, 3944)))) : (arr_1 [i_3] [i_4])))) ? (~var_0) : var_2));
                arr_21 [i_3 - 1] [i_3] [i_3] = ((!(((-(arr_16 [i_3] [i_4]))))));
                arr_22 [i_3] = ((max(var_11, var_12)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                var_16 = ((4 || (arr_23 [i_7])));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_34 [i_7] [i_8] [i_7] [i_10] [i_7] = (arr_29 [i_7] [i_7] [i_10]);
                            arr_35 [i_7] [i_7] [i_10] [i_7] [i_7] [16] = (min(((((!242) != var_0))), var_7));
                            var_17 = (min(var_17, var_3));
                            var_18 = (min(var_18, (--143)));
                            arr_36 [i_7] [i_8 + 2] [i_9] |= var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
