/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((arr_2 [i_0 + 1]) < 16494722956756604309))), 524287));
        var_17 -= (~(((~16494722956756604309) ? var_15 : (arr_0 [i_0]))));
        var_18 += ((((var_12 ? (arr_1 [i_0 - 1]) : 1952021116952947281)) & ((min((arr_1 [i_0]), (arr_1 [i_0 - 2]))))));
        arr_4 [i_0] [12] = ((var_9 ? ((~(arr_0 [i_0 - 2]))) : (((arr_2 [i_0 - 1]) ^ ((21205452 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [20] [i_1] [i_2] = (((arr_7 [i_1]) ? (((~(1 | 0)))) : (((1 ? 16494722956756604303 : 8714191028457717016)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = ((~(arr_12 [i_0] [i_1] [i_2] [i_3])));

                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_20 = (arr_7 [i_1]);
                            arr_16 [i_1] = (arr_6 [i_0] [i_1] [i_4]);
                            var_21 = (min(var_21, -492972240));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_22 *= ((-(arr_11 [i_0] [i_1] [i_5 - 1] [i_5] [11] [i_5])));
                            arr_21 [8] [i_1] [i_2] = (((arr_13 [i_0 - 1] [i_1] [i_0 - 2]) && 16));
                        }
                        var_23 = (3968584593382927087 ? (arr_11 [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                        var_24 = ((0 ? (arr_12 [i_0 - 1] [i_1] [i_1] [i_1]) : var_10));
                        arr_22 [i_0 + 1] [i_1] [i_2] [i_3] = (((~178) ? var_1 : 1));
                    }
                    var_25 = ((~(arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0])));
                }
            }
        }
    }
    var_26 = (var_2 & -6081584210314157774);
    #pragma endscop
}
