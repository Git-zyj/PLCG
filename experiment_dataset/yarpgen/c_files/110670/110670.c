/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((((arr_7 [i_2 + 2] [i_2 + 2] [i_2 + 2]) + (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) + ((~(arr_7 [i_2 + 2] [i_2] [i_2])))));
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (((arr_1 [i_0]) ? (((((65533 ? 65532 : 21))) ? (((arr_5 [i_0]) ? var_14 : var_15)) : var_10)) : ((~(~var_15)))));
                    var_16 += ((((((((var_10 ? (arr_0 [i_0]) : (arr_1 [i_1])))) ? (43860 && -1) : (((arr_3 [i_0] [i_2]) ? var_8 : (arr_2 [i_0])))))) && ((-6 || ((678340415 && (arr_5 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((((max(37, (arr_12 [i_0] [i_0] [i_0] [i_3] [i_0])))) || (((var_4 ? var_6 : var_0))))) ? ((~(arr_11 [i_1 - 4]))) : ((max((max(var_5, (arr_4 [i_3]))), (arr_13 [i_0] [i_1] [i_1]))))));
                                var_17 = ((+(max((~var_9), (arr_6 [i_1 + 1] [i_2 + 2] [i_1 + 1])))));
                                var_18 &= (max(65518, ((((var_4 >> (var_14 - 32435))) << (((~195) + 223))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 = max((max((!var_15), ((var_2 ? 195258098 : var_12)))), (((((((arr_13 [i_0] [i_0] [i_0]) >= 501487079))) * (!65534)))));
    }
    var_20 *= -13154;
    #pragma endscop
}
