/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));
    var_12 = var_8;

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0 - 3] [20] [i_2] &= -3314678508493415596;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [1] [i_1] [i_4] [i_1] [i_1] [i_1] |= -3314678508493415596;
                                var_13 ^= 1;
                                arr_12 [i_1] = arr_4 [18];
                                var_14 ^= var_2;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [i_5] = -1;
                        arr_23 [i_0] = ((~(((((max(var_3, var_3)))) + (min(16161, 17592186044415))))));
                    }
                }
            }
        }
        var_15 = (((((var_7 ? 49375 : 3314678508493415607))) | var_2));
        arr_24 [i_0] [i_0] = (((((var_0 ? var_10 : (arr_4 [i_0 - 3])))) ? (!var_10) : var_9));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        var_16 *= ((((((arr_9 [i_8] [i_8] [i_8] [i_8] [11] [i_8] [11]) - 3314678508493415622))) ? 16 : ((-3314678508493415607 ? 49375 : (arr_19 [i_8] [i_8] [i_8] [i_8])))));
        var_17 |= var_7;
    }
    var_18 = (((var_4 + 2147483647) << (((min(((49376 ? -97 : 3067498423)), (1 & var_5))) - 1))));
    #pragma endscop
}
