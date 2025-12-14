/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min((~var_9), var_13))) ? ((1 ? 511201439024428318 : 1)) : (((max(var_10, var_4)))));
    var_17 = ((var_15 && var_4) != var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 11;i_4 += 1)
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [8] = max(var_5, (var_11 && var_10));
                                arr_17 [i_4] [i_3] [i_0] [i_1] [i_0] = (((((min(1, (arr_11 [5] [i_2] [i_3] [5]))))) ? var_10 : ((((~(arr_1 [i_0] [i_3]))) * (!var_0)))));
                            }
                            arr_18 [i_0] [i_1] [i_0] = (((((((var_1 ? var_14 : var_3)) | -44))) ? (arr_6 [i_3] [i_0]) : 1241988017));
                            arr_19 [i_0] [i_2] [i_2] [6] = 262144;

                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                arr_23 [i_1] [i_1] [i_1] [3] [i_1] [i_1] = (-32 < var_6);
                                var_18 = 1;
                                var_19 = ((((((arr_3 [i_1] [i_0]) << (((arr_6 [i_5] [i_3]) ? 0 : -13))))) ? (min(((255 ? var_13 : (arr_3 [i_0] [i_3]))), 20)) : var_1));
                                arr_24 [i_5] [i_3] [i_1] [i_1] [i_0] = 2080374784;
                                var_20 = ((!((((((6659034248635529243 ? 1 : 1))) ? 1 : var_10)))));
                            }
                        }
                    }
                }
                var_21 = ((((min((arr_11 [2] [i_1] [i_0] [i_1]), (arr_20 [i_0] [1] [i_0] [i_0] [11] [i_1])))) && ((!((max(7, -1162)))))));
                arr_25 [i_0] = var_10;
            }
        }
    }
    #pragma endscop
}
