/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 = (((arr_2 [1] [i_2]) ? ((~(arr_3 [i_0 + 3] [i_1]))) : (arr_5 [i_0 - 2] [8])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 = (max(((min(218, 1))), (((arr_5 [i_0] [i_0]) ? (((arr_3 [i_0] [i_1]) | 1)) : (arr_4 [i_0 - 2] [i_0 - 1])))));
                        arr_10 [i_3] [i_2] [i_1] [i_3] = var_7;
                        var_19 = (min(var_19, (var_9 <= var_9)));
                        arr_11 [i_0] [14] [i_0] [i_3] [i_3] [i_3] = (((min(49, (arr_1 [i_0 - 3])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_20 = ((!((min(((1 ? 1 : 0)), ((min(var_14, var_15))))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_21 = (((arr_9 [i_5]) && (1 % 1)));
                    var_22 = (!var_5);
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_22 [i_5] [i_5] [i_7] [i_5] = 1;
                    arr_23 [i_4] [i_5] [i_5] = 5499985034642835318;
                    var_23 = (min(var_23, -77));
                    var_24 = (min(((var_14 ? ((9539862066842749225 * (arr_19 [i_4] [i_4] [i_4] [i_4]))) : (((min(-1, 240)))))), ((-(((arr_13 [i_4]) ^ 17381034966534582049))))));
                }
            }
        }
    }
    var_25 = (max(var_25, var_9));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    var_26 = 1;
                    arr_30 [i_8] [i_9 - 1] [i_9 - 1] [i_8] = ((~((0 ? ((4194303 * (arr_25 [0]))) : (((min(var_4, var_16))))))));
                }
            }
        }
    }
    #pragma endscop
}
