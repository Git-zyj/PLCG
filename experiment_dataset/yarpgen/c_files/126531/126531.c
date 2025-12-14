/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((29375 >> (29368 - 29360)))), (((var_3 % var_8) ? var_18 : var_0))));
    var_20 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 &= ((((max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [7] [i_1])))) ? (((arr_4 [7]) % (((~(arr_1 [i_1])))))) : (0 & 1)));
                var_22 ^= (((((arr_4 [7]) ? var_5 : (var_18 && 0))) * (arr_0 [i_1])));
                var_23 = (max(var_23, (~29376)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_13 [i_2] = var_6;
                var_24 = (min(var_24, (arr_9 [i_2 + 2] [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_20 [i_2] [i_4] [i_2] = (((arr_11 [i_2] [i_2 - 3] [i_2]) ? (min((arr_11 [i_2] [i_2 - 2] [i_2]), (arr_11 [i_2] [i_2 + 1] [i_2]))) : (((arr_11 [i_2] [i_2 - 3] [i_2]) ? (arr_11 [i_2] [i_2 + 1] [i_2]) : (arr_11 [i_2] [i_2 - 1] [i_2])))));
                            var_25 = min(7, (((((arr_9 [2] [i_2 + 1]) * 29382)))));
                            var_26 = (max(var_26, (((((((((arr_19 [i_2] [i_2] [i_3] [i_4] [i_5] [i_2]) * 250))))) / ((var_1 % ((105 - (arr_9 [i_2] [i_2]))))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {
                    var_27 = (35868 >= 45961);
                    var_28 = (arr_22 [i_7]);
                    var_29 *= 7;
                    arr_29 [i_6] &= ((16384 % (((arr_27 [i_8 + 2] [i_8 - 2] [i_6]) % (((arr_24 [i_6] [i_7] [i_8 - 1]) ? 5 : 65535))))));
                }
            }
        }
    }
    #pragma endscop
}
