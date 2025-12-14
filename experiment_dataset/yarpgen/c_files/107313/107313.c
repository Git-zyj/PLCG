/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (~32767);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (min((((arr_7 [i_0 + 2] [i_0 - 1] [i_0 + 2]) ? -32767 : 4823814966822772227)), -18));
                    arr_11 [i_2] [i_1] [i_0] = ((-(arr_7 [i_0] [i_1] [i_0 + 1])));
                    arr_12 [i_0] [i_1] = (((((arr_9 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) | (arr_9 [i_0] [i_0] [i_0 - 2] [i_0 - 2]))) & (((arr_9 [i_0] [i_0] [i_0 - 1] [0]) | (-32767 - 1)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_12 -= ((~(arr_6 [i_4] [i_4] [i_4])));
                arr_19 [i_3] [i_3] = ((((min(var_10, var_6))) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1]) : ((1 ^ (~32763)))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_13 = (max(var_13, (((~(min((min((arr_15 [i_3] [i_4]), 1)), (arr_21 [i_5 - 1]))))))));
                            var_14 ^= ((!((((arr_9 [i_3 - 1] [i_5 + 1] [i_5] [i_3 - 1]) << ((((32764 ? var_8 : (arr_1 [i_4] [12]))) + 3118925288793699917)))))));
                            var_15 = (min((((arr_2 [i_3 - 1] [i_5 + 1]) ? (arr_2 [i_3 - 1] [i_6]) : (arr_2 [i_3 - 1] [i_3 - 1]))), (((((32765 ? (arr_17 [i_3] [i_4] [i_4]) : (arr_18 [i_3] [1] [i_3]))) | var_1)))));
                        }
                    }
                }
            }
        }
    }
    var_16 = ((-5775441438772199104 ? ((1695005923 ? 1517691872827822200 : 2017612633061982208)) : (((var_10 ? var_2 : ((max(var_0, -32758))))))));
    var_17 = (-((((max(var_8, var_3))) ? ((var_9 ? 7980712165498317393 : var_7)) : 0)));
    #pragma endscop
}
