/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((var_8 ? var_11 : 32762))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((-(arr_7 [i_0] [i_1] [i_0]))) | (0 >= var_7)))))));
                var_14 = (((1 > 7987) ? ((-(arr_2 [i_0] [i_1]))) : ((1 ? var_0 : var_5))));
                var_15 = 8175442101998265821;
                var_16 -= (((arr_3 [i_0] [i_1]) ? (var_0 < 1) : (min((min(var_10, 1)), (arr_3 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_4] = (min((((~(2611948973 - 44)))), (((var_11 < var_2) ? ((-(arr_11 [i_4]))) : ((((arr_15 [i_3] [i_3] [i_2 + 2] [i_3]) | var_4)))))));
                    var_17 = (arr_13 [i_3] [i_4]);
                    arr_17 [i_2 + 1] [i_4] [i_4] = 10271301971711285794;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_18 = ((((15293483661435199030 ? 9947704204217714703 : 9223372036854775781)) | var_6));
                                var_19 = (min(var_19, (3153260412274352578 >= var_9)));
                            }
                        }
                    }
                    arr_24 [i_2] [i_4] = (arr_6 [i_4] [i_3] [i_2]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            {
                arr_30 [i_7] [i_8 + 2] = ((var_10 <= ((((((arr_29 [i_7] [i_8 - 1] [i_8 - 2]) - (arr_1 [i_8]))))))));
                var_20 = (((arr_29 [i_8] [i_8 - 1] [i_8]) ? (-2147483647 - 1) : (((((((arr_3 [i_8] [i_7]) ? 201 : (arr_5 [i_7] [i_7] [i_8 - 1])))) ? (var_7 < 245) : var_6)))));
            }
        }
    }
    #pragma endscop
}
