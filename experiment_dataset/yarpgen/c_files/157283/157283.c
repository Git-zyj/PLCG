/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 *= (((((3923649723 ? (arr_2 [i_0]) : ((var_3 ? -96 : (arr_0 [i_0])))))) ? (min((min(412938678, (arr_1 [21]))), (((4294967287 < (arr_2 [20])))))) : ((max((((arr_0 [i_0]) | 3923649738)), (((18254717917228552052 ? -107722008 : (arr_2 [i_0])))))))));
        arr_3 [i_0] [i_0] = (min(((((58 ? 1 : (arr_2 [i_0]))))), (min(32, (min(15935916441916821787, (arr_2 [6])))))));
        var_15 += (max(((((arr_0 [i_0]) / (arr_0 [i_0])))), ((((min(18269975766176634243, (arr_2 [i_0])))) ? -65535 : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = (min(var_16, ((((((262013868 ? ((min((arr_0 [i_1]), (arr_0 [i_1])))) : ((((arr_4 [12] [12]) <= (arr_6 [i_1]))))))) ? ((-(arr_5 [i_1]))) : 0)))));
        var_17 &= ((((arr_4 [i_1] [i_1]) && (arr_4 [i_1] [i_1]))) ? 65535 : ((((min((arr_6 [i_1]), var_0))) ? (((arr_0 [i_1]) ? var_3 : var_3)) : (arr_2 [i_1]))));
        arr_7 [i_1] [i_1] = (((0 + -34) <= (arr_4 [i_1] [11])));
        var_18 *= (min((arr_6 [i_1]), 594436303));
    }
    var_19 |= var_7;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [11] [i_4] [i_2] [i_6] = ((((4294967295 && (12 | 14680064))) ? ((((min(371317558, (arr_9 [i_6]))) << (arr_12 [i_6] [i_5] [9])))) : (arr_5 [i_2])));
                                var_20 *= (min(var_4, ((min((arr_2 [1]), (arr_14 [i_4] [i_2]))))));
                            }
                        }
                    }
                }
                var_21 += (((((2047 << (((arr_8 [i_2]) - 25445))))) ? 244172418 : (((((arr_8 [i_2]) <= (arr_8 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
