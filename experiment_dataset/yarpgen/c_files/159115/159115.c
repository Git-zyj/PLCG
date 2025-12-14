/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((~((((arr_0 [i_0 - 1]) || -65535))))))));
                arr_4 [i_0] = (min((max((arr_1 [i_0 + 2] [i_0 + 1]), (arr_3 [i_0 - 1] [i_1] [i_0]))), 5638342767776716429));
                var_12 = ((3693405892 * (arr_0 [i_0])));
            }
        }
    }
    var_13 = (min(var_1, var_1));
    var_14 = (var_1 && var_0);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_15 += ((1 * (((~var_8) % (var_4 || var_7)))));
                            var_16 = (max(var_16, (--3693405892)));
                            var_17 = (max((arr_15 [i_5 + 1] [i_3] [i_4] [i_2]), (((min(6003389031159015847, 2975740021)) / -33167))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_18 &= -5169235798714713538;
                            var_19 &= ((((~(arr_5 [i_7]))) & (~var_6)));
                        }
                    }
                }
                var_20 = (min(var_20, ((((((~(arr_20 [20] [i_2] [i_3] [i_3] [i_3] [i_3])))) * var_8)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_21 = ((((~(~var_4))) <= -16080221));
                            var_22 = (min(var_22, (((max(-34, var_6))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 22;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_23 = (max(var_23, var_0));
                            var_24 -= (min(((-((-(arr_32 [1] [i_13] [i_12]))))), (arr_28 [i_13] [i_11])));
                        }
                    }
                }
                var_25 += 1;
            }
        }
    }
    #pragma endscop
}
