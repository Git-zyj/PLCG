/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_12 && (!var_14))) ? (max((var_12 && var_0), var_6)) : 43717));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [0] = ((((min(4294967295, 0))) && 8));
                            var_19 = ((-(((((max((arr_4 [i_2]), (arr_0 [i_2] [i_1])))) && var_10)))));
                            var_20 = ((~(arr_3 [10])));
                            var_21 -= ((!((((arr_6 [i_0] [i_0 - 1] [i_2] [i_2 + 2]) ? -0 : (arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_22 *= 22199;
                            var_23 *= (min((max((arr_9 [i_0 - 1] [i_4 - 1] [i_5] [i_5 - 1]), (((~(arr_16 [i_0] [1] [i_0] [9])))))), ((((((arr_16 [i_0] [i_1] [i_1] [i_0]) && var_13)) ? (((84 && (-9223372036854775807 - 1)))) : (arr_5 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            arr_28 [i_8] [i_7] [i_8] [18] [i_7] = (((arr_23 [i_6] [i_7] [i_8]) && ((max((arr_22 [i_6] [16] [i_6]), (arr_19 [i_7]))))));
                            arr_29 [i_7] [i_7] [i_8] = ((+(min((-22195 && 1), (((arr_17 [10] [14]) ? (arr_27 [i_6] [i_7] [i_8] [i_9]) : var_8))))));
                            arr_30 [i_8] [i_6] [i_6] [i_6] [i_6] = (arr_22 [1] [i_7] [1]);
                        }
                    }
                }
                arr_31 [i_7] = ((((min((((-(arr_20 [20] [20])))), (min(var_3, (arr_21 [i_6] [i_6] [i_6])))))) ? (min(7759746856769350452, 6)) : (((8 ? (arr_22 [i_6] [i_6] [i_6]) : (arr_23 [i_6] [18] [i_7]))))));
                arr_32 [i_7] [18] [i_6] |= (arr_24 [i_6] [i_7] [i_6] [i_6]);
                var_24 = (max(var_24, (((-(arr_19 [i_7]))))));
                var_25 = (arr_27 [i_6] [i_7] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
