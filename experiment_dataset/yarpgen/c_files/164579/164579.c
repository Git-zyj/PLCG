/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (0 - 8);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (~var_5);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] = ((+(((var_2 ^ 22159) ? var_2 : (max(var_5, var_12))))));
                        var_14 = (arr_5 [i_0] [i_1] [i_0] [i_3]);
                        var_15 = ((((-(min(100017741, (arr_8 [7] [7] [i_2 + 1])))))) ? (((43376 < var_1) ? (9 - 5) : (((3851108887950002017 ? var_2 : (arr_0 [i_0])))))) : (((+(((arr_8 [i_0] [i_1] [i_2]) - 4179162512))))));
                    }
                }
            }
        }
        var_16 = 18446744073709551609;
        var_17 = ((((((arr_3 [i_0] [i_0]) | (arr_0 [i_0])))) & (min(991631564, -3851108887950002010))));
        var_18 += ((-32752 < (arr_1 [1])));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_23 [i_4] [i_5] [9] [i_7] = ((arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4]) == (43377 | var_0));
                            arr_24 [i_4] [i_5] [i_6 + 1] [i_7 + 1] = ((~((var_1 ? 43363 : ((var_1 ? 1 : 82))))));
                            var_19 = (max(var_19, ((max(var_5, (-var_6 / -45062))))));
                        }
                    }
                }
                var_20 = (min((((arr_4 [i_4] [i_4 - 1]) & (arr_4 [11] [i_4 - 1]))), (arr_19 [i_4])));
            }
        }
    }
    #pragma endscop
}
